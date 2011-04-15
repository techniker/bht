/*
 ============================================================================
 Name        : time.c
 Author      : Bjoern Heller
 Version     :
 Copyright   : This code is licensed under GNU/ GPL
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	time_t  timer = time(NULL);
	    printf("ctime is %s\n", ctime(&timer));
	    return 0;

	return EXIT_SUCCESS;
}
