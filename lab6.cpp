#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

double helperFunction (string mode , double x ,double y ){

    if(mode == "max"){
        if(x > y){
            return x;
        }
        else{
            return y;
        }
    }
    else if(mode == "min"){
        if(x > y)
        {
            return y;
        }
        else{
            return x;
        }
    }
    return 0;
}

int main(){
 
    double x ,y,f;
    string x1, y1;
    bool isNumber = false;
    while (isNumber == false){
        cout << "enter x " ;
    cin >> x1 ;

    cout << "enter y " ;
    cin >> y1 ;

        try
        {
            x = stod(x1);
            y = stod(y1);
            isNumber = true;
        }
        catch(...)
        {
            cout <<"ENTER THE NUMBER NOT A LETTER";
        }
        
    }
    
   


    if( x > 0 && y >= 0){
        f = helperFunction("max" , x , y+sqrt(x) );
    }
    else if(x < 0){
        f = helperFunction("max" , x , y ) + sin(x)*sin(x) - cos(y)*cos(y);
    }
    else{
        f = 0.5*x + pow(M_E , y );
    }

    cout << "result: " << f;

    return 0;
}