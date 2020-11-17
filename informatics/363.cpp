#include<iostream>
using namespace std;
int main(){
    int n,m;    
    cin>>n>>m;    
    int a[n][m];    
    int cnt = 0;    
    for(int i = 0;i<n;i++) {     
       for(int j = 0; j<m;j++) {            
               a[i][j] = 0;
        }    
    }    
    for(int i = 0;i<n;i++){ 
           if(i % 2 == 1) {            
               for(int j=m-1;j>=0;j--){                
                   a[i][j] = cnt;                
                   cnt++;            
                   }       
            }        
            else {            
                for(int j=0;j<m;j++){                
                    a[i][j] = cnt;                
                    cnt++;            
                }        
            }    
    }    
    for(int i = 0;i<n;i++){        
        for(int j=0;j<m;j++){            
            if (a[i][j] < 10 ) cout << "   ";            
            else if (a[i][j] < 100) cout << "  ";            
            else if (a[i][j] < 1000) cout << " ";            
            cout << a[i][j];        
        }        
        cout<<endl;    
    }        
return 0;
}