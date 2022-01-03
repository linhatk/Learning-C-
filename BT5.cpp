// Viết chương trình C++ để nhập một số nguyên và in kết quả ra màn hình dưới dạng số đảo ngược (về thứ tự) của số nguyên vừa nhập đó.
// n=12345 -> output: 54321
#include <iostream>
using namespace std;
void nhap(int &n) {
  cout << "Nhap n: ";
  cin >> n;
}

int main ()
{
  int n;
  nhap(n);
  cout << "So can tim la: ";
  while (n != 0)
  {
    cout << n%10;
    n=n/10;
  }
  cout << endl;
}