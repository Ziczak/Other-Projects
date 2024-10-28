#include <stdio.h>
#include <stdlib.h>

void sayHi();

int main()
{
    printf("Top \n");
    sayHi("Mike", 40);
    sayHi("Oscar", 25);
    sayHi("Tom", 10);
    printf("\n bottom ");
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}
