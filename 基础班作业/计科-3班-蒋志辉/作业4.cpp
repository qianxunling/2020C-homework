#include <iostream>
using namespace std;

int main(){
    const int Hours = 24;
    const int Minutes = 60;
    const int Seconds = 60;
    long long seconds;
    cout << "seconds:";
    cin >> seconds;
    int day, hours, minutes, second;
    day = seconds / (Seconds * Minutes * Hours);

    seconds = seconds - day * Seconds * Minutes * Hours;
    hours = seconds / (Seconds * Minutes);

    seconds = seconds - hours * Minutes * Seconds;
    minutes = seconds / Seconds;

    seconds = seconds - minutes * Seconds;
    second = seconds;
    cout << "day:" << day << ",hours:" << hours << ",minutes:" << minutes << ",second:" << second << endl;
    system("pause");
}
