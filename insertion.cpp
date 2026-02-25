#include <iostream>

using namespace std;

void insertionSort(int nums[], int size) {
    for (int i = 0; i < size; i++)
    {                  
        for (int j = 0; j < size; j++)
        {
            if (nums[j+1] < nums[j])
            {
               for (int z = j+1; z > 0; z--)
               {
                    if (nums[z] < nums[z-1])
                    {
                        int temp = nums[z-1];
                        nums[z-1] = nums[z];
                        nums[z] = temp;

                        cout << "Step:\n";
                        for (int row = 80; row >= 0; row -= 10) {
                            for (int col = 0; col < size; col++) {
                                if (nums[col] >= row) {
                                    cout << " █ ";
                                } else {
                                    cout << "   ";
                                }
                            }
                            cout << endl;
                        }
                        cout << "-----------------\n";
                    } else {
                        break;
                    }
                    
               }
                
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
    int size = 5;
    int nums[] = {67, 32, 24, 78, 21};

    insertionSort(nums, size);
}