#include <stdio.h>

int powerFunction(int x, int y);

int main(void) {
    int a, b;
    printf("Insert integers values for 'a' and 'b': ");
    fflush(stdin);
    scanf("%d %d", &a, &b);
    int result = powerFunction(a, b);
    printf("'a' elevated to 'b' is %d", result);
    
    return 0;
}

int powerFunction(int x, int y) {
    int result;
    if (y == 0) {
        result = 1;
    } else if(y > 0) {
        while(y >= 1) {
           result = x * result;
           --y; 
        }
    } else {
        while(y <= 1) {
            result = x * result;
            ++y;
        }
    }
    return result;
}