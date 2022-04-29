#include "insertion_sort.h"

/*
    PSEUDOCODE

    insertion-sort(A)
        for j = 2 to A.length
            key = A[j]
            i = j - 1
            while i > 0 and A[i] > key
                A[i+1] = A[i]
                i = i-1
            A[i+1] = key
*/

namespace yasl
{
	template <typename T> T* insertion_sort (T arr[], unsigned int length)
	{
		for (unsigned int j = 1; j < length; j++) {
			auto key = arr[j];
			int i = j-1;
			while (i > -1 && arr[i] > key) {
				arr[i+1] = arr[i];
				i--;
			}
			arr[i+1] = key; 
		}
		return arr;
	}

	template <typename T> T* insertion_sort (T arr_base[], T arr_dest[], unsigned int length)
	{
		std::copy(arr_base, arr_base+length, arr_dest);
	    return insertion_sort(arr_dest, length);
	}

	template int* insertion_sort(int[], unsigned int);
	template double* insertion_sort(double[], unsigned int);
	template int* insertion_sort(int[], int[], unsigned int);
	template double* insertion_sort(double[], double[], unsigned int);
}
