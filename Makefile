MODULES	=	add_func
DATA_built	=	add_funcs.sql

PG_CONFIG	=	pg_config
PGXS	:=	$(shell	$(PG_CONFIG)	--pgxs)
include	$(PGXS)