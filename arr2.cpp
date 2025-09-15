#include <iostream>
#include <cmath>
#include <math.h>

    using namespace std;

    int main() {
        int arr[5];
        int sum = 0;
        int minIndex = 0;

         for (int i = 0; i < 5; i++){
            cout << "enter the number " << i+1 << ": ";
            cin >> arr[i];
        }
                 
        for (int i = 0; i < 5; i++) {
            if (abs(arr[i]) <= abs(arr[minIndex])) {
                minIndex = i;
            }
            
        }

        for (int i = minIndex; i < 5; i++) {
            sum += abs(arr[i]);
        }
        
       printf("Result: %d", sum);

       return 0 ;
    }
    