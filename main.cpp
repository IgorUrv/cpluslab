#include <iostream>
#include <cmath>
 using namespace std;
int main() {
    double x,y,z,u;
      cout <<"enter X ";
      cin >> x;

      cout << "enter y ";
      cin >> y ;

      cout << "enter z ";
      cin >> z;

      u = pow(tan(x + y) , 2) - exp(y - z)* sqrt(cos(x*x)+ sin(y*y) );
      cout<<"answer"<< u;

    return 0 ;
}