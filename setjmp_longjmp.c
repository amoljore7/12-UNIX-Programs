/*
This program demonstates working of setjmp and longjmp.
We can not use goto to pass the control outside the function.
For that purpose we use setjmp and longjmp.

int setjmp(jmp_buf env);

Sets up the local jmp_buf buffer and initializes it for the jump. 
This routine saves the program's calling environment in the environment buffer specified by 
the env argument for later use by longjmp. 
If the return is from a direct invocation, setjmp returns 0. 
If the return is from a call to longjmp, setjmp returns a nonzero value.

void longjmp(jmp_buf env, int value);

Restores the context of the environment buffer env that was saved by invocation of the setjmp routin.
The value specified by value is passed from longjmp to setjmp.
After longjmp is completed, program execution continues as if the corresponding invocation of setjmp 
had just returned.
If the value passed to longjmp is 0, setjmp will behave as if it had returned 1; 
otherwise, it will behave as if it had returned value.

*/

#include <stdio.h>
#include <setjmp.h>

// Create a variable of type jmp_buf
static jmp_buf buf;
 
void second(void) 
{
    printf("second\n");         // prints
    longjmp(buf,5);             // jumps back to where setjmp was called - making setjmp now return 5
}
 
void first(void) 
{
    second();

	// The below code is not executed because control is passed on setjmp calling point
    printf("first\n");          
}
 
int main() 
{   
	int no;

	// when setjmp is executed first time it returns 0
    if ( (no = setjmp(buf)) == 0 ) 
	{
		printf("Value of no is %d\n",no);
        first();
    } 
	else 
	{	
		// when longjmp jumps back, setjmp returns 5
        printf("In main\n");       
		printf("Value of no is %d\n",no);
    }
 
    return 0;
}