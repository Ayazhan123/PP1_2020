/*
Given a single number x check if it is prime number or not. A prime number (or a prime) is a natural
number greater than 1 that cannot be formed by multiplying two smaller natural numbers.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"No";
            return 0;
        }
    }
    cout << "Yes";
}
