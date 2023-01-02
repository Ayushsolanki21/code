#include<iostream>
using namespace std;

int main()
{
    int binary;
    cin>>binary;
    int dec=0;
    int w=1;
    while(binary!=0)
    {
      int rem=binary%10;
      dec=dec+rem*w;
     binary=binary/10;
      w=w*2;
    }
    cout<<dec<<endl;
}
