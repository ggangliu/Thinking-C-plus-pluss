#include "fileclas.h" 
#include <stdlib.h>

file::file(const char* fname, const char* mode){
	f = fopen(fname, mode);
	if (NULL == f) {
		printf("%s: file not found\n", fname);
		exit(1);
	}
}

file::~file(){
	fclose(f);
}

FILE* file::fp(){
	return f;
}


