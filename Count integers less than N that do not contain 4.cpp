#include<string>
#include <iomanip> // for setw
#include<iostream> 

using namespace std;

int Count2(int n)
{
    int count = 0;
    for (int i=0; i<n; ++i) {
        string s = to_string(i);
        if (s.find('4')!=string::npos)
            count++;
    }
    return count;
}


int main()
{
    cout << sizeof(char) << endl;
    for (int i = 1; i <= 1000; ++i){
        cout << setw(5) << i << " -- " << i - Count2(i) << "" << endl;
    }

    cout << "The end" << endl;
return 0;
}
