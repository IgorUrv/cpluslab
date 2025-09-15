#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    double r1, r2 ,a ;
    string y ;
    bool valuesCorect = false; 

        while(!valuesCorect){
            cout << "ENTER THE NUMBER: ";
            cin >> y;
        try{
                a = stod(y);
                valuesCorect = true;

        }
        catch(...){
            cout << "WARNING UNDEFINED NUMBER \n" << "TRY AGAIN \n" ;


        }

       
    }
     
         r1 = 1 - (0.25*pow(sin(2*a),2) )+ cos(2*a);
         r2 = pow(cos(a), 2)+ pow(cos(a) , 4);
            cout << "r1: "<< r1 << endl;
            cout << "r2: "<< r2;
                
    return 0 ;
}