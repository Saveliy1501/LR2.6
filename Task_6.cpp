# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, D, k, z,B, C,Y,A;
        cout << "введите x ";
        cin >> x;
        cout << "введите k ";
        cin >> k;
        cout << "введите D ";
        cin >> D;
        cout << "введите C ";
        cin >> C;
        cout << "введите z ";
        cin >> z;
  
        

        A=log(x)-k ;
        B=sqrt(z);
        
        Y=D*D +(C*C/0.75*A)+B ;

        cout << Y << " - Y равно";

        return 0;
    }
