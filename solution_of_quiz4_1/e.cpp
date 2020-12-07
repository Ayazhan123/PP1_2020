#include <bits/stdc++.h>
using namespace std;

bool ans(int n){
    set<int> st;
    int counter = 0;
    while(n){
        int last_digit = n%10;
        st.insert(last_digit);
        n/=10;
        counter++;
    }
    return counter == st.size();
}

int main(){
    int n; cin >> n;
    n+=1;
    while(!ans(n)) n += 1;
    cout << n;
}