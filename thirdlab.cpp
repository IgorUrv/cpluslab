#include <iostream>
#include <cmath>
#include <math.h>


    using namespace std;
   
    int main() {
        double  h, x, y , z ;
        string x1 , y1 , z1;
        bool isNumber = false;
            while (isNumber == false){
                cout << "enter x ";
                     cin >> x1 ;

                cout << "enter  y ";
                     cin >> y1 ;  
                     
                cout << "enter  z";
                     cin >> z1 ;

                     try{
                        x = stod(x1);
                        y = stod(y1);
                        z = stod(z1);
                        isNumber = true;
                     }
                     catch(...){
                            cout << "ENTER AGAIN \n";
                     }
            
            }
                if((cbrt(abs(y-2)) + 3) == 0 || (2*(abs(x + y ))) == 0 ){
                    cout << "YOU CANT DEVIDE BY ZERO";

                }
                else {
                    
     h =  pow(y , x + 1 )  / (cbrt(abs(y-2)) + 3) + (x+ y/2) / (2*abs(x + y ))  * pow(x+1,-1.0/sin(z)) ;
                     cout <<"result: "<< h;
                }
        

        return 0;
        
    }