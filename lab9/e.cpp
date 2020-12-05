#include<iostream>
#include<map>

using namespace std;

int main(){

int n;
map<string, int> q;
cin >> n;

for(int i = 0; i < n; ++i){
    string s;
    cin >> s;
    q[s]++;
}

int ans = 0;
for(map<string,int> :: iterator it = q.begin(); it !=q.end(); ++it){
   if(it->second == 3) ans++;
}
cout << ans << "\n";

return 0;
}