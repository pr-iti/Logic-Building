#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // forward_list<int> fl = {2, 3, 4};

    // for (int it : fl)
    // {
    //     cout << it << " " << endl;
    //     // fl.pop_front();
    // }

    // fl.push_front(9);
    // fl.push_front(90);
    // fl.push_front(900);

    // auto it = fl.begin();
    // advance(it, 1); //... can also use next()
    // fl.insert_after(it, 3);
    // auto itr = next(fl.begin(), 2);

    // for (int it : fl)
    // {
    //     cout << it << " " << endl;
    //     // fl.pop_front();  do not modify in between of looping
    // }
    // fl.insert_after(fl.before_begin(), 5);
    // for (int it : fl)
    // {
    //     cout << it << " " << endl;
    // }

    forward_list<int> lf{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // initializes with the value in  parenthesis
    forward_list<int> fl2(3, 4);                         //( size , value at each index)
    cout << "--------- for list * lf * -----------" << endl;
    for (auto x : lf)
    {
        cout << x << endl;
    }
    cout << "--------- for list fl2 -----------" << endl;
    for (auto x : fl2)
    {
        cout << x << endl;
    }

    auto it = lf.begin();
    // next(it, 3);
    advance(it, 1);
    lf.erase_after(it);

    cout << "--------- for list * lf * after erase -----------" << endl;

    for (auto x : lf)
        cout << x << endl;

    return 0;
}