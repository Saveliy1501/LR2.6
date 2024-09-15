# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, B, D, C,n, Q,p ,K;
        cout << "введите x ";
        cin >> x;
        cout << "введите p ";
        cin >> p;
        cout << "введите K ";
        cin >> K;
        cout << "введите D ";
        cin >> D;
        cout << "введите n ";
        cin >> n;

        C =p-n ;
        B=cos(x);
        
        Q =(B*B/K*D)+B*C*C*C;

        cout << Q << " - Q равно";

        return 0;
    }
