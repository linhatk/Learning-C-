// Viết chương trình C++ dùng vòng lặp để vẽ cây thông Noel. Nhập n để biết chiều cao của cây
// VD n=5:
//     *
//    ***
//   *****
//  *******
// *********
//    |||
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Vui long nhap n: ";
  cin >> n;

  for (int i = 0; i<n;i++)
  {
    for (int j= 0; j< n - i; j++ ) cout << " ";
    for (int j = 0; j < 2*i+1; j++) cout << "*";
    cout << endl;
  }
  for(int j=0; j<n-1;j++) cout << " ";
  cout << "|||" << endl;
  
}  

