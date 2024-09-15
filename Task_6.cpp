# include <iostream>
# include <cmath>
using namespace std;
int main() {
        double x, D, n,m, Y,K,A;
        cout << "введите x ";
        cin >> x;
        cout << "введите n ";
        cin >> n;
        cout << "введите m ";
        cin >> m;
        cout << "введите K ";
        cin >> K;

        A=fabs(n+m);
        D=tan(x);
        
        Y=1.29+(K/A)+D*D ;

        cout << Y << " - y равно";

        return 0;
    }
