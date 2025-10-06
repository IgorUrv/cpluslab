#include <iostream>
#include <cmath>
#include <string>

    using namespace std;
    
    int factorial(int value){
        int factorialRes = 1;
        
        for(int i = 2  ; i <= value ; i++){
             factorialRes *= i;
             
        }
        
        return factorialRes;
    }

    double count(double x , int n){
        double sum = 0.0 ;
        for(int k = 0; k <= n; k++){
            sum += pow(-1, k) * (pow(x, 2 * k + 1) / factorial(2 * k + 1));
        }
        return sum;
    }


   int main(){
    double  a, b, h, y, n;

    cout << "enter start ";
    cin >> a;

    cout << "enter finish ";
    cin >> b;

    cout << "enter step ";
    cin >> h;

    cout << "enter the n";
    cin >> n;

    for(double x = a ; x < b ; x += h){
          double resS , res ;
          
        resS = count(x , n); 
        y = sin(x);
        res = abs(resS - y);
                     
        cout << y << "-----" << resS<< "----"<< res << endl ;

                
    }
    return 0;
   }