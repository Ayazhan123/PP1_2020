#include <iostream>

using namespace std;

int main(){

int n , m;
cin >> n >> m;
int a[n][m];
int cnt , maxi=-1 , ans;
bool res=true;

for(int i=0 ; i<n ; i++){
    cnt=0;
    for(int j=0 ; j<m ; j++){
        cin >> a[i][j];
        if(a[i][j]>0) cnt++;
    }  
    if (maxi<cnt){
        maxi=cnt;
        cnt=0;
        res=true;
        ans=i+1;
    }
    if(maxi==cnt){
       res=false;
    }
}
if (res==true) cout << ans << endl;
else cout << "Numbers are equal" << endl;
    return 0;
}