#include <iostream>

using namespace std;

int rec(int k,int m){

  if(m==1) return 0 ;
  if(m==2) return 1 ;

  return (rec(k,m-2) +k*rec(k,m-1))%10 ;

}
int main(){

 int k, m;

cin>>k>>m;

cout<<rec(k,m);


    return 0;
}