//E. Max

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if (x > max)
        {
            max = x;
        }
    }
    cout << max << endl;
    return 0;
}

//Another Method
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> numbers(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    int maxNum = *max_element(numbers.begin(), numbers.end());
    cout << maxNum << endl;

    return 0;
}
*/
