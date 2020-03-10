#include <iostream>
using namespace std;

int main(){
    const int a = 12;
    const float b = 0.0254;
    const float c = 2.2;
    double shenggao1,shenggao2,tizhong;
    cin >> shenggao1;
    cin >> shenggao2;
    cin >> tizhong;
    cout << (tizhong / c) / pow((shenggao1*a*b+shenggao2*b), 2) << endl;
    system("pause");
}
