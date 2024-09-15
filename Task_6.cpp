# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, D, C,y, S,K,A;
        cout << "введите x ";
        cin >> x;
        cout << "введите y ";
        cin >> y;
        cout << "введите C ";
        cin >> C;
        cout << "введите K ";
        cin >> K;

        A=x+y ;
        D=fabs(C-A);
        
        S=10.1 +(A/C)+(D/K*K);

        cout << S << " - S равно";

        return 0;
    }
