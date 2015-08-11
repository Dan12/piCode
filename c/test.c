#include <stdio.h>

//main program, 0 means success
int main()
{
    	printf( "I am alive!  Beware.\n" );

	int num1;
	printf("Enter a number:");
	scanf("%d", &num1);
	printf("%d is an excellent number\n", num1);
	num1 = num1+5;
	printf("Ha, now your number is %d\n", num1);
	printf("Concat test failed\n");
	printf("Next\n");
	printf("True or false, your number equals 10 %d\n", num1==10);
	if(num1 == 10){
		printf("So your original number was 5\n");
	}
	else
		printf("So you are stupid\n");
	printf("Operators %d %d %d %d %d %d\n", 1||0, 0||0, 1&&0, 1&&1, !1, !0);

	return 0;
}
