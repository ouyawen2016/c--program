#include <stdio.h>



int main()
{

    double faHeight, moHeight,height;
    char sex,diet,sport;
   printf("请输入父母身高（父，母）\n");
    scanf("%lf,%lf",&faHeight, &moHeight);
    printf("请输入性别（男M女F），运动习惯（有Y），饮食习惯（有Y）\n");
    sex = getchar(),diet = getchar(),sport=getchar();
    if (sex = 'M')
     height = (faHeight + moHeight) * 0.54;
       else
        height = (faHeight * 0.923 + moHeight)/2;
     if (diet = 'Y')
      height = height *( 1 + 0.02);

     if (sport = 'Y')
       height = height *(1 + 0.015);

    printf("你的身高是%f",height);
    return 0;
}

