#include <iostream>

using namespace std;

// Requirement: do not use *, /, %
long long GCD(long long x, long long y) {
  if (y>x)
    std::swap(x,y);
  if (y==0)
    return x;
  
  return GCD(x-y,y);
}


int main()
{
   cout << "Hello World" << endl; 
   std::cout<<GCD(12,18)<<endl;
   std::cout<<GCD(18,12)<<endl;
   std::cout<<GCD(19,18)<<endl;
   std::cout<<GCD(24,18)<<endl;
   std::cout<<GCD(15,18)<<endl;
   
   return 0;
}

