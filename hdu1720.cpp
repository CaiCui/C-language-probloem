//hdu1720
//%X大写16进制输出 %x小写16进制输出  %p读入16进制数 %p还用于打印指针地址
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%p%p",&a,&b)!=EOF)//scanf("%x%x",&a,&b)==2
    {
         printf("%d\n",a+b);
    }

    return 0;
}
