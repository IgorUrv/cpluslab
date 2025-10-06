#include <iostream>
#include <cmath>
#include <string>
#include <string>
    using namespace std;

void  sort(int arr[] , int lenght) {
    bool needSort = true;

    while (needSort) {
        needSort = false;
        for (int  j = 0; j < lenght - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                needSort = true;
            }
            
        }
        
    }
}


int main(){
    int arr[10] = {1, 20, 3, 40, 50, 2, 120, 11, 20, 11};
    sort(arr, 10);
     for (int  j = 0; j < 10 - 1; j++) {
         cout << arr[j] + "\n";
     }
}