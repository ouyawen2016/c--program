#include<stdio.h>

int main()
{   
    double faHeight, moHeight,height;
    char sex,diet,sport;
    printf("�����븸ĸ��ߣ�����ĸ��\n");
    scanf("%lf,%lf",&faHeight, &moHeight);
    printf("�������Ա���MŮF�����Ƿ��Ȱ��˶�");
    printf("����Y�����Ƿ������õ���ʳϰ�ߣ���Y��\n");
    sex = getchar(),diet = getchar(),sport=getchar();
    if (sex == 'M')
        height = (faHeight + moHeight) * 0.54;
    else
        height = (faHeight * 0.923 + moHeight)/2;
    if (diet == 'Y')
        height = height *( 1 + 0.02);

    if (sport == 'Y')
        height = height *(1 + 0.015);
    printf("���Ԥ�������%fcm",height);
    return 0;}

