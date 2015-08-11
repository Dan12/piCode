#include <stdlib.h>
#include <stdio.h>

void func1(){
	printf("Func 1\n");
}

void func2(){
	printf("Func 2\n");
}

void defaultFunc(){
	printf("Default Func\n");
}

void pointerFunc(void);

struct intFloat{
	int intVal;
	float floatVal;
};

struct xampl {
  int x;
};

void structTests(void);

void arrayTests(void);

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

	int i;
	for(i = 0; i < 3; i++)
		printf("For %d\n", i);

	i = 0;
	do{
		printf("Hey\n");
		i++;
	}while(i < 1);

	for(i = 0; i < 5; i++){
		printf("Random %d: %d\n", i, randMult(i));
	}

	int input;
	printf("Enter number: ");
	scanf("%d", &input);
	printf("%d\n", &input);
	switch(input){
		case 1:
			func1();
			break;
		case 2:
			func2();
			break;
		default:
			defaultFunc();
			break;
	}

	pointerFunc();

	structTests();

	arrayTests();

	return 0;
}

int randMult(int a){
	return rand()*a;
}


void pointerFunc(){
	printf("Pointer Tests\n");
	int x;            /* A normal integer*/
	int *p;           /* A pointer to an integer ("*p" is an integer, so p
		               must be a pointer to an integer) */

    	p = &x;           /* Read it, "assign the address of x to p" */
    	scanf( "%d", &x );          /* Put a value in x, we could also use p here */
    	printf( "%d\n", *p ); /* Note the use of the * to get the value */
	printf("%d", p);

	int *ptr = malloc( sizeof(*ptr) );
	*ptr = 5;
	x = *ptr;
	printf("%d\n", *ptr);
	printf("%d\n",x);
	free(ptr);
	ptr = 0;

	int array[] = {45,67,88};
	int *array_ptr = array;
	printf(" first element: %i\n", *(array_ptr++));
	printf("second element: %i\n", *(array_ptr++));
	printf(" third element: %i\n", *array_ptr);
}

void structTests(){
	struct intFloat ifstruct;
	ifstruct.intVal = 2;
	ifstruct.floatVal = 2.5;
	printf("%d %.2f\n", ifstruct.intVal, ifstruct.floatVal);
	struct xampl structure;
    	struct xampl *ptr;

    	structure.x = 12;
    	ptr = &structure; /* Yes, you need the & when dealing with
                           structures and using pointers to them*/
    	printf( "%d\n", ptr->x );  /* The -> acts somewhat like the * when
				   it is used with pointers
                                   It says, get whatever is at that memory
                                   address Not "get what that memory address
                                   is"*/
}

void arrayTests(){
	printf("Array Tests\n");

	char stringTest[20];
	scanf("%s", stringTest);
	int i;
	int strLen = (int) (sizeof(stringTest)/sizeof(stringTest[0]));
	printf("Looping\n");
	for(i = 0; i < strLen; i++){
		printf("*%c*_", stringTest[i]);
	}
	printf("\nLoop Done\n");
	printf("*%s*\n", stringTest);
}
