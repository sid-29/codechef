/*
#include<stdio.h>
int main()
{
int q,i;
scanf("%d",&q);
for(i=0;i<q;i++)
{
int n,j;
char a[10001],cou='a';
scanf("%d",&n);
for(j=0;j<n;j++)
{
a[j]=cou;
cou++;
if(cou=='{')
cou='a';
}
a[j]='\0';
printf("%s\n",a);
}
return 0;
}
*/
#include<stdio.h>
#include<math.h>
int main(){
int t,n,k=0,i;
char c;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
c='a';
while(n>0){
k=(int)sqrt(2*n);
if (k*(k+1)>2*n)
k--;
for(i=0;i<k;i++)
printf("%c",c);
c+=1;
k*=(k+1);
k/=2;
n-=k;
}
printf("\n");
}
return 0;
}
