//Первый способ
/*
#include <bits/stdc++.h>

using namespace std;
int cnt[10000001];
int main() {
  int n;
  cin >> n;
    map<pair<int, int>, int> cnt;
    for(int i = 0; i < n; i++){
      int x, y;
      cin >> x >> y;
      if(x>y) swap(x, y);
      cout<< cnt[make_pair(x, y)]<< endl;
      cnt[make_pair(x,y)]++;
    }
}
*/
//Второй способ 
/*
#include <bits/stdc++.h>

using namespace std;
int main() {
  int n;
  cin >> n;
  set < set < int >> a;
  map < set < int > , int > c;
  int x, y;
  while (n--) {
    set < int > b;
    cin >> x >> y;
    b.insert(x);
    b.insert(y);
    if (a.find(b) == a.end()) {
      cout << "0\n";
      c[b] = 1;
      a.insert(b);
    } else {
      cout << c[b] << ;
      c[b]++;
    }
  }
}
*/
//третий способ
#include <bits/stdc++.h>
using namespace std;

void f(int n){
    map<pair<int, int>, int> para;
    for(int i = 0; i < n; i++){
        int ai, bi; 
        cin >> ai >> bi;
        if(ai > bi){
            int tmp = ai;
            ai = bi;
            bi = tmp;
        }
        cout << para[make_pair(ai,bi)] << endl;
        para[make_pair(ai,bi)]++;
    }
}

int main(){
    int n; 
    cin >> n;
    f(n);
}