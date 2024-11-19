#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

template <typename T>
void printVec(const std::vector<T>& nums) //helper function to print vector
{
    for (auto x: nums)
        std::cout << x << " ";
    std::cout << "\n";
}

void selectionSort(std::vector<int>& nums){
    for (auto it = nums.begin(); it != nums.end(); it++){ //first iteration (element we are preparing to swap)
        auto current_min = it;
        for (auto it2 = it + 1; it2 != nums.end(); it2++){ //second iteration (looking for min)
            if (*it2 < *current_min)
                current_min = it2;
        }
        std::iter_swap(it, current_min); //swaps contents of two iterators
    }
}

// void insertionSort(std::vector<int>& nums){
//     for (auto it = nums.begin(); it!= nums.end(); it++){
//         for (auto it2 = it+1; it2!= )
//     }
// }

void merge(std::vector<int>& nums, int low, int mid, int high){
    
}

//split into 2 sub arrays.
//call mergeSort on both if subarrays arents size 1
void mergeSort(std::vector<int>& nums, int left, int right){
    if (left < right){ //subarray still has more than 1 element
        int mid = left + ((right - left)/2); //finds midpoint of subarray

        mergeSort(nums, left, mid); //mergesort first subarray
        mergeSort(nums, mid+1, right); //mergesort second subarray

        merge(nums, left, mid, right); //merge both subarrays together (correctly sorted)
    }   
    return;        
}

int main()
{
    std::vector<int> nums{1,2,3,4,5};
    int temp = std::move(nums[2]);
    printVec(nums);
}