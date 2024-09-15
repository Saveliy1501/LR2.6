# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, D, p, z,B, C,Y,K,A;
        cout << "введите x ";
        cin >> x;
        cout << "введите K ";
        cin >> K;
        cout << "введите D ";
        cin >> D;
        cout << "введите C ";
        cin >> C;
        cout << "введите z ";
        cin >> z;
        cout << "введите p ";
        cin >> p;
        

        A=sin(x)-z;
        B=fabs(p-x);
        
        Y=powl(A+B ,2) -(K/(C*D));

        cout << Y << " - Y равно";

        return 0;
    }
