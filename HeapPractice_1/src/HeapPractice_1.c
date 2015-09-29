/*
 ============================================================================
 Name        : Heap_Practice.c
 Author      : Neeraj Bahl
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* intPtr;
	intPtr = malloc (sizeof(int));
	*intPtr = 42;
	printf ("The value is %d", *intPtr);
	free (intPtr);
	return EXIT_SUCCESS;
}
