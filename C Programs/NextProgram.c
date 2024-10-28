#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John";
    char characterName2[] = "John, ";
    int characterAge = 35;
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old. \n", characterAge);

    characterAge = 46;
    printf("He really liked the name %s\n", characterName2);
    printf("but did not like being %d. \n", characterAge);

    return 0;
}