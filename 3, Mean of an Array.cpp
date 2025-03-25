// Given an unsorted array arr[], the task is to find the mean of the array.

// link = > https: // www.geeksforgeeks.org/problems/mean0021/1?page=1&difficulty=School&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMean(vector<int> &arr)
    {

        int mean = 0;
        int sum = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            sum = sum + arr[i];
        }

        mean = sum / arr.size();
        return mean;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findMean(arr) << endl
             << "~" << endl;
    }
    return 0;
}