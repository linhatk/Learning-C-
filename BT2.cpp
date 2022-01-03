// 2. Viết chương trình C++ để tính giai thừa của một số nguyên dương bởi sử dụng hàm trong C++.
#include <iostream>
using namespace std;
void nhap(int &n)
{
  cout <<"Moi ban nhap nhap so nguyen duong n: ";
  cin >> n;
}
int tinh_giai_thua(int n)
{
  int giaithua;
  giaithua=1;
  for (int i = 1; i <= n; i++)
  {
    giaithua=giaithua*i;
  }
  return giaithua;
}
int main()
{
  int so_nguyen_duong;
  nhap(so_nguyen_duong);
  cout <<"Giai thua cua " << so_nguyen_duong << " la: " << tinh_giai_thua(so_nguyen_duong) << endl;
  return 0;
}