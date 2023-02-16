#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeofa(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeofa(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeofa(c));
printf("Size of along long int: %lu byte(s)\n", (unsigned long)sizeofa(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeofa(d));
return (0);
