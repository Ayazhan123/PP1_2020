#include <iostream> 
using namespace std;
int main (){

    int n;
    cin >> n;
    double arr[n];
    long long sum=0 , ave;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for (int i = 0 ; i < n ; i++){
        sum+=arr[i];
        ave=double(sum)/double(n) ;
    } 
    cout << "Average: "<< ave << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}