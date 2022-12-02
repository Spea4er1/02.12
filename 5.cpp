#include <iostream>
unsigned long long n, k, r = 0, s, i;
int main(){
 std::cin >> n >> k;
 for(i = 0; i < k; i++)
  r += i;
 s = 1 + (n-1)*k + (n-2)*r;
 std::cout <<s;
}