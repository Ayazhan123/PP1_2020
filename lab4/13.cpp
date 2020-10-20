#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        for(int i = 0; j<n;i++)
        {
            a[i][i] = 1;
        }
    }

    for(int i = 0;i<n;i++){
                a[i][i] = cnt;
                cnt++;
            }
    for (int i=n-1;i<n;i++){
         a[i][i] = cnt;
                cnt++;
    }
    for(int i=n-1;i<n;i--){
         a[i][i] = cnt;
                cnt++;
            }
            cout << a[i][i];

        cout<<endl;

    return 0;
}