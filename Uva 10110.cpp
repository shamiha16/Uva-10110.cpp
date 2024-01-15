#include<stdio.h>
#include<math.h>
int main()
{ long long int n,y;

     while(scanf("%lld",&n)==1)
     {
     if (n==0)
     {break;}
y=sqrt(n);
     if (n==y*y)
        printf("yes\n");
     else
        printf("no\n");}
     return 0;

}
