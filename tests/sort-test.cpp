#include <iostream>
#include <cmath>
#include <string>
#include <string>
    using namespace std;

void  sort(int arr[] , int lenght) {
    bool needSort = true;
    int transCount = 0;
    while (needSort) {
        needSort = false;
        for (int  j = 0; j < lenght - 1; j++)
        {
            transCount++;
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                needSort = true;
                
            }
            
        }
    }
    cout << "Trans Count 1: " << transCount << "\n";
}

void  sort2(int arr[] , int lenght){
    int transCount = 0;
    for (int  i = 0; i < lenght - 1; i++)
    {
        for (int  j = 0; j < lenght - 1 - i; j++)
        {
            transCount++;
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                
            }
            
        }
    }
    cout << "Trans Count 2: " << transCount << "\n";
}


int main() {
    int arr[15] = {1, 20, 3, 40, 50, 2, 120, 11, 20, 11, 4, 5, 10, 1, 55};
    int arr2[15] = {1, 20, 3, 40, 50, 2, 120, 11, 20, 11, 4, 5, 10, 1, 55};
    sort(arr, 15);
    sort2(arr2, 15);

     for (int  j = 0; j < 15; j++) {
         cout << arr[j] << "\n";
     }

    for (int  j = 0; j < 15; j++) {
         cout << arr2[j] << "\n";
     }

     cout << "end";
}