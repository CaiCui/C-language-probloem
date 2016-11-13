//hdu2057 LLX运算，注意%X是无符号十六进制类型
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<climits>
#include<deque>
#include<stack>
#include<vector>
#include<queue>
#include<bitset>
#include<map>
#include<set>
#include<functional>
#include<cstring>
#include<cctype>
#include<bits/stdc++.h>
typedef long long ll;
const int MOD=10e9+7;
const int INF=0x7fffffff;
const double ESP=10e-7;
const double Pi=acos(-1.0);
const int dr[]= {0,0,1,-1,1,1,-1,-1};
const int dc[]= {-1,1,0,0,-1,1,-1,1};
#define maxn INF
#define min -INF
using namespace std;
int main(void)
{
    ll m,n;//或者__int64
	while(scanf("%llX%llX",&m,&n)!=EOF)
	{
		if(m+n<0)//若m+n是负值，必须转为正值输入，因为%X是无符号十六进制类型，解决办即是在输出前面加一个负号即可

         {
             printf("-%llX\n",-(m+n));
         }
            else printf("%llX\n",m+n);
	}

    return 0;
}

