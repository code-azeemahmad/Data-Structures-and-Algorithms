#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // top
    for (int i = 0; i < n; i++)
    {
        // 1spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != 0) 
        {
            // 2spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // bottom
    for (int i = 0; i < n - 1; i++)     // 0 to n - 2
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        
        cout << "*";

        if (i != n - 2)
        {
            // spaces
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*

                                                   [TOP]
              - - - *           0     for (int i = 0; i < n; i++) {                                                                           
              - - * - *         1          - 1SPACES --> (n - i - 1) times --> " "                                                                  
              - * - - - *       3               cout << "*"                                                               
              * - - - - - *     5          - 2SPACES --> (2 * i - 1) times --> " "                                                                   
                *       *                       if (i != 0)                                                            
                  *   *                             cout << "*";                                                                
                    *                  }                                                                         
                                                   [BOTTOM]                                                                                                                        
                                       for (int i = 0; i < (n - 1); i++)                                                                                                                                                                      
                                            - 1SPACES --> (i + 1)
                                                cout << "*"                                                                                        
                                            - 2SPACES -->                                                                                                       
                                                cout << "*"                                              
                                                                                               
                                                                                               
                                                                                               
                                                                                               
                                                                                               
                                                                                               
                                                                                               
                                                                                               
*/