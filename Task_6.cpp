# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, A, b, D, S;
        cout << "введите x ";
        cin >> x;
        cout << "введите D ";
        cin >> D;
        b=x+D;
        A=D*x/b ;
        S=A*A +b*cos(x)/(D*D*D+(A+D-b));


        cout << S << " - S равно";

        return 0;
    }
