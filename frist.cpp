#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    int t; cin >> t;
    vector<int> a;
    vector<int> b;
    int counter = 0;
    int rest = 0;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; ++i)
        {

            if (a[i] >= b[i])
            {
                if (b[i] < 0)
                {
                    continue;
                }
                else {
                    counter++;
                    rest = a[i] - b[i];
                    a[i] = rest;
                    b[i] = -1;
                }
            }
            a[i] += rest;
            cout << counter << " ";
        }
    }


    return 0;
}
