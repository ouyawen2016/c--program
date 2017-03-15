
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, d, i = 0;
    char op;
    while (i<4)
    {
     i++;
    printf("please input number to calculate\n");
    scanf("%d",&a);
    scanf("%c",&op);
    scanf("%d",&b);
    switch (op)
    {
		case '+': d = a + b;break;
     	case '%': d = a % b;break;
     	case '*': d = a * b;break;
    	case '/': d = a / b;break;
		default :printf("divisor can not be zero");
		}
    printf("%d",d);}
    return 0;


}
