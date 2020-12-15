#include <bits/stdc++.h>
using namespace std;
bool cmp (vector<int> a , vector<int> b){
    int n;
int asum=0;
int bsum=0;
    for(int i=0; i<a.size(); i++){
    asum+=a[i];
    }
for(int i=0; i<b.size(); i++){
    bsum+=b[i];
}
if(asum!=bsum) return asum<bsum ;
if(a.size()!=b.size()) return a.size()<b.size();
for(int i=0;i<a.size(); i++){
    if(a[i]!=b[i]) return a[i]<b[i];
}
 return 1;
}

int main(){
int n ;
cin>>n;
vector<int> v[n];

for(int i=0; i<n ; i++){
    int m;
    cin>>m;
    v[i].resize(m);
    for(int j=0 ;j<m ; j++)
    cin>> v[i][j] ;
}sort(v , v+n , cmp);
for(int i=0; i< n ; i++){
     for(int j=0; j<v[i].size(); j++){
         cout<<v[i][j] << ' ';
     }
     cout<<endl;
 }
    }