#include<stdio.h>

int main()

    {
	char sex,diet,sport;	
    double faHeight, moHeight,height;
   
    printf("�������Ա���M�����˶�ϰ�ߣ���Y������ʳϰ�ߣ���Y��\n");
    scanf("%c,%c,%c",&sex,&diet,&sport);
     printf("�����븸ĸ��ߣ�����ĸ��\n");
	scanf("%lf,%lf",&faHeight, &moHeight);
    
    if (sex = 'M')
     height = (faHeight + moHeight) * 0.54;
    if (sex='F')
        height = (faHeight * 0.923 + moHeight)/2;
    if (diet = 'Y')
      height = height *( 1 + 0.02);
    if (sport = 'Y')
       height = height *(1 + 0.015);
       printf("��������%f",height);
    return 0;
	}
