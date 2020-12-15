#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, l;
    cin >> n;

    vector<int> fence;

    for (int i=0; i<n; i++){
        cin >> l;
        vector<int>::iterator it ;
        for (it=fence.begin() ; it != fence.end() ; it++){
            if ( (*it)<=l ) {
                it = --fence.erase(it);
            }
        }
        fence.push_back(l);
    }
    cout << fence.size() ;

    return 0 ;
}