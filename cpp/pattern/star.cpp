/*
1st pattern
*
**
***
****
******
2nd pattern
********
 ********
  *******
   ******
    *****
     ****
      ***
       **
        *

3rd pattern
*
**
***
****
*****
******
*******
********
 ********
  *******
   ******
    *****
     ****
      ***
       **
        *

*/

#include <iostream>
using namespace std;

int main()
{

    int rows, cols;

    cout << "enter the no. of rows";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < rows; j++)
        {
            if (i <= j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < rows; j++)
        {
            if (i >= j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}