#include <iostream>

int* filter_f(int *first, int *last)
{

	size_t step{0}; // this variable is an index used to skip the memory and append at the beginning
	size_t sz = last - first;

	for(size_t i{0}; i < sz-1; ++i){
		if(*(first+i) > 0){ // if number positive make it to the beginning of the vector
			*(first+step) = *(first+i);
			step++;
			last = first + step; // last now it's a pointer to the memory nexto to the last positive number
			}
		}

	return last;
	
}

void print(int *first,int *last)
{	

	// function to print vector

	size_t sz = last - first;

	std::cout << "[";

	for(size_t i{0}; i < sz ; ++i){
		std::cout << *(first+i) << " ";
	}

	std::cout << "]" << std::endl;

}

int main()
{

	int* filter;

	size_t sz;

	std::cout << "Handle the size" << std::endl;
	
	std::cin >> sz;

	int* A = new int[sz];

	for(size_t i{0}; i < sz; ++i){
		std::cin >> *(A+i);
	}

	filter = filter_f(A,A+sz);

	print(A,filter);

	return 0;
}
