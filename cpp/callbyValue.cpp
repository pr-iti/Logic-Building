#include <iostream>
using namespace std;

int cal_sum(int n, int m)
{

    int res = n + m;
    return res;
};

int main()
{

    int a, b;
    cout << "enter two no." << endl;
    cin >> a >> b;

    int sum = cal_sum(a, b);
    cout << " sum is :- " << sum << endl;

    return 0;
}

// // C++ Program to implement
// // Swapping using Call by function
// #include <iostream>
// using namespace std;

// // Swap function to demonstrate
// // call by value method
// void swap(int x, int y)
// {
//     int t = x;
//     x = y;
//     y = t;
//     cout << "After Swapping in function x: " << x
//          << ", y: " << y << endl;
// }

// // Driver Code
// int main()
// {
//     int x = 1, y = 2;

//     cout << "Before Swapping: ";
//     cout << "x: " << x << ", y: " << y << endl;

//     swap(x, y);

//     cout << "After Swapping: ";
//     cout << "x: " << x << ", y: " << y << endl;

//     return 0;
// }