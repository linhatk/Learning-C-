#include <iostream>
using namespace std;

void nhap(float &a, float &b)
{  
  cout << "Moi ban nhap chieu dai: ";
  cin >> a;
  cout << "Moi ban nhap chieu rong: ";
  cin >> b;
}

void chuVi(float a, float b)
{
  float chu_vi;
  if (b>a||b<0||a<0)
  {
    cout << "Hai canh tren khong phai cac canh hinh chu nhat: " << endl;
  }
  else
  {
    chu_vi = 2*(a+b);
    cout << "Chu vi hinh chu nhat la: " << chu_vi << endl;
  }
}

void DT(float a, float b)
{
  float dien_tich;
  if (b>a||b<0||a<0)
  {
    cout << "Hai canh tren khong phai cac canh hinh chu nhat: " << endl;
  }
  else
  {
    dien_tich = (a*b);
    cout << "Dien tich hinh chu nhat la: " << dien_tich << endl;
  }
}

int main()
{
  float chieu_dai, chieu_rong;

  nhap(chieu_dai, chieu_rong);

  chuVi(chieu_dai, chieu_rong);
  DT(chieu_dai, chieu_rong);
  
  return 0;
}
