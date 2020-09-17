#include <iostream>

using namespace std;
int main()
{
    int a, b, c, did;
    cout<<"a= "; cin >> a;
    cout <<"b= "; cin >> b;
    cout <<"c= "; cin >> c;

if (a >= b and a >= c) did = a;
        else if (b >= a and b >= c) did = b;
             else if (c >= a and c >= b) did = c;
    cout <<"Didziausias" <<did;

return 0;
}
