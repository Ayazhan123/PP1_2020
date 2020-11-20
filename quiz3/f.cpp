#include <iostream> 
#include <cmath>

using namespace std; 
  
void Ayazhans_function(){  

    int aya ;
    cin >> aya ;

    while(aya % 2 == 0){  
        cout << 2 << " " ;  
        aya = aya/2;  
    }  

    for(int i = 3; i <= sqrt(aya); i = i + 2){  
        while(aya % i == 0){  
            cout << i << " " ;  
            aya = aya/i ;  
        }  
    }

    if(aya > 2){
        cout << aya << " ";
    }     
}   
int main(){  
   
    Ayazhans_function() ;

    return 0;
}