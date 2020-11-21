#include <iostream>

using namespace std;


void function123()
{
    int n;
    cin >> n;
    char arr[8][8];


    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            arr[i][j] = '0';

    for (int i = 0; i < n; i++)
    {
        char c;
        int a;
        cin >> c >> a;

        arr[c-'A'][a - 1] = '*';
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cout << arr[i][j];
     
        cout << endl;
    }
}
int main(){

function123() ;

    return 0;
}