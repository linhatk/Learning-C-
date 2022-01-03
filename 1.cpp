#include <iostream>
using namespace std;

int main() {
  // 1+2+3+4+...+n
  int n, tong=0;
  cout << "Moi ban nhap n: ";
  cin >> n;

  for(int i=1; i<=n; i++){
    tong = tong + i;
  }

  cout << "Tong la: " << tong << endl;

  return 0;
}