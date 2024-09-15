# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, d,B, C,Y,K,A;
        cout << "введите x ";
        cin >> x;
        cout << "введите K ";
        cin >> K;
        cout << "введите d ";
        cin >> d;
        cout << "введите C ";
        cin >> C;

        A=log(x);
        B=x+exp(d);
        
        Y=(A+B)-(C*C/K);

        cout << Y << " - Y равно";

        return 0;
    }
