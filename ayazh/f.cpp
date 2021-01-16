#include <iostream>

using namespace std;

int rev(int a){
    int x=0;
    while(a){
        x=x*10;
        x=x+a%10;
        a=a/10;
    }
    return x;
}

int main(){

int n;
cin >> n;
for(int i=0 ; i<n ; i++){
    int a, b;
    cin >> a >> b;
    cout << rev(rev(a)+rev(b)) << endl;
}

    return 0;
}