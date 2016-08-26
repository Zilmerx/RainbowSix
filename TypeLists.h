#pragma once



// Structure de base pour contenir les types.
template <class ...>
struct type_list
{
};

// Fonction calculant le nombre de types d'un type_list.
template <class>
struct static_length;
template <class ... Ts>
struct static_length<type_list<Ts...>>
	: std::integral_constant<int, sizeof...(Ts)>
{
};





// Fonction permettant de trouver le type à l'indice "i" d'un type_list.
template <unsigned int, class TList>
struct type_par_indice;

template <unsigned int i, class TL>
using type_par_indice_t = typename type_par_indice<i, TL>::type;

template <class T, class ... Q>
struct type_par_indice<0, type_list<T, Q...>>
{
	using type = T;
};
template <unsigned int i, class T, class ... Q>
struct type_par_indice<i, type_list<T, Q...>>
{
	static_assert(i <= sizeof...(Q), "i <= sizeof...(Q)");
	using type = type_par_indice_t<i - 1, type_list<Q...>>;
};





// Fonction permettant de trouver l'indice d'un type dans une liste.
template <class T, class TList>
struct indice_par_type
	: std::integral_constant<int, -1>
{
};
template <class T, class ...Q>
struct indice_par_type<T, type_list<T, Q...>>
	: std::integral_constant<int, 0>
{
};
template <class U, class T, class ...Q>
struct indice_par_type<U, type_list<T, Q...>>
{
private: // type privé, une sorte de temporaire
	enum
	{
		RechercheDansQueue = indice_par_type<U, type_list<Q...>>::value
	};
public: // l'indice en tant que tel
	enum
	{
		value = RechercheDansQueue == -1 ? -1 : 1 + RechercheDansQueue
	};
};