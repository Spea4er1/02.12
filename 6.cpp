#include <iostream>
using namespace std;

int main() {
       double R,r,h,b;
       cin >> R >> r >> h >> b;
       if (b+r>=R) { 
             cout << "YES";
             return 0;
       }
       if (sqrt(R*R - r * r) + (b - r) >= h) { cout << "YES"; return 0; }
else { cout << "NO"; return 0; } 
       return 0;
}