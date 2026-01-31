#include <iostream>
#include <set>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {1, 9, 4, 5, 6, 7, 8, 2, 10};
    sort(arr.begin(), arr.end());

    int n = arr.size();
    // int last = arr[arr.size()-1];
    int m_no = (n * (n + 1)) / 2;
    cout << " missing no. is :-" << m_no << endl;

    return 0;
}