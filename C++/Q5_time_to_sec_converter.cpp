#include<iostream>
using namespace std;

int hrs_to_sec(int hr,int min, int sec);
int main()
{
    int hr,min,sec;
    int rslt = hrs_to_sec(hr,min,sec);
    cout << "Time in seconds is " << rslt <<endl;

    return 0;
}

int hrs_to_sec(int hr,int min, int sec)
{
    int seconds =0;
    cout << "Enter hr: " << endl;
    cin >> hr;
    cout << "Enter min: " << endl;
    cin >> min;
    cout << "Enter sec: " << endl;
    cin >> sec;

    seconds = (hr*60*60)+(min*60)+sec;
    return seconds;
}
