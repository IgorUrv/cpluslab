#include <iostream>
#include <cmath>
#include <math.h>

    using namespace std;


    int main(){
        int arr[5];
        for (int i = 0; i < 5; i++){
            cout << "enter the number" << i+1;
            cin >> arr[i];
        }
        
        int index, absI ;
        int sum = 0;
        for (int i = 0; i < 5 ; i++)
        {
            if (arr[i] == 0)
            {
                index = i;
            }
          
            
        }

        for (int  i = index + 1; i < 5; i++)
        {
            absI = abs(arr[i]);
            sum += absI;
        }
        

        cout << sum;



        return 0;
    }