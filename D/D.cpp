#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <queue>
#include <sstream>
using namespace std;


int main(int argc, char** argv)
{
    int a, b;
    size_t arg = 0;
    a = atoi(argv[++arg]);
    b = atoi(argv[++arg]);

    vector<int> v(a * b);
    istringstream ss(argv[++arg]);

    for (int i = 0; i < a * b; i++)
    {
        char t;
        ss >> t;
        v[i] = t - '0';
    }

    auto t = v;
    t.erase(unique(t.begin(), t.end()), t.end());
    if (accumulate(t.begin(), t.end(), 0) == 1 && b > 1)
        cout << "h ";
    else
        cout << "v ";
    cout << accumulate(v.begin(), v.end(), 0);

    return 0;
}