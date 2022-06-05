#include <stdio.h>

/**
  * main - Prints the size of various types
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
    char a;
    int b;
    long long int d;
    float e;

    printf("Size of a char: %dbyte(s)\n", sizeof(a));
    printf("Size of an int: %dbyte(s)\n", sizeof(b));
    printf("Size of a long int: %dbyte(s)\n", sizeof(c));
    printf("Size of a long long int: %dbyte(s)\n", sizeof(d));
    printf("Size of a float: %dbyte(s)\n", sizeof(e));
    return (0);
}
