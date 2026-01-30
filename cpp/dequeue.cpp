#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d = {2, 4, 6, 8, 10};

    d.push_back(4);
    d.push_back(40);
    d.push_back(400);
    d.push_back(404);
    d.push_back(400);
    d.push_back(40000);
    d.push_back(400444);
    d.push_back(404444444);
    cout << d.front() << " " << d.back() << " " << d.front() << "  " << endl;
    d.push_front(2);
    d.push_front(20);
    d.push_front(200);
    d.push_front(202);
    cout << d.front() << " " << d.back() << " " << d.front() << " " << endl;
    d.pop_back();
    d.pop_front();

    cout << d.front() << " " << d.back() << " " << endl;

    // d.clear();

    for (auto i : d)
    {
        cout << i << endl;
    }

    if (d.empty())
    {
        cout << "dequeue is emptyyyyyy";
    }
    else
    {
        cout << "dequeue is not empty";
    }

    return 0;
}