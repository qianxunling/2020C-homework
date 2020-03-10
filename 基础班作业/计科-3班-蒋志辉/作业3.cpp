#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "degress:";
    cin >> a;
    cout << "minutes:";
    cin >> b;
    cout << "seconds:";
    cin >> c;
    float d = a + b / 60.0 + c / 3600.0;
    cout << d;
    system("pause");
    return 0;
}
