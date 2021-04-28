#include<iostream>
#include<cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

cout << " choose rock (0), paper (1) or scissors (2)";
long long x;
cin >> x;

srand(time(0));
    int num = rand() % 2 + 0;

if ( num == 0 && x == 1) { cout<< " The computer is rock. You are paper. You win. ";}
if ( num == 0 && x == 2) { cout<< " The computer is rock. You are scissors. The computer wins. ";}
if ( num == 0 && x == 0) { cout<< " The computer is rock. You are rock. It's a draw. ";}

if ( num == 1 && x == 1) { cout<< " The computer is paper. You are paper. It's a draw. ";}
if ( num == 1 && x == 2) { cout<< " The computer is paper. You are scissors. You win. ";}
if ( num == 1 && x == 0) { cout<< " The computer is paper. You are rock. The computer wins. ";}

if ( num == 2 && x == 1) { cout<< " The computer is scissors. You are paper. The computer wins. ";}
if ( num == 2 && x == 2) { cout<< " The computer is scissors. You are scissors. It's a draw. ";}
if ( num == 2 && x == 0) { cout<< " The computer is scissors. You are rock. You win. ";}

     return 0;
}

