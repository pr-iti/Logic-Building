/*
Doubly Linked List
*/

#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> lst;

    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(6);
    lst.push_back(7);
    lst.push_back(8);

    lst.push_front(1);
    lst.push_front(2);
    lst.push_front(3);
    lst.push_front(4);

    cout << lst.front() << " " << lst.back() << " " << endl;

    // lst.clear();

    if (lst.empty())
    {
        cout << "the list is empty" << endl;
    }
    else
    {
        cout << "the list is not empty" << endl;
    }

    list<int> lt = {3, 2};
    // 3 -> 2
    lt.push_back(5);
    // 3 -> 2 ->
    lt.push_front(1);
    // 1 -> 3 -> 2 -> 5

    auto it = lt.begin(); //......... it ->1 -> 3 -> 2 -> 5
    // moves iterator to 2 index
    advance(it, 2); //......... it ->1 -> 3 -> 2(it) -> 5

    // inserts 4 just before the iterator
    lt.insert(it, 4);

    cout << *next(lt.begin(), 2);
    // int x = lt.rbegin();
    // int y = lt.rend();

    for (auto i : lt)
        cout << i << " ";

    list<int> lis = {10, 20, 30, 40, 50};

    cout << "The list in reverse order: " << endl;
    int start = *lis.begin();
    cout << " this is a pointer to start iterator " << start << endl;

    int i = *lis.rbegin();
    cout << " this is a pointer to last iterator " << i << endl;

    for (auto it = lis.rbegin(); it != lis.rend(); ++it)
        cout << *it << " ";

    return 0;
}
