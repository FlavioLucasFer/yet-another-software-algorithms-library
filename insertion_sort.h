#ifndef __YASL_INSERTION_SORT__
#define __YASL_INSERTION_SORT__

#include <algorithm>

namespace yasl // Yet Another Sorting Library
{
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

	/*
		Sort and change the original array.
	*/
	template <typename T> void insertion_sort (T *arr, unsigned int length)
	{
		for (unsigned int j = 1; j < length; j++) {
			T key = arr[j];
			int i = j-1;
			while (i > -1 && arr[i] > key) {
				arr[i+1] = arr[i];
				i--;
			}
			arr[i+1] = key; 
		}
	}

	/*
		Sort without change the original array.
		The sorted array will be set in the arr_dest.
	*/
	template <typename T> void insertion_sort (T *arr_base, T *arr_dest, unsigned int length)
	{
		std::copy(arr_base, arr_base+length, arr_dest);
	    return insertion_sort(arr_dest, length);
	}
}

#endif
