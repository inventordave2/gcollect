// GCOLLECT_EXTRA_C

#include <stdio.h>
#include "./../stringy/stringy.h"
#include "./../colour/colour.h"
#include "./gcollect.c"

#define merge( str,fmtopt ) { char* _;sprintf(_, str, fmtopt);free(str);str=_; }
#define concat( str1,str2 ) stringy->safecat(str1,str2)

int gc_report()	{

	char* _ = colour->fmt( "The [yellow]GCollect [blue]Garbage Collector [reset]is [green]currently tracking [bright_magenta]%d [green]allocation references." );
	
	merge( _, gc->gc_vars->adjusted_count );
	concat( _, stringy->nl() );
}

