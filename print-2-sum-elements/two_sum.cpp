#include <bits/stdc++.h>    //test case:1              test case:2                 
using namespace std;        //A[]=[3,6,1,2,8] sum=14   A[]=[3,6,8,10,15,9]  sum=19
int main()                   //out: 6 8                out: 9 10
{  //time complexity:o(n^2)
    int n, sum;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> sum;
    sort(a,a+n);  //this function return sorted array
    int l=0, h=n-1;  //two pointer approach
   while(l<h){
     if(a[l]+a[h]==sum){
        cout << a[l] << "  "<< a[h];
        break;
     }
     else{
        if((a[l]+a[h])>sum){
            h--;
        }
        else{
            l++;
        }
     }
   }
    return 0;
}
