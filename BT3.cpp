// 3. Viết chương trình C++ sử dụng khái niệm hàm để tính tích sau: Sn= 1^1 * 2^2 * 3^3 * 4^4 *…* n^n.
#include <iostream>
// #include <math.h>
using namespace std;
void nhap (int &n)
{
  cout << "Moi ban nhap n: ";
  cin >> n;
}

template<typename T>
T pow(T nguyen, T mu)
{
  T ket_qua = 1;
  for (int i = 0; i < mu; i++)
    ket_qua = ket_qua * nguyen;

  return ket_qua;
}


long ham_mu(int n)
{
  long mu = 1;
  for ( int i = 1; i <= n; i++)
  {
    mu=mu*pow(i,i);
  }
  return mu;
}
int main()
{ 
  int num;
  nhap(num);
  cout << "Tich cua ham tren la " << ham_mu(num) << endl;
  return 0;
}