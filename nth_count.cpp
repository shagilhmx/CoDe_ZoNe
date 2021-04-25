// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;

int countWays(int);

int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;

        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends


// function to count ways to reach mth stair

int countWays(int m){

    unsigned long long int a = 1,b=1,c=0,i=2, ans;
    if(m == 0)
        return 1;
    if(m == 1)
        return 1;

    while(i<=m){
        c = a+b;
        a = b;
        b = c;
        i++;
    }
    ans = c%mod;
    return ans;
}
