/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x = 1, total = 0, y;
    
    while(x <= 10) {
        y = x * x;
        printf("%d\n", y);
        total += y;
        ++x;
    }
    
    printf("Total is %d\n", total);

    return 0;
}
