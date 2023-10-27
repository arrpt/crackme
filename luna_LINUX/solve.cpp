#include <iostream>
using namespace std;

bool luna(int usrInput)
{
  int j;
  int k;
  int l;
  int i;
  
  l = 0;
  for (i = usrInput; i != 0; i /= 100) {
    j = (i / 10) / 10;
    k = ((int)(i / 10) + ((int)(j << 2) + (int)j) * -2) * 2;
    if (9 < k) {
      k += -9;
    }
    l += (int)i + ((int)(i / 10 << 2) + (int)(i / 10)) * -2 + k;
  }
  return l % 10 == 0;
}
int main(){
    for (int i=100000; i < 10000000; i++){
        if (luna(i) == 1){
            cout << "Key Found: " << i << endl;
        }
    }
}