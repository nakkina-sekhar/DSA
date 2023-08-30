#include <bits/stdc++.h>   //testcase:1                    testcase:2               testcase:3 
using namespace std;       //in: n=7 a[]=[2,3,4,8,2,2,1]   n=7 a[]=[2,2,2,3,3,3,1]   n=6 a[]=[3,8,9,1,3,6]
int main(){                //out: 2                         out: 2 3                 out:-1
    int n;
    cin >> n;
    int a[n];
 for(int i=0; i<n; i++){
    cin >> a[i];
 }
 int count1=0; int count2=0;
 int first=INT_MIN; int second=INT_MIN;
 for(int i=0; i<n; i++){
    if(a[i]==first){
        count1++;
    }
    else if(a[i]==second){
        count2++;
    }
    else if(count1==0){
        count1++;
        first=a[i];
    }
    else if(count2==0){
        count2++;
        second=a[i];
    }
   else{
        count1--;
        count2--;
    }
 }
 for(int i=0;i<n;i++)
 {
    if(a[i]==first){
        count1++;
    }
    else if(a[i]==second){
        count2++;
    }
 }
//if output is 2 values
 cout << endl;
 int flag=0;
 if(count1>n/3){
    cout << first <<endl;
    flag=1;
 }
 if(count2>n/3){
    cout << second <<endl;
    flag=1;
 }
 if(flag==0){
    cout << -1 << endl;
 }
 return 0;
}
