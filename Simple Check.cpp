#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter Number of A   " << endl;
    cin >> a ;
    cout << " Enter Number Of B  \n " ;
    cin >> b ;
    cout << "Enter Number Of C  \n " ;
    cin >> c ;
    if (a>=b&&b>=c) {
        cout << " Yes \n" ;
        cout<< " A + B + C =    " << a + b + c << "\n";
    }
    else
        cout<< " No \n" ;
    return 0;
}
