#include <iostream>
using namespace std;

void partition(int *nums, int size, int *mainPivot) {
    int pivot = *(nums + size - 1);
    int i = -1;
    while(i < size)
    {
        for (int j = 0; j < size; j++)
        {            
            if (*(nums + j) < pivot)
            {
                i += 1;
                int temp = *(nums+j);
                *(nums+j) = *(nums+i);
                *(nums+i) = temp;
            }
            
        }
        i += 1;
        int temp = *(nums+i);
        *(nums+i) = pivot;
        *(nums+size-1) = temp;        
        *mainPivot = i;
        break;
    }
    
        
}

void quickSort(int *nums, int index, int pivot, int size) {
    if(index > pivot && index < size) {        
        quickSort(nums, index+1, pivot, size);
        if (*(nums + index) > *(nums + index + 1))
        {
            int temp = *(nums + index);
            *(nums + index) = *(nums + index + 1);
            *(nums + index + 1) = temp; 
            quickSort(nums, index+1, pivot, size);
        }                                    
    }else if(index < pivot && index > 0) {
        quickSort(nums, index-1, pivot, size);
        if (*(nums + index) < *(nums + index - 1))
        {
            int temp = *(nums + index);
            *(nums + index) = *(nums + index - 1);
            *(nums + index - 1) = temp;                        
            quickSort(nums, index-1, pivot, size);
        }
    }else {
        return;
    }    
    
}

int main() {
    int size = 9;
    int mainPivot = 0;
    int nums[size] = {24, 46, 11, 26, 38, 57, 27, 20, 25};
    int *p = nums;    
    partition(p, size, &mainPivot);
    cout <<endl;        
    // cout << mainPivot <<endl;        
    quickSort(p, mainPivot+1, mainPivot, size);
    quickSort(p, mainPivot-1, mainPivot, size);
    for (int i = 0; i < (size); i++)
    {        
        if(i == (size - 1)) {
            cout << nums[i];
        } else {
            cout << nums[i] << ", ";
        }
    }
    return 0;

}