#include <iostream>
using namespace std;
int main (){
    int n, max=-1e9 , min=1e9 , sum=0 , pro=1 , c , b;
    cin >> n ;
    int a[n];
    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for (int i=0 ; i<n ; i++){
        sum+=a[i] ;
    }
    for (int i=0 ; i<n ; i++){
        if (min > a[i]){ min=a[i] ;
        i = c ;
        }
    }
    for (int i=0 ; i<n ; i++){
        if (max < a[i]){ max=a[i] ;
        i = b ;
        }
    }
    for (int i=c ; i<b ; i++){
        pro*=a[i]  ;
    }
    cout << sum << pro ;
    return 0;
}