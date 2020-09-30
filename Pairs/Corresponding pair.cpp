QUESTION::
Given two arrays arr1[] and arr2[] of size N. The task is to make pairs containing values corresponding from arr1 and arr2 i.e.
(arr1[0], arr2[0]), (arr1[1],arr2[1]) and so on.

Input Format: The input line contains T, number of testcases. Each testcase contains three lines. The first line contains N size of both arrays. 
The second and third line contains elements of two arrays separated by space.

Output Format: For each testcase, in a new line, you have to return an array of pairs formed with given arrays.

User task: You need to complete the function corresp_Pair(arr1,arr2,N,res) containing 4 parameters respectively. 
You don't have to worry about the input. The printing is done by the driver code.
Note: res[] is the resultant pair array where you have to store the corresponding pairs formed.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= arr1[i], arr2[j] <= 100

Sample Input:
2
5
1 2 3 4 5
6 7 8 9 10
2
1 2
3 4

Sample Output:
(1,6) (2,7) (3,8) (4,9) (5,10)
(1,3) (2,4)

CODE::
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

//User function Template for C++

/*
arr1[], arr2[]: arrays whose corresponding values needs to be returned 
                as pair array
N: size of arrays
pair<int, int>res[]: resultant pair array
*/

void corres_Pair(int arr1[], int arr2[], int N, pair<int, int> res[])
{
    for(int i=0;i<N;i++){
        res[i]=make_pair(arr1[i],arr2[i]);
        // res[i].first(arr1[i]);
        // res[i].second(arr2[i]);
    }
}

// { Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int arr1[N],arr2[N];
        
        for(int i = 0; i < N; i++)
            cin>>arr1[i];
        for(int i = 0; i < N; i++)
            cin>>arr2[i];
        
        
        pair<int, int> res[N];
        corres_Pair(arr1, arr2, N, res);
        for(int i = 0; i < N; i++)
            cout << "(" << res[i].first << "," << res[i].second <<")";
        cout << endl;
    }
}
  // } Driver Code Ends
