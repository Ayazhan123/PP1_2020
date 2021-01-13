//не вышло
#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

map<int , int> m ;
vector<int> v ;
int n;
cin >> n;
for (int i=0 ; i<n ; i++)
{
    int m;
    cin >> m;
    int a[m];

    for(int j=0 ; j<n ; j++)
    {
        cin >> a[j];
        m[a[j]]++ ;
        if (m[a[j]]==1) v.push_back(a[j]);
    }

    sort(v.begin() , v.end());

    for(int i=0 ; i<v.size() ; i++){
       if(v.size()==0) cout << "ZA WARUDO" ;
       else cout << v[v.size()-1] ;
    }
}

    return 0;
}