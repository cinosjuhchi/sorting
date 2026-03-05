#include <iostream>

using namespace std;


void swapElements(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *nums, int low, int high) {
    int pivot = *(nums + high);
    int i = (low-1);
    for (int j = low; j < high; j++)
    {
        if (*(nums+j) < pivot )
        {
            i++;
            swapElements((nums+j), (nums+i));
        }
        
    }
    swapElements((nums+i+1), (nums+high));
    return i+1;
}

void quickSort(int *nums, int low, int high) {
    if(low < high) {
        int pivot = partition(nums, low, high);

        quickSort(nums, low, (pivot-1));
        quickSort(nums, (pivot+1), high);
    }
}

int main() {
    int size = 8;
    int arr[] = {90, 34, 27, 45, 120, 54, 95, 65};

    quickSort(arr, 0, (size - 1));


    for (int i = 0; i < size; i++)
    {
        if (i == (size - 1))
        {
            cout << arr[i];
        }else {
            cout << arr[i] << ",";
        }
        
    }
    

}