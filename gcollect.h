// GCOLLECT_H

#ifndef DAVELIB_GCOLLECT_H
#define DAVELIB_GCOLLECT_H

#ifdef _cplusplus_
extern "C" {
#endif


typedef struct GarbageCollector	{

			(*store)( void* );
	void*	(*alloc)( uint64_t );
	void*	(*calloc)( uint64_t );
			(*free)( void* );
	void*	(*realloc( void* );
			(*inc)( void* );
			(*dec)( void* );
			(*add)( void*, signed );
			(*verify)( void* );
	
	void*** adjusted;		
	void**	_;
	
} GarbageCollector;

extern struct GarbageCollector gc;
extern void InitGC();


#ifdef _cplusplus_
}
#endif

#endif
