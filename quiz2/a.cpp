#include<iostream>
using namespace std;
int main(){
int n , a ;
cin >> a;
int max=0 , min=101 , b=0;

for(int i=0; i<a;i++){  
    cin >> n;
    b++;
    if( max<n ){
        max=n ;
    }
    if(min>n){
        min=n;
    }
}
    b=b-2;
cout<< max-min-1-b;
return 0;
}