#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op1, op2; 
	int sum, sub; 
	
	printf("input integers :");
	scanf("%i %i", &op1, &op2);
	
	sum = op1 + op2;
	sub = op1 - op2;
	
	printf("+ operation : %i\n", sum);
	printf("- operation : %i\n", sub);
	printf("* operation : %i\n", op1*op2);
	printf("/ operation : %i\n", op1/op2);
	printf("%% operation : %i\n", op1%op2);
	return 0;
}
