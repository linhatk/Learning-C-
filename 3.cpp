#include <iostream>
using namespace std;

int main() {
  // 2+4+6+...+n
  int n, tong= 0;
  cout << "Moi ban nhap n: ";
  cin >> n;
  for(;n%2 != 0;){
    cout << "So ban nhap khong thuoc day so tren, vui long nhap lai: ";
    cin >> n;
  }
  for(int i = 0;i <= n; i=i+2){
    tong= tong +i;
  } 
  cout << "Tong cua day so tren la: " << tong << endl;
}