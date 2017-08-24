#ifndef FILECLAS_H_
#define FILECLAS_H_

#include <stdio.h>

class file {
	FILE* f;
	FILE* F();
public:
	file();
	file(const char* fname, const char* mode="r");
	~file();
	FILE* fp(); 
	int open(const char* path, const char* mode="r");
	int reopen(const char* path, const char* mode);
	int Getc();
	int Ungetc(int c);
	int Putc(int c);
	int puts(const char* s);
	char* gets(char* s, int n);
	int printf(const char* format, ...);
	size_t read(void* ptr, size_t size, size_t n);
	size_t write(const  void* ptr, size_t size, size_t n);
	int eof();
	int close();
	int flush();
	int seek(long offset, int whence);
	int getpos(fpos_t* pos);
	int setpos(const fpos_t* pos);
	long tell();
	void rewind();
	void setbuf(char* buf);
	int  setvbuf(char* buf, int type, size_t sz);
	int error();
	void clearerr();
};







#endif
