//если i+j четное, то к числу прибавляем 1, если i+j нечетное, то с числа отнимаем 1

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int b;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b=i+j;
            if(b%2==0){
                a[i][j]++;
            }else{
                a[i][j]--;
            }
        }
     }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}