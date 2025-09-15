#include <iostream>
#include <cmath>

    using namespace std;
   
    int main() {
        setlocale(LC_ALL, "ru_RU.UTF-8");
            double a, b, z1, z2 ; 
            const  double pi = 3.14;

            cout << "enter a: ";
            cin >> a; 

             cout << "enter b ";
            cin >> b ;
            
            

                z1 =( (a-1) * sqrt(a) - (b - 1) * sqrt(b) ) / (sqrt(pow(a , 3 ) * b) + a*b + pow(a , 2) - a );
                z2 = (sqrt(a) - sqrt(b)) / a;
                cout << "first res = " << z1 << endl;
                cout << "second res = " << z2;  

        return 0;
    }