#include <iostream>

using namespace std;

int function(int n)
{
    if (n == 1)
        return 1;

    int c = 0, largest = 0;

    for (int i = 1; i < n; i++) 
        if (n % (n - i) == 0)
        {
            if (largest == 0)
                largest = (n - i);

            c++;
        }

    return c + function(largest);
}

int main()
{
    int n;
    cin >> n;

    int result = function(n);

    cout << result << endl;

    return 0;
}