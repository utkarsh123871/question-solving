//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n) {
    if (n <= 1) {
        // If the array has only one element or is empty, we're already at the end.
        return 0;
    }

    if (arr[0] == 0) {
        // If the first element is 0, we cannot move forward.
        return -1;
    }

    int maxReach = arr[0]; // Initialize maxReach to the first element.
    int steps = arr[0];   // Initialize steps to the first element.
    int jumps = 1;        // We start with one jump because we are already at the first element.

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            // If we have reached the end of the array, return the number of jumps.
            return jumps;
        }

        // Update maxReach to be the maximum of the current maxReach and the index we can reach from the current element.
        maxReach = max(maxReach, i + arr[i]);

        // Decrement the number of steps we can take before needing another jump.
        steps--;

        if (steps == 0) {
            // If we have used up all our steps, we need another jump.
            jumps++;

            // If we cannot move forward from the current position, return -1.
            if (i >= maxReach) {
                return -1;
            }

            // Reset steps to the number of steps we can take from the current position.
            steps = maxReach - i;
        }
    }

    return -1; // If we haven't reached the end of the array, return -1.
}

};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends