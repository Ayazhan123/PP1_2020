#include <iostream>
using namespace std;
int main()
{
    int n, m, cnt = 0, res = 0 , winer ;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        int sum = 0;
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            res = max(a[i][j], res);
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == res){
                cnt++;
                winer = i ;
                break;
               
            }
        }
    }
    cout << cnt << endl << winer ;
    return 0;
}