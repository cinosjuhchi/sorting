#include <iostream>

using namespace std;


void bubbleSort(int nums[], int size) {
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (nums[j] > nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
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
    int size = 6;
    int nums[size] = {2, 12, 3, 29, 20, 6};
    cout << "Hello disini saya akan melakukan bubble sorting dengan angka berikut :" <<endl;
    for (int i = 0; i < size; i++)
    {
        if(i == (size - 1)) {
            cout << nums[i];
        } else {
            cout << nums[i] << ", ";
        }
    }

    cout << endl;
    
    cout << "Berikut adalah hasil Bubble Sort :" <<endl;

    bubbleSort(nums, size);

}


