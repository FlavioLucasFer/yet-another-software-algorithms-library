#ifndef __YASL_INSERTION_SORT__
#define __YASL_INSERTION_SORT__

#include <algorithm>

namespace yasl // Yet Another Sorting Library
{
	/*
		Sort and change the original array.
	*/
	template <typename T> T* insertion_sort (T arr[], unsigned int length);

	/*
		Sort without change the original array.
		The sorted array will be set in the arr_dest.
	*/
	template <typename T> T* insertion_sort (T arr_base[], T arr_dest[], unsigned int length);
}

#endif
