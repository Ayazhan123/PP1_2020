//таблица Пифагора

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                a[i][j]=i+j;
            }else{
                a[i][j]=i*j;
            }
            
        }
    }  
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*

0 1 2 3
1 1 2 3
2 2 4 6
3 3 6 9

*/