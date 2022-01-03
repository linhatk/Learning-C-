// 4. Viết chương trình C++ để in một bảng nhân như yêu cầu đề bài.

// 1*1=1         2*1=2                 3*1=3         ……  9*1=9
// 1*2=2         2*2=4                 3*2=6         ……  9*2=18
// …….           …….                   …….           ……  …….
// 1*9=9         2*8=18                3*9=27        ……  9*9=81

#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i<10; i++)
  {
    for(int j = 1; j<=10; j++)
    {
      cout << j << "*" << i << "=" << i*j << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
