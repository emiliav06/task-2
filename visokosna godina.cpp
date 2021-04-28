#include<iostream>
#include<cmath>

using namespace std;

int main()
{

long long year;
cin >> year;

if(year%4==0)
{
    if(year%100!=0)
    {
        cout << " visokosna e";
    }
    else
    {
        if(year%400==0)
        {
            cout << " visokosna e";
        }
        else
        {
            cout << " ne e visokosna ";
        }
    }
}


     return 0;
}

