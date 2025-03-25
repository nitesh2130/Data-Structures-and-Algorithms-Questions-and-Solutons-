// Given an integer n, your task is to compute the sum of all natural numbers from 1 to n(inclusive).If n is 0, the sum should be 0.

// link = > https: // www.geeksforgeeks.org/problems/sum-of-series2811/1?page=1&difficulty=School&sortBy=submissions

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int seriesSum(int n)
    {
        // code here
        int result = n * (n + 1) / 2;
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.seriesSum(n);

        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends