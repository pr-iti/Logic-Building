#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<int, int> m;
    vector<int> num = {1, 9, 2, 3, 4, 4};

    // for (int i = 0; i < 7; i++)
    // {
    //     cin >> num[i];
    // }
    int result = -1;
    for (int x = 0; x < num.size(); x++)
    {
        m[num[x]]++;
        if (m[num[x]] == 2)
        {
            result = num[x];
            break;
        }
    }

    // Find FIRST element (by array order) with freq = 2
    // int result = -1;
    // for (int x = 0; x < num.size(); x++)
    // {
    //     if (m[num[x]] == 2)
    //     {
    //         result = num[x];
    //         break;
    //     }
    // }

    if (result == -1)
        cout << " this array has no repeating element" << endl;

    else
        cout << "this array has a repeated value, which is :- " << result;

    return 0;
}
