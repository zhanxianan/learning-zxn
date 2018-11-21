#include <stdio.h>
int getnumber(int n)
{
	if(n==10)
		return 1;
	else
		return (getnumber(n+1)+1)*2;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",getnumber(n));
	return 0;
}
