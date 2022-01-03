// n=4
//      *
//    ***
//  *****
//*******
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Moi ban nhap n: ";
  cin >> n;
  for (int i =0; i<n;i++)
  {
    for (int j=0; j<2*(n-i-1);j++)
    {
      cout << " ";
    }
    for (int j= 0;j<2*i+1; j++)
    {
      cout << "*";
    }
    cout << endl;
  // int m = 2*n-1;
  // for (int i =0; i<n;i++)
  // {
  //   int so_sao = 2*i+1;
  //   int so_cach = m - so_sao;
  //   for (int j = 0; j < so_cach;j++) cout << " ";
  //   for (int j = 0; j < so_sao;j++) cout << "*";
  //   cout << endl;
  // }
  }
}
// {
//   int n;
//   cout << "Moi ban nhap n: ";
//   cin >> n;
//   for (int i = 1;i<=n;i++)
//   {
//     for (int j = 0; j<i;j++)
//     {
//       cout <<"*";
//     }
//     cout << endl;
//   }
// } 