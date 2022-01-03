#include <iostream>
using namespace std;

int main() {
  // 1+3+5+...+n
  int n, tong = 0;

  do{
    cout << "Moi ban nhap n: ";
    cin >> n;
    if (n%2 == 0){
      cout << "So ban nhap khong thuoc day so tren" << endl;
    }
  }while(n%2 == 0);
  // do {
  // }while(dk);
  int i=1;
  while(i<=n) {
    tong = tong + i;
    i = i+2;
  }
  cout << "Tong cua day so tren la: " << tong << endl;

  return 0;
}