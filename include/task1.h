#pragma once

#include <cstring>


template<typename T>
bool compare(const T a, const T b)
{
	return a < b;
}
template<>
bool compare<const char*>(const char * a, const char * b)
{
	if (strlen(a) == strlen(b))
		return strcmp(a, b) < 0;
	else
		return  strlen(a) < strlen(b);
}

template<>
bool compare<char*>(char * a, char * b)
{
	if (strlen(a) == strlen(b))
		return strcmp(a, b) < 0;
	else
		return  strlen(a) < strlen(b);
}



/*template<typename T>
void msort(T arr[], size_t size)
{
	if (size > 1)
	{
		size_t const left_size = size / 2;
		size_t const right_size = size - left_size;
		msort(&arr[0], left_size);
		msort(&arr[left_size], right_size);
		T * tmp_arr = new T[size];
		size_t lidx = 0, ridx = left_size, idx = 0;
		while (lidx < left_size || ridx < size)
		{
			if (compare(arr[lidx], arr[ridx]))
			{
				tmp_arr[idx++] = std::move(arr[lidx]);
				lidx++;
			}
			else
			{
				tmp_arr[idx++] = std::move(arr[ridx]);
				ridx++;
			}
			if (lidx == left_size)
			{
				std::copy(std::make_move_iterator(&arr[ridx]),
					std::make_move_iterator(&arr[size]),
					&tmp_arr[idx]);
				break;
			}
			if (ridx == size)
			{
				std::copy(std::make_move_iterator(&arr[lidx]),
					std::make_move_iterator(&arr[left_size]),
					&tmp_arr[idx]);
				break;
			}
		}
		std::copy(std::make_move_iterator(tmp_arr),
			std::make_move_iterator(&tmp_arr[size]),
			arr);
		delete[] tmp_arr;
	}
}*/

template<typename T>
void copy(T * begin, T * end, T * dst)
{
	for (size_t i = 0; begin + i != end; ++i)
		*(dst + i) = *(begin + i);
}

template<typename T>
void msort(T arr[], size_t size)
{
	if (size > 1)
	{
		size_t const left_size = size / 2;
		size_t const right_size = size - left_size;
		msort(&arr[0], left_size);
		msort(&arr[left_size], right_size);
		T * tmp_arr = new T[size];
		size_t lidx = 0, ridx = left_size, idx = 0;
		while (lidx < left_size || ridx < size)
		{
			if (compare(arr[lidx], arr[ridx]))
			{
				tmp_arr[idx++] = arr[lidx];
				lidx++;
			}
			else
			{
				tmp_arr[idx++] = arr[ridx];
				ridx++;
			}
			if (lidx == left_size)
			{
				copy(&arr[ridx],
					&arr[size],
					&tmp_arr[idx]);
				break;
			}
			if (ridx == size)
			{
				copy(&arr[lidx],
					&arr[left_size],
					&tmp_arr[idx]);
				break;
			}
		}
		copy(tmp_arr,
			&tmp_arr[size],
			arr);
		delete[] tmp_arr;
	}
}

	