#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter two integers:");
	scanf("%d%d",&a,&b);
	printf("a=%d and b=%d\n",a,b);
	printf("bitwise AND :%d\n",a&b);
	printf("bitwise OR :%d\n",a|b);
	printf("bitwise XOR :%d\n",a^b);
	printf("bitwsie NOT of a:%d\n",~a);
	printf("left shift of a:%d\n",a<<1);
	printf("right shift of a:%d\n",a>>1);
	
	
}
