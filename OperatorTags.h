#pragma once
#include <type_traits>
#include "TypeLists.h"


/*
class Tag_OPERATOR {};

// SAS
class Tag_SLEDGE		: public Tag_OPERATOR {};
class Tag_THATCHER		: public Tag_OPERATOR {};
class Tag_SMOKE			: public Tag_OPERATOR {};
class Tag_MUTE			: public Tag_OPERATOR {};

// FBI
class Tag_ASH			: public Tag_OPERATOR {};
class Tag_THERMITE		: public Tag_OPERATOR {};
class Tag_PULSE			: public Tag_OPERATOR {};
class Tag_CASTLE		: public Tag_OPERATOR {};

// GIGN
class Tag_MONTAGNE		: public Tag_OPERATOR {};
class Tag_TWITCH		: public Tag_OPERATOR {};
class Tag_ROOK			: public Tag_OPERATOR {};
class Tag_DOC			: public Tag_OPERATOR {};

// SPETSNAZ
class Tag_GLAZ			: public Tag_OPERATOR {};
class Tag_FUZE			: public Tag_OPERATOR {};
class Tag_KAPKAN		: public Tag_OPERATOR {};
class Tag_TACHANKA		: public Tag_OPERATOR {};

// GSG9
class Tag_BLITZ			: public Tag_OPERATOR {};
class Tag_IQ			: public Tag_OPERATOR {};
class Tag_BANDIT		: public Tag_OPERATOR {};
class Tag_JAEGER		: public Tag_OPERATOR {};

// JTF2
class Tag_BUCK			: public Tag_OPERATOR {};
class Tag_FROST			: public Tag_OPERATOR {};

// NAVY
class Tag_BLACKBEARD	: public Tag_OPERATOR {};
class Tag_VALKYRIE		: public Tag_OPERATOR {};



using OperatorTags =
type_list
<
	Tag_SLEDGE,		Tag_THATCHER,	Tag_SMOKE,		Tag_MUTE,
	Tag_ASH,		Tag_THERMITE,	Tag_PULSE,		Tag_CASTLE,
	Tag_MONTAGNE,	Tag_TWITCH,		Tag_ROOK,		Tag_DOC,
	Tag_GLAZ,		Tag_FUZE,		Tag_KAPKAN,		Tag_TACHANKA,
	Tag_BLITZ,		Tag_IQ,			Tag_BANDIT,		Tag_JAEGER,
	Tag_BUCK,		Tag_FROST,
	Tag_BLACKBEARD, Tag_VALKYRIE
>;


// Si T est un operator tag.
template <class T>
struct est_operator
	: std::integral_constant<bool, indice_par_type<T, OperatorTags>::value != -1>
{
};
*/