#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std; 
  
int main() 
{ 
    string s;
    int n , m ;
    cin >> n >> m ;
    int a[n][m] ;
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=m ; j++){
           getline(cin , s);
       }
    }
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=m ; j++){
     if (s.find('D') != string::npos){
                a[i][j]=char(42);
            } else a[i][j]=char(88);
        }
    }
    
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=m ; j++){
            cout << a[i][j] ;
        }
        cout << endl;
    }
    return 0; 
} 