#include <iostream>
using namespace std;

bool check_hpy_no(int n)
{

    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int d = n % 10;
        int sq = d * d;
        sum += sq;
        n = n / 10;
    }
    if (sum == 1 || sum == 10 || sum == 7)
    {
        return true;
    }
    else if (sum > 10)
    {
        return check_hpy_no(sum);
    }
    else
    {
        return false;
    }
    return 0;
};

int main()
{

    int num;
    cout << " enter a no" << " ";
    cin >> num;

    int result = check_hpy_no(num);
    if (result)
        cout << " this is a hpy no.";
    else
        cout << " this is not a hpy no ";

    return 0;
}