#include <iostream> 
#include <cmath>

using namespace std; 
  
void Ayazhans_function(){  

    int a ;
    cin >> a ;

    while(a % 2 == 0){  
        cout << 2 << " " ;  
        a = a/2;  
    }  

    for(int i = 3; i <= sqrt(a) ; i = i + 2){  
        while(a % i == 0){  
            cout << i << " " ;  
            a = a/i ;  
        }  
    }   
     if(a > 2){
        cout << a << " ";
    }    
}   
int main(){  
   
    Ayazhans_function() ;

    return 0;
}


