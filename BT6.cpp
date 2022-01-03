// . Viết chương trình C++ để tìm số nguyên tố bởi sử dụng vòng lặp FOR.
#include <iostream>
using namespace std;
bool is_prime ( int n)
{
  if (n<2) return false;
  for (int i = 2; i<=n/2; i++)
  {
    if(n%i==0) return false;
  }
  return true;
}
int main()
{
  int n=15;
  if (is_prime (n) == false) cout << n << "khong la so nguyen to";
  else cout << n << "la so nguyen to";
}
// { int n, count =0;
//   cout << "Moi ban nhap n: ";
//   cin >> n;
//   for (int i=2;i<=n/2;i++)
//   { 
//     if(n%i==0) count++;  
//   }
//   if (count  > 0 &&n <2) cout << n << " khong phai la so nguyen to";
//   else cout << n << " la so nguyen to";
  // if (isprime (n) == true) cout << n << " phai la so nguyen to";
  // else cout << n << " khong phai la so nguyen to";