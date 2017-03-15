#include <stdio.h> 
int main()
{
	char str1[30];char str2[10];char ch,t; 
	int i =0,j = 0,k = 0,m,v,e=0,s;
    printf("请输入一串字符，回车键结束\n"); 
		
	while(str1[i]!='\0')
	{
		for(i = 0,k=0;i <= 20;i++)
	 		{
	 			scanf("%c",&str1[i]);
			 	 if(str1[i]=='\n')
			  		break;
			 	 k++;
            }
		if(str1[i]=='\n')
			  		break;	
   }
            while(ch=getchar()!='\n')//清空缓冲区 
            continue;
	  printf("请输入另一串字符，回车键结束\n"); 
		while(str1[i]!='\0')
		{
			for(i = 0,j=0;i <= 10;i++)
	 		{
	 			scanf("%c",&str2[i]);
			 	 
			 	 if(str2[i]=='\n')
			  		break;
					  m++; 
            }
			if(str2[i]=='\n')
			  		break;
	   }
			while(ch=getchar()!='\n')//清空缓冲区 
            continue;
            for(i=0;i<k;i++)
		       printf("%c",str1[i]);
		    for(i=0;i<m;i++)
				printf("%c",str2[i]);
         for(i = 0;i < k;i++) 
		{
			if (e <str1[i])
			{
		  		s = i;//找出最大项 
			}
		}
		 for (j = k+m; j >=i+m; j--) 
        {
            str1[j]=str1[j-m];
        }
       
	   for(j=k,v=0;j<=i+m,v<=m;j++,v++)
	   str1[j] = str2[v];
      
    for(i=0;i<=k+m;i++)
	printf("%c",str1[i]);
	

/*

for (i=0; i<n; i++)
{
    if(e < a[i]) 
    {
        for (j=n; j>i; j--) 
        {
            a[j]=a[j-1];
        }
       a[i] = e;
       break;
   }
   else 
   a[n]=e;
}
}
*/

return 0;	
}
