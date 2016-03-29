/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	if (Arr != NULL && len > 0) {
		int i = 1, j = 0, k,ptr = 1,flag = 0;
		while (i < len){
			/*int Arr[7] = { 1, 2, 3, 1, 2, 3, 4 };
			int Arr[6] = { 1, 1, 2, 2, 3, 3 };
			*/
			flag = 0;
			for (k = 0; k < i; k++){
				if (Arr[i] == Arr[k]){
					flag = 1;
					break;
				}
			}
			if (flag == 0){
				Arr[ptr] = Arr[i];
				ptr++;
			}
			i++;
		}
		return ptr;
	}
	return -1;
}