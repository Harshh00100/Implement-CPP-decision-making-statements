#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout << "Enter first Number : ";
  cin >> a;
  cout << "Enter second Number : ";
  cin >> b;
  cout << "Enter third Number : ";
  cin >> c;
  if(a>b){
      if(a>c){
           cout << "1st Variable " << a << " is largest" << endl;
      }
  }

  if(b>c){
      if(b>a){
           cout << "2nd Variable " << b << " is largest" << endl;
      }
  }
    if(c>b){
      if(c>a){
           cout << "3rd Variable " << c << " is largest" << endl;
      }
  }
  return 0;
}
    