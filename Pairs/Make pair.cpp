Question::
Given two elements X and Y. The task is to return the pair formed with given elements
Input Format: The input contains T, number of testcases. Each testcase contains one line of input containing X and Y separated by space.
Output Format: For each testcase, in a new line, you need to print the elements of pair formed.
User Task: You need to complete the function makePair(X, Y) that takes two numbers as parameters and returns a pair of these number. 
           The first number is the first member of pair and second number is the second member. The printing is done by the driver code.

Constraints:
1 <= T <= 100
1 <= X, Y <= 1000

Sample Input:
2
4 5
1 0

Sample Output:
(4,5)
(1,0)

Explanation:
Testcase1: We have the numbers 4 and 5, so we make them a pair.

code::
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
 
pair<int, int> makePair(int X, int Y)
{
    pair<int,int> p;
    p.first=X;
    p.second=Y;
    return p;
    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int X, Y;
        
        // Input two elements to make them as a pair
        cin>>X>>Y;
        pair<int, int> ans = makePair(X, Y);
        cout <<"("<< ans.first << "," << ans.second <<")"<< endl;
    }
    return 0;
}

  // } Driver Code Ends
