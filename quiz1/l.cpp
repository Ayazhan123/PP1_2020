#include <iostream>
using namespace std;
int main (){

    int time , hours = 0 , minutes=0 , seconds=0;
cin >> time;
hours = time/3600;
minutes = (time%3600)/60 ;
seconds = time%60;
cout << hours<<":"<<minutes<<":"<<seconds;

    return 0;
}