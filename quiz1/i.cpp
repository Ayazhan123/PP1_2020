#include <iostream>
using namespace std ;
int main (){

    int A , B , C ;
    cin >> A >> B >> C ;
    if ((A<(B+C)) && (B<(A+C)) && (C<(A+B)))
    {
        cout << "Yes" ;
    } else {
        cout << "No";
    }

    return 0;
}int Nod ( int a , int b ){
	while ( a && b ){
		if ( a > b ){
			a = a % b;
		}
		else{
			b = b % a;
		}
	}

	return a | b;
}

int a[1000][1000];
