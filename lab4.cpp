#include <iostream>
#include <cmath>

    using namespace std;

    int main() {
        double x , z, y ;
        setlocale(LC_ALL, "rus");
        cout << "enter z";
        cin >> z;
            if(z  > 0 ){
                x = sqrt(z);
                cout << "you use first candition \n";
            }
            else if( z <= 0 ){
                x = ((3 * pow(z , 3)) - 5);
                cout << "you use second candition \n";
            }
         y = cos(5 * x) + sin(1.0 / 5  * x) + pow(M_E , x);
         cout << "result: " << y;
        
          
        return 0;
    }