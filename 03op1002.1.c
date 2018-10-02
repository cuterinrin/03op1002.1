#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sec; 
	
	printf("input second : ");
	scanf("%d" , &sec);
	
	printf("%d sec. is %i : %i\n", sec, sec/60, sec%60);

	return 0;
}
