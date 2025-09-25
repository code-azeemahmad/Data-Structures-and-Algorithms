#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    vector<int> ans;
    int arr[] = {2, 7, 11, 15};

    int n = sizeof(arr) / sizeof(int);
    int target = 22;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    for (int value: ans)
    {
        cout << value << "  ";
    }
    // Time complexity: O(n2)
    return 0;
}

/*

                        PAIR SUM                                      |                                                                                                                                  
        return pair in sorted array with target sum                   |         Brute Force                                                                                                                                     
                                                                      |             |                                                                             
        {2, 7, 11, 15}      target = 9                                |             |-->find All pairs --> target = pair sum                                                                                                                 
         0  1  3   4                                                  |                                                                                                              
                                                                      |         for (i = 0; i < n; i++)                                                                                 
        pairs: retrieve unique pair with one number and its next      |             for (j = i + 1; j < n; j++)                                                                                                                                             
               don't need to go backward as (7, 2) = (2, 7)           |                 (i, j)...(i, j < n)                                                                                                                                 
                                                                      |         if (arr[i] + ar[j] == target)                                                                                  
        (2, 7), (2, 11), (2, 15)                                      |                  ans.pushback(i)                                                                                                         
        (7, 11), (7, 15)                                              |                  ans.pushback(j)                                                                                                
        (11, 15)                                                      |                  return ans;                                                                                        

*/