#include <iostream>

using namespace std;

void shellSort(int nums[], int size) {        
    int end = size - 1;    
    for (int i = 0; i < size; i++)
    {
        int k = end / 2;
        if(k == 0) {
            break;
        }
        end = k;
        for (int j = 0; j < size; j++)
        {       
            if((j+k) >= size) {
                break;
            }
            if (nums[j+k] < nums[j])
            {
                int temp = nums[j];
                nums[j] = nums[j+k];
                nums[j+k] = temp;
            }
            
        }                
    }

    for (int i = 0; i < size; i++)
    {        
        if(i == (size - 1)) {
            cout << nums[i];
        } else {
            cout << nums[i] << ", ";
        }
    }
    
}



int main() {    
    int size = 9;
    int nums[] = {24, 46, 11, 26, 57, 38, 27, 20, 17};
    shellSort(nums, size);
    return 0;
}

