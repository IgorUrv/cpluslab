#include <iostream>
#include <cmath>

    using namespace std;

 int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    double y , h , a , b  ;
    double maxres = 0;
    double minres = 0 ;
  
    

    cout << "enter start: ";
    cin >> a ;

     cout << "enter final: ";
    cin >> b ;

    cout << "enter step: ";
    cin >> h ;
    double minVal, maxVal;
    bool wasInit = false;

    for(double x = a ; x < b; x += h){
        y = 1 / (pow(x , 2) - x + 1);
        if (!wasInit) {
            minVal = maxVal = y;
            wasInit = true;
        } else {
            if (minVal > y) {
                minVal = y;
            }
            if (maxVal < y) {
                maxVal = y;
            }
        }

       
         cout << "When x = " << x << "  y = " << round(y * 1000) / 1000  << "\n"; 
    }

    cout << "Min Val: " << round(minVal * 1000)/1000 << "\n";
    cout << "Max Val: " << round(maxVal * 1000) / 1000<< "\n";
    return 0 ;
 }