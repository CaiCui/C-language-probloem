//hdu2104 数论
//直接模拟循环TLE，是一道互质问题 ，即只有两个数的公约数是1，才能循环走完一圈所有的数
#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);//return a % b ? gcd(b , a % b) : b;
}
int main()
{

    int n,m;
    int flag;
    while(cin>>n>>m&&(n!=-1&&m!=-1))
    {

        if(gcd(n,m)==1)
            cout<<"YES"<<endl;
        else
            cout<<"POOR Haha"<<endl;
    }
    return 0;

}
