#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin >> n;
   
    for(int i=2;i<=n;i++){
        int cnt=0;
        double c=sqrt(i);
           for(int j=2;j<=c;j++){
               int a=i%j;
               if(a==0){
                   cnt++;
               }
               
               }
               if(cnt==0){
                   cout << i << " " << "is prime"<< endl;
               }
           }
    return 0;     
}