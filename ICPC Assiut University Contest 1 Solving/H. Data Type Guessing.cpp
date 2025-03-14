//H. Data Type Guessing

#include <iostream>
using namespace std;
int main()
{
    long long n, k, a;
    cin >> n >> k >> a;
    if ((n * k) % a != 0)
    {
        cout << "double" << endl;
        return 0;
    }
    long long result = (n * k) / a;
    if (result >= -2147483648LL && result <= 2147483647LL)
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }
    return 0;
}
