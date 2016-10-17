//hdu2039
//判断三角形成立 注意有坑..没说正整数
#include<cstdio>
#include<cstdlib>
#include<cmath>
int main()
{
    double a,b,c;
    int M;
    scanf("%d",&M);
    while(M--)
    {
         scanf("%lf%lf%lf",&a,&b,&c);
         if(a+b>c&&a+c>b&&b+c>a)
            printf("YES\n");
         else
            printf("NO\n");
    }
    return 0;
}
