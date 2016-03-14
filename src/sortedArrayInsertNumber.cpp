/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int *ptr, i, j ;

	if (Arr == NULL || len <= 0)
		return NULL;

	ptr = (int *)realloc(NULL, len + 1);
	for (i = 0; i <= len; i++)
		ptr[i] = 0;
	j = 0;
	while (j < len){
		if (num > Arr[j])
			ptr[j] = Arr[j];
		else
			break;
		j++;
	}

	ptr[j] = num;

	while (j < len){
		ptr[j + 1] = Arr[j];
		j++;
	}
	return ptr;
}