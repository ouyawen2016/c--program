#include<stdio.h>

int main()

    {
	char sex,diet,sport;	
    double faHeight, moHeight,height;
   
    printf("请输入性别（男M），运动习惯（有Y），饮食习惯（有Y）\n");
    scanf("%c,%c,%c",&sex,&diet,&sport);
     printf("请输入父母身高（父，母）\n");
	scanf("%lf,%lf",&faHeight, &moHeight);
    
    if (sex = 'M')
     height = (faHeight + moHeight) * 0.54;
    if (sex='F')
        height = (faHeight * 0.923 + moHeight)/2;
    if (diet = 'Y')
      height = height *( 1 + 0.02);
    if (sport = 'Y')
       height = height *(1 + 0.015);
       printf("你的身高是%f",height);
    return 0;
	}
