//hdu2104 ����
//ֱ��ģ��ѭ��TLE����һ���������� ����ֻ���������Ĺ�Լ����1������ѭ������һȦ���е���
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
