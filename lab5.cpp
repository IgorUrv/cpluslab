#include <iostream>
#include <cmath>

    using namespace std ;


double functionMath(  double x , int mode ){
    if (mode == 1 ) {
        return 2*x;
    }
    else if (mode == 2) {
        return x/3;
    
    }
    else  if (mode == 3) {
        return x * x;
    }
    return 0;
}

int main(){

    double y , mode , x , a , b ,z ;
    string z1 , a1 ,b1;
    bool checkNumber = false;
   

        cout << "enter mode";
        cin >> mode;
        if(mode != 1 && mode != 2 && mode != 3){
            cout << "enter a right function";
        }
        
        else {

            while(checkNumber == false){
                cout << "enter z";
                cin >> z1;

                cout << "enter b";
                cin >> b1;

                cout << "enter a";
                cin >> a1;


                try{
                    z = stod(z1);
                    a = stod(a1);
                    b = stod(b1);
                    checkNumber = true;
                }
                catch(...){
                    cout << " \n ENTER THE RIGHT FUNCTION";
                }   

        if(z > 0){
            x = sqrt(z);
        }
        else if(z <= 0 ){
            x = 3 * z + 1 ;
        }

         
            
    }
        y = b * cos( a * functionMath(x , mode )) + sin(x / 5.0) + a * pow(M_E , x);
        cout << "result:" << y;
        cout << endl << x;
        

    
    }
        return 0;
}