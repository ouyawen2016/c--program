

   #include <stdio.h>



int main()
{
   int a;
   printf("请输入答对题目的数量\n") ;
   scanf("%d",&a);
   if(40<=a)
   
   {
   printf("Range:26-30\n"); 
   printf("Level:Excellent");}
  else if(30<=a) 
   {
   printf("Range:16-25\n");
   printf("Level:Good");}
   else if(10<=a) 

   {
   printf("Range:3-16\n");
   printf("Level:Elementary");}
   
   else if(a<=9) 
  {
   printf("Range:0-2\n");
   printf("Level:Guess");}

    
    return 0;
}

