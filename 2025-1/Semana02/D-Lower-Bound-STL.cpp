/*
D ‑ Lower Bound‑STL
You are given N integers in sorted order and Q queries.  
For each query receive an integer Y:

‑ If Y exists in the array, print “Yes” and the 1‑based index of its first occurrence.  
‑ Otherwise print “No” and the 1‑based index of the smallest element strictly greater than Y
  (guaranteed to exist).

Input  
N  
N sorted integers  
Q  
Q lines, each with one integer Y

Output  
One line per query as described above.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int q;
    cin >> q;
    while (q--) {
        int y;
        cin >> y;
        auto it = lower_bound(v.begin(), v.end(), y);
        int pos = static_cast<int>(it - v.begin()) + 1;
        if (it != v.end() && *it == y) {
            cout << "Yes " << pos << '\n';
        } else {
            cout << "No " << pos << '\n';
        }
    }

    return 0;
}
