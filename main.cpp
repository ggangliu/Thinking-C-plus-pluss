#include <iostream>
#include <assert.h>
#include <fstream>
#include "fileclas.h"
#include <strstream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
 
int main(int argc, char** argv) {
f
	ofstream data("data.txt");
	ofstream bindata("data.bin", ios::binary);
	time_t timer(NULL); 
	data << localtime(&timer) << ends;
	
#if 0
	#define BSIZE 100
	{
		cout.setf(ios::hex, ios::basefield);
		cout << 10 << endl;
		//cout << -10 << endl;
		ostrstream s;
		s << "'The time has come', the walrus said, " << ends;
		cout << "old = " << (void*)s.str() << endl; 
		s.seekp(-1, ios::cur);
		s.rdbuf()->freeze(0);
		s <<"'To speak of many things'" << ends;
		cout <<"new = " << (void*)s.str() << endl;
		cout << s.rdbuf();
		delete s.str();
	}
#endif
		
#if 0
	char buf[BSIZE];
	{
		ifstream in("main.cpp");
		assert(in);
		//cout << in.rdbuf();
		while (in.get(*cout.rdbuf())){
			in.ignore();
		}
		
		return 0;
		
		ofstream out("fileclas.out");
		assert(out);
		int i = 1;
		
		while(in.get(buf, BSIZE)){
			in.get();
			cout << buf << endl;
			out << i++ << ": " << buf << endl; 
		}
	}
	
	cout << "next" << endl;
	
	ifstream in("fileclas.out");
	assert(in);
	
	while(in.getline(buf, BSIZE)){
		//cout << buf << endl;
		char* cp = buf;
		while(*cp != ':'){
			cp++;
		}
		
		cp += 2;
		cout << cp << endl;
	}
	
	return 0;
#endif
#if 0	
	int i;
	float fl;
	char c;
	char buf[BSIZE];
	
	cin >> i;
	cin >> fl;
	cin >> c;
	cin >> buf;
	
	cout << "i = " << i << endl;
	cout << "f = " << fl << endl;
	cout << "c = " << c << endl;
	cout << "buf = " << buf << endl;
	
	cout << flush;
	cout << hex << "0x" << i << endl;
	
	return 0;
#endif

#if 0	
	assert(argc == 2);
	file f(argv[1]);
	
	while(fgets(buf, BSIZE, f.fp())){
		puts(buf);
	}
	
	cout << hex << "0x" << 20 << endl;
	 
	return 0;
#endif
}
