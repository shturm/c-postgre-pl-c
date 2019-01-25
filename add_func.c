// PostgreSQL Server Programming, 2nd Edition; page 305

#include	"postgres.h"
#include	"fmgr.h"
PG_MODULE_MAGIC;

Datum add_ab(PG_FUNCTION_ARGS);
PG_FUNCTION_INFO_V1(add_ab);

Datum add_ab(PG_FUNCTION_ARGS)
{
	int32			arg_a	=	PG_GETARG_INT32(0);
	int32			arg_b	=	PG_GETARG_INT32(1);
	PG_RETURN_INT32(arg_a	+	arg_b);
}

// hannu=#	CREATE	FUNCTION	add(int,	int)	
// hannu-#			RETURNS	int	
// hannu-#	AS	'/usr/lib/postgresql/9.3/lib/add_func',	'add_ab_null'	
// hannu-#	LANGUAGE	C	STRICT;	
// CREATE	FUNCTION	
// And	voilá—you	have	created	your	first	PostgreSQL	C-language	extension	function:
// hannu=#	select	add(1,2);	
// 	add	
// -----	
// 			3	
// (1	row)	