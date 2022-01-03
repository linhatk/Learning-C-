#include <iostream>
using namespace std;

void nhap(float &a, float &b)
{  
  cout << "Moi ban nhap chieu dai: ";
  cin >> a;
  cout << "Moi ban nhap chieu rong: ";
  cin >> b;
}

float chuVi(float a, float b)
{
  return 2*(a+b);
}

float DT(float a, float b)
{
  float dien_tich = (a*b);
  return dien_tich;
}

int main()
{
  float chieu_dai, chieu_rong;

  nhap(chieu_dai, chieu_rong);
  if(chieu_dai >= chieu_rong && chieu_dai > 0 && chieu_rong > 0)
  {
    float dt = DT(chieu_dai, chieu_rong);
    cout << "Dien tich: " << dt << "\nChu vi: " << chuVi(chieu_dai, chieu_rong) << endl;
  }
  else
    cout << "Hai canh tren khong phai cac canh hinh chu nhat: " << endl;
  
  return 0;
}
