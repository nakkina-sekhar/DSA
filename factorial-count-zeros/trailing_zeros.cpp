#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;int no_of_zero=0;int q=0;
    while(n!=0)
    {
      q=n/5;
      no_of_zero=no_of_zero+q;
      n=n/5;
    }
    cout << no_of_zero <<endl;
    return 0;
}