#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sec; 
	int min;
	int hour;
	
	printf("input second : ");
	scanf("%d", &sec);
	
	hour = sec/3600;
	min = (sec%3600)/60;
	
	printf("second %i is %i : %i : %i\n",
	 	sec,
		hour,
	  	min,
		sec%60);
	
	return 0;
}
