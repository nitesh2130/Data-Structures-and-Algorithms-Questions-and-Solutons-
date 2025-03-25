// Given an array arr, find the average or mean of the prefix array at every index.

// link => https://www.geeksforgeeks.org/problems/average4856/1?page=1&difficulty=School&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> prefixAvg(vector<int> &arr)
    {
        // code here
        vector<int> brr;
        int sum = 0;
        int temp = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            sum = sum + arr[i];
            temp = sum / (i + 1);
            brr.push_back(temp);
            // sum = brr[i];
        }

        return brr;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream s1(input);
        int num;
        while (s1 >> num)
        {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.prefixAvg(arr);

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
