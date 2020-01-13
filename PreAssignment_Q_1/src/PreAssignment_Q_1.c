/*
 ============================================================================
 Name        : PreAssignment_Q_1.c
 Author      : Shivam Palaskar
 Version     :
 Copyright   : Open source
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int array[6], temp, isSorted = 1;
	printf("Enter 6 Array Elements : ");
	for (int i = 0; i < 6; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < 6; i++) {
		if (isSorted) {
			isSorted = 0;
			for (int j = 0; j < (6 - i - 1); j++) {
				while (array[j] < 0) // To check for negative number
					j++;          // if negative then increment index
				int k = j;
				k++;
				while (array[k] < 0) // To check for negative number
					k++;          // if negative then increment index
				if (array[j] > array[k]) { // Bubble Sort Algorithm
					temp = array[k];
					array[k] = array[j];
					array[j] = temp;
					isSorted = 1;
				}
			}
		}
	}
	printf("\nSorted Array : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", array[i]);
	}
	return EXIT_SUCCESS;
}
