#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s = {1, 5, 9, 2, 3, 4};

    for (auto x : s)
        cout << x << " " << endl;

    s.insert(3);
    auto ans = s.find(5);

    return 0;
}
