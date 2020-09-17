// dezutes namu darbai
#include <iostream>
#include <string>

using namespace std;

int main()

{ int p, d20, d4, d1;
    cout << " Kiek turite prekiu? " ; cin >> p;
    d20 = p / 20; p = p % 20;
    d4 = p / 4; p = p % 4;
    d1 = p;
    cout << "Jums prekes tilps i :" << endl;
    cout << "Dideles dezes " << d20 << endl;
    cout << "Mazos dezes " << d4 << endl;
    cout << "liko prekiu " << d1 << endl;
    return 0;
}
