//wrong answer


#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
	int n, m, b, cnt=0, c , a[n][m] ;
	cin >> n >> m >> b;
	
	for (int i=1; i<= n; i++){
        c=0 ;
    for (int j=1; j<=m; j++){
			cin >> a[i][j];
			if ( a[i][j] == b){
		       c=1 ;
			}
		}
		if ( c == 1 ){
			cnt++;
		}
	} 	
	cout << cnt;
	return 0;
}