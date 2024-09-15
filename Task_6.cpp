# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, D,p,B, C,h,Y,K,A;
        cout << "введите x ";
        cin >> x;
        cout << "введите p";
        cin >> p;
        cout << "введите h ";
        cin >> h;
        cout << "введите K ";
        cin >> K;
        cout << "введите D ";
        cin >> D;
        cout << "введите C ";
        cin >> C;

        A=x-p;
        B=log(h);
        
        Y=0.78*B+(A*A*A/K*C*D);

        cout << Y << " - Y равно";

        return 0;
    }
