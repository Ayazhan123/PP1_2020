#include <iostream>
using namespace std;
int main()
{
    int n, m, k = 0, res = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            res = max(a[i][j], res);
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == res){
                k++;
                break;
            }
        }
    }
    cout << k;
    return 0;
}
