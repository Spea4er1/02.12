#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k;
    cin >> n >> k;
    vector<vector<int> > a;
    vector<int> t;
    for(int i = 0; i < k; ++i)
        t.push_back(1);
    a.push_back(t);
    for(int i = 1; i < n; ++i){
        t.clear();
        for(int j = 0; j < k; ++j)
            t.push_back((a[i - 1][j] + j) % (i + 1) + 1);
        a.push_back(t);
    }
    cout << a[n - 1][k - 1];
    return 0;
}