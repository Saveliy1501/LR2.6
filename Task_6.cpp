# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, A, B, D, C, Y,p ,K;
        cout << "введите x ";
        cin >> x;
        cout << "введите p ";
        cin >> p;
        cout << "введите K ";
        cin >> K;
        cout << "введите D ";
        cin >> D;
        cout << "введите C ";
        cin >> C;
        A=x+sin(p) ;
        B=exp(K);
        
        Y=1+(K*K/2*A*B)-B+D*C ;

        cout << Y << " - Y равно";

        return 0;
    }
