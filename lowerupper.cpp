#include <iostream>

int* lower_bound( int *first, int *last, int target ){

    int* candidate{last}; // pointer to the candidate
    int count{last-first}; // count is the number of elements in array
    int step{count/2}; // step is the new "mid" of a normal binary search
    int end{count}; // the variable "end" keep the index where the vector ends
    int begin{0}; // the variable "begin" keep the index where the vector begins

    for(; count > 0;){
        // while there is something in the array do this
        if(*(first+step) >= target){
            // going left
            candidate = first + step;
            end = step; // here we mark the end
            count = end - begin;
            step -= (count+1)/2; // here we mark the steps to the memory
            }else{
            // going right
            begin = step+1;
            count = end - begin;
            step += (count+1)/2;
            
        }

    }

    return candidate;

}


int main()
{
    int data[]{ 0, 0, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };
    size_t sz = sizeof(data)/sizeof(data[0]);
    int target;

    std::cin >> target;

    int* lower = lower_bound( data, data+sz, target );
    // int * upper = upper_bound( data, data+sz, target );

    // Assume this function prints out the entire content of a range.
    // print( lower, upper );
    if(*lower != target)
        std::cout << "Target not found" << std::endl;
    else
        std::cout << "Here is the lower index of the target: " << lower - data << std::endl;

    return 0;
}