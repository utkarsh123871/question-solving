//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // map<int ,int> mp;
        // for(int i = 0 ; i < n ; i++){
        //     mp[a[i]]++;
        // }
        
        // int index = 0;
        // for(auto x : mp){
        //     a[index] = x.first;
        //     index++;
        // }
        // return index;
        
        int m = 0;
        for(int i = 1 ; i < n ; i++){
            if(a[m]!=a[i]){
                a[m+1] = a[i];
                m++;
            }
        }
        return m+1;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends