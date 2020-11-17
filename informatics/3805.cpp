#include <iostream>
using namespace std;
void rev(int n)
{
	if (n==0)
	return;

    cin >> n ;

    rev(n);
	
	cout << n << endl;
}
int main()
{
	int a ;
	cin >> a ;
	rev(a);
	cout << a  ;
}
