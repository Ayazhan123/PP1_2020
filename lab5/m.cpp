/*
You’re given string s, character x and number n. In this task you need to answer is the amount of x in
the string s is equal to n.
*/

#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string s1;
    string s2;
    int n;
    int cnt=0;
    cin>>s1>>s2>>n;
    int pos=0;
    int a[s1.size()];
    while(s1.find(s2,pos)!=string::npos){
        cnt++;
        pos=s1.find(s2,pos)+1;
    }
    if(cnt==n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}