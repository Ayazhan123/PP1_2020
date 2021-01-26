#include <iostream>
#include <vector>

using namespace std;

int a[] = {1, 2, 5, 10, 20, 50, 100};
int b[7];

int main() 
{
  for (int i = 0; i < 7; i++)
    cin >> b[i];
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int val;
    cin >> val;
    int tmp = val;
    for (int j = 6; j >= 0; j--)
    {  
      tmp -= min(tmp/a[j], b[j]) * a[j];      
    }
    if (tmp > 0)
    {  
      cout << "Transaction stopped!" << endl;
    }
    else
    {
      cout << "Transaction accepted!" << endl;
      for (int j = 6; j >= 0; j--)
      {
        int k = min(val/a[j], b[j]);
        b[j] -= k;
        val -= k * a[j];
      }
    }
  }
}