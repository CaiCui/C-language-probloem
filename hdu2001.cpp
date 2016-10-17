//hdu2000
#include<cstdio>
#include<cstdlib>
#include<cmath>
int main()
{
    double x1,y1,x2,y2;
    double re;
    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF)
    {
         re=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
         re=sqrt(re);
         printf("%.2lf\n",re);
    }
    return 0;
}
