#include <stdio.h>
int main()
{
    int a, b, d, i = 0;
    char op;
    while (i<4)
    {
     	i++;
    	printf("please input number to calculate\n");
    	scanf("%d%c%d",&a,&op,&b);
    	switch (op)
    {
			case '+': d = a + b;break;
     		case '%': d = a % b;break;
     		case '*': d = a * b;break;
    		case '/': 
				if (b==0)
					printf("divisor can not be zero");
				else d = a / b;break;
			default :printf("Error data!");
		}
    	printf("=%d\n",d);}
    return 0;


}
