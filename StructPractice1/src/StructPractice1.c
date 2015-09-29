/*
 ============================================================================
 Name        : StructPractice.c
 Author      : Neeraj Bahl
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct Fraction1
		{
			int numerator;
			int denominator;
		};

	struct Fraction1 f1;
	f1.numerator = 22;
	f1.denominator = 7;

	printf("Numerator =   %d\n", f1.numerator);
	printf("             ---\n");
	printf("Denominator = %d\n", f1.denominator);

	return 0;
}
