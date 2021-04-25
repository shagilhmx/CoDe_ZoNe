#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    int merge(long long int arr[], long long int p, long long int q, long long int r){
        long long int n1, n2;
        n1 = q-p+1;
        n2 = r-q;
        int arr1[n1], arr2[n2];
        for(int i=0;i<n1;i++)
            arr1[i] = arr[p+i];
        for(int i=0;i<n1;i++)
            arr1[i] = arr[q+i];
        arr1[n1] = INT_MAX;
        arr2[n2] = INT_MAX;

        int i = 0, j = 0;
        for(int k=p; k<=r; i++){
            if(arr1[i] <= arr2[j]){
                arr[k] = arr1[i];
                i++;
            }
            else{
                arr[k] = arr2[j];
                j++;
            }
        }
        return i;
    }
    long long int inversionCount(long long arr[], long long p, long long N)
    {
         long long int q, res;
         if(p<N){
             q = ceil((p+N)/2);
             inversionCount(arr, p, q);
             inversionCount(arr, q+1, N);
             res = merge(arr, p, q, N);
         }
    }

};

// { Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while(T--){
        long long N;
        cin >> N;

        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,0,N) << endl;
    }

    return 0;
}
  // } Driver Code Ends
