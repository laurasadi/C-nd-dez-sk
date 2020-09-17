
#include <iostream>

using namespace std;
int main()
{

int turimEur, reikiaEur;
cout<<" Kiek pinigu turime? " ;
cin >> turimEur;
cout<<" Kiek pinigu reikia? " ;
cin >> reikiaEur;
if(turimEur > reikiaEur) cout <<"Viskas ok";
    else if (turimEur < reikiaEur) cout <<"ne kazka...";
        else cout <<"vos vos...";

return 0;
}
