// 3. Viết chương trình C++ sử dụng khái niệm hàm để tính tích sau: Sn= 1^1 * 2^2 * 3^3 * 4^4 *…* n^n.
#include <iostream>
using namespace std;
void nhap (int &n)
{
  cout << "Moi ban nhap n: ";
  cin >> n;
}
long mu(int n){
  long mu = 1;
  for (int i = 0; i < n; i++)
    mu = mu * n;

  return mu;
}
long Sn(int n){
  long Sn = 1;
  for (int i = 1; i <= n; i++)
  {
    Sn = Sn * mu(i);
  }
  return Sn;
}
int main()
{ 
  int num;
  nhap(num);
  cout << "Sn = " << Sn(num) << endl;
  return 0;
}