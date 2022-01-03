// 1. Viết chương trình C++ nhắc người dùng nhập 3 số nguyên và sau đó in các số nhỏ nhất và lớn nhất bởi sử dụng hàm trong C++.

// 2. Viết chương trình C++ để tính giai thừa của một số nguyên dương bởi sử dụng hàm trong C++.

// 3. Viết chương trình C++ sử dụng khái niệm hàm để tính tích sau: Sn= 1^1 * 2^2 * 3^3 * 4^4 *…* n^n.

// 4. Viết chương trình C++ để in một bảng nhân như yêu cầu đề bài.

// 1*1=1         2*1=2                 3*1=3         ……  9*1=9
// 1*2=2         2*2=4                 3*2=6         ……  9*2=18
// …….           …….                   …….           ……  …….
// 1*9=9         2*8=18                3*9=27        ……  9*9=81

#include <iostream>
using namespace std;
void nhap(int &a, int &b,int &c)
{
  cout << "Moi ban nhap so thu nhat: ";
  cin >> a;
  cout << "Moi ban nhap so thu hai: ";
  cin >> b;
  cout << "Moi ban nhap so thu ba: ";
  cin >> c;
}
int max(int a,int b,int c)
{
  if ((a>b&&a>c)||(a==b&&a>c)||(a==c&&a>b))
  {
    return a;
  }
  else if ((b>c&&b>a)||(b==c&&b>a)||(b==a)&&b>c)
  {
    return b;
  }
  else if ((c>a&&c>b)||(c==a&&c>b)||(c==b&&c>a))
  {
    return c;
  }
  else if (a==b&&b==c)
  {
    cout << "Ba so bang nhau";
  }
  // int max = a;
  // if(b>max) max = b;
  // else if(c>max) max = c;
  // return max; 
}
int min(int a, int b, int c)
{
  int min = a;
  if (min >b) min = b;
  else if(min>c) min =c;
  return min;
}
int main()
{
  int sonhat, sohai, soba;
  nhap(sonhat,sohai,soba);
  cout << "So lon nhat la " << max(sonhat,sohai,soba) <<endl;
  cout << "So be nhat la " << min(sonhat,sohai,soba);
  return 0;
}
