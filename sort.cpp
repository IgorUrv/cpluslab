#include <iostream>
#include <cmath>
#include <string>
#include <string>
    using namespace std;

void  sort(int arr[] , int lenght){
    bool needSort = true;

    while (needSort) {
        needSort = false;
        for (int  j = 0; j < lenght - 1 - i; j++)
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
    int y , x;
    cout << "enter x";
    cin >> x;

    cout << "enter y";
    cin >> y;
    int arr[y][x];

    for (int  i = 0; i < x; i++)
    {
        for (int  j = 0; j < y; j++)
        {
            cout << "enter the arr" << "["<< i << "][" << j << "]";
            cin >> arr[i][j];
        }
        
    }
    
        int arrN[x];
   
      for (int  i = 0; i < x; i++)
    {
        for (int  j = 0; j < y; j++)
        {
            if (arr[i][j] == arr[i][0])
            {
                arrN[i] = arr[i][0];
            }
            
        }
        
    }
    sort(arrN , x);

    for (int i = 0; i < x; i++)
    {
        cout << arrN[i] << endl;
    }
    
    
    
    

    return 0;
}