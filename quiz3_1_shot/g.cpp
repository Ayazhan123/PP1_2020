#include <iostream>
#include <cmath>

using namespace std;

int Recurtion_for_1while(int aya) {
    if (aya % 2 == 0)  {
        cout << 2 << " ";
        return Recurtion_for_1while(aya / 2);
    }
    return aya;
}
/*int Recurtion_for_2while(int aya, int i) {
    if (i <= sqrt(aya) && aya % i == 0) {
        cout << i << " ";
        return Recurtion_for_2while(aya, i + 2);
    }
    return aya;
}*/
void f(int aya){
    for(int i = 3; i <= sqrt(aya); i = i + 2){  
        while(aya % i == 0){  
            cout << i << " " ;  
            aya = aya/i ;  
        }  
    }
}

int main() {
    int x;
    cin >>x;
    x = Recurtion_for_1while(x);
    f(x);
    if(x > 2){
        cout << x << " ";
    }  

}