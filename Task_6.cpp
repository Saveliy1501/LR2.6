# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, B, D, C,y, T,z,K,A;
        cout << "введите x ";
        cin >> x;
        cout << "введите y ";
        cin >> y;
        cout << "введите z ";
        cin >> z;
        cout << "введите D ";
        cin >> D;
        cout << "введите C ";
        cin >> C;
        cout << "введите K ";
        cin >> K;

        A=x-y ;
        B=sqrt(z);
        
        T=cos(x)+(A*A/(K-C*D))-B ;

        cout << T << " - T равно";

        return 0;
    }
