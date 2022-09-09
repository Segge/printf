#include <stdio.h>
/**
*Description: main-prints size of types
*Return: 0 if success.
*/
int main(void);
{

char c;
int i;
long l;
long long m;
float f;

printf("Size of a char: %i byte(s)\n", sizeof(c));
printf("Size of an int: %i byte(s)\n", sizeof(i));
printf("Size of a long int: %i byte(s)\n", sizeof(l));
printf("Size of a long long int: %i byte(s)\n", sizeof(m));
printf("Size of a float: %i byte(s)\n", sizeof(f));
return (0);
}
