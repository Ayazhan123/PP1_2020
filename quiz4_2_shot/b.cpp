#include <iostream>
#include <set>

using namespace std;

bool check(int n){

    set<int> s;

    int cnt = 0;

    while(n){

        int x = n%10;
        s.insert(x);
        n/=10;
        cnt++;
    }

    if (cnt == s.size()) return true;
    else return false ;
}

int main(){
    int l;
    cin >> l;
    int r;
    cin >> r ;

    if(l==r) cout << l ;

    while(!check(l)) l++ ;

    if(check(l) && l<r) cout << l ;
 
    if (l>r) cout << "Understandable, have a great day" ;

}