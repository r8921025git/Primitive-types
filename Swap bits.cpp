#include <iostream>

using namespace std;

template<class T>
inline int numbits(T num)
{
  return sizeof(num)*8;
}

template<class T>
inline void printBits(T num) {
  int nbits = numbits(num);
  unsigned long long mask = 1;
  mask = mask << (nbits-1);
  for(int i=0;i<nbits;++i) {
    if(i%4==0)
      std::cout << " ";
    std::cout << (num & mask ? 1 : 0);
    mask = mask >> 1;
  }
  std::cout << std::endl;
}


//swap bit number i and bit number j
long SwapBits(long x, int i, int j) {
  cout<<"x="<<x<<endl;
  long a = 1&(x>>i);
  long b = 1&(x>>j);
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  // if both a,b are 0, then do nothing
  // if both a,b are 1, then do nothing
  
  if (a==b)
    return x;
  else {
    // if a==0,b==1 or a==1,b==0, then flip the bit with XOR(^1)
    x = x ^ 1<<i;
    x = x ^ 1<<j;
  }
  return x;
}


int main()
{
   
   long x=11;
   cout<<"input="<<x<<endl;;
   printBits(x);
   
   long out = SwapBits(x,4,0);
   cout<<"out="<<out<<endl;
   printBits(out);
   
   return 0;
}

