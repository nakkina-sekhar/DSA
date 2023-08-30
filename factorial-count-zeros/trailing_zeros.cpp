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
// test cases :1     test case :2    test case:3
//     in: n=5       in: n=11        n=75
//     out: 1        out: 2          out: 18
    
