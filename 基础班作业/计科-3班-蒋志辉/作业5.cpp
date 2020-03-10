#include <iostream>
using namespace std;

int main()
{
    long long a;
    long long b;
    cout<<"Enter the world¡¯s population:"
    cin >> a;
    cout<<"Enter the population of the country"
    cin >> b;
    float c = (float)100 * b / a;
    cout << c << "%";
    system("pause");
}
