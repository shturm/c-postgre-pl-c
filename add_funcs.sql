CREATE	FUNCTION	add(int,	int)	RETURNS	int	
					AS	'$libdir/add_funcs',	'add_ab'	
					LANGUAGE	C	STRICT;	