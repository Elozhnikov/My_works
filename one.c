/* my First program in C++ */
#include <conio.h> 
#include <stdio.h> 
main()
{
  float a,b,c;
  a=b=c=0;
  char Sign;      
    printf("Enter the number 1  ");
      scanf("%f",&a);
    printf("Enter the mathematics operation:[+;-;*;/.]  ");
      scanf("%s", &Sign);
    printf("Enter the number 2 ");
       scanf("%f",&b);
           switch(Sign)
           {
            case '+':
               c=a+b;
               break;
            case '-':
               c=a-b;
               break;
            case '*':
               c=a*b;
               break;
            case '/':
               if (b!=0)
               {  
               c=a/b;
               break;
               }
             else {
                  printf("<!>Warning! Must not divide zero.");
                  printf("%\n");
                  return Sign;
                  break;
                  }       
            default:
               break;              
                   }
      printf("%\t");
      printf("C: ");
      printf("%4.2f", c);
      printf("%\n");
 getch();                        
                 
}
