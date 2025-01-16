/*Written by Ankit 
Here i am giving my heart to solve the problems
*/
#include<bits/stdc++.h>
using namespace std;
// yha hmm number input de rhe h n jo ki wo range jha tak hmko prime number ko print krna h
void sieve(int n)
{
   vector<int> v(n+2,0);// we will initialize the vector of size more than n so here n+1 or n+2 or n+anything we can write
  for(int i=2;i<=n;i++)// ham 2 se loop chalayenge kyoki prime number 2 se hi start hoga
     {
      if(v[i]==0) //agar array ka value 0 hua means hmko uss element ko 1 krna hoga 
      {
        for(int j=i*i;j<=n;j=j+i)
          v[j]=1; //yha hmne 1 kiya h
      }
     }
     for(int i=2;i<=n;i++) //ab jis jis index ki value zero h wha uss index ko hmm print kr denge
      {
        if(v[i]==0)
        cout<<i<<" ";   
      }
}
void bhenchod()
{
  int t;cin>>t;
  while(t--)
  {
    int n;cin>>n;  
    sieve(n);
   } 
 }  
int main()
{
     #ifndef ONLINE_JUDGE
  cerr << "Exectution Time : " << clock() / (double)CLOCKS_PER_SEC << "sec   ";
  freopen("i.txt", "r", stdin);
  freopen("o.txt", "w", stdout);
    #endif
  bhenchod();
  return 0;
}

