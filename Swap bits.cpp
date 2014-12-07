#include <iostream>

using namespace std;

long SwapBits(long x, int i, int j) {
  cout<<"x="<<x<<endl;
  long a = 1&&(x>>i);
  long b = 1&&(x>>j);
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  x = x && a<<j;
  x = x && b<<i;

  return x;
}


int main()
{
   cout << "Hello World" << endl; 
   long out = SwapBits(4,0,1);
   cout<<"out="<<out<<endl;
   
   return 0;
}

