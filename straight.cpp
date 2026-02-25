#include <iostream>

using namespace std;

void straigtSort(int nums[], int size) {
    int temp;    
    
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if(nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }        

        cout << "Itera ke - " << i+1 << endl;
        for (int i = 0; i < size; i++)
        {
            if(i == (size - 1)) {
                cout << nums[i] << endl;
            } else {
                cout << nums[i] << ", ";
            }
        }

        temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
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
    int size = 5;
    int nums[] = {2, 5, 8, 3, 7};    
    
    straigtSort(nums, size);

    return 0;
    
}