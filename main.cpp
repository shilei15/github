#include<iostream>

using namespace std;

unsigned fac(unsigned n)
{
    unsigned f;
    if(n==0)
        f=1;
    else
        f=fac(n-1)*n;
    return f;
}

int main()
{
    unsigned n;
    cout<<"enter a positive integer:";
    cin>>n;
    cout<<n<<"!= "<<fac(n)<<endl;
    return 0;
}
