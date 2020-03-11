#include <iostream>

int* lower_bound( int *first, int *last, int target ){

    int *candidate; // pointer to the candidate
    int count{last-first}; // count is the number of elements in array
    int step{count/2}; // step is the new "mid"
    int end{count}; // the variable "end" keep the index where the vector ends

    for(; count > 0;){
        // while there is something in the array do this
        if(*(first+step) >= target){
            // going left
            candidate = first + step;
            count = end - step;
            end = step; // here we mark the end
            step -= count/2;
        }else{
            // going right
            count = end - step;
            step += count/2;
        }

    }

    return candidate;

}


int main()
{
    int data[]{ 0, 0, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };
    size_t sz = sizeof(data)/sizeof(data[0]);
    int target = 0;

    int* lower = lower_bound( data, data+sz, target );
    // int * upper = upper_bound( data, data+sz, target );

    // Assume this function prints out the entire content of a range.
    // print( lower, upper );
    std::cout << lower - data << std::endl;

    return 0;
}