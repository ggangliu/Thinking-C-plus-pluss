/*A program for to explain how to use setjmp()*/

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

/*a variate use to storage setjmp state information */ 
jmp_buf restart;


/*something need to do*/
int process_trans(int arg) {
	fputs("Do some thing. \n", stderr);
	longjmp(restart, 1);
	return 0;
}


int main() {
	int transaction = 0;
	int value = setjmp(restart); //setup a point to recory execution 
	
 	/*check to do what action next step accoring to longjmp() */
 	//value = setjmp(restart);
 	printf("setjmp's return is %d\n", value);
	switch(value){
		default:
			fputs("Fatal error.\n", stderr);
			break;
		case 1:
			fputs("Invalid transaction.\n", stderr);
			break;
		case 0:
			while(1) {
				process_trans(transaction);
			}
			break;
	}
	
	/*Save data and exit program*/
	//write_data_to file();
	
	return value == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}

