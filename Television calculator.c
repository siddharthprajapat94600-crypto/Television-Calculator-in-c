#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int c,price,s=10,a=15,b=12;
    float ntp,dis;
    printf("\tTelevision Calculator\n");
    printf("============================================================\n");
    printf("\n\tChoose Your Television\n");
     printf("-----------------------------------------------------------\n");
    printf("1. Colored Television\n");
     printf("-----------------------------------------------------------\n");
    printf("2. Black & White Television\n");
     printf("-----------------------------------------------------------\n");

    c=getch();
    if(c == '1'){
        printf("\n\tYou Choose Colored Television\n");
        printf("-----------------------------------------------------------\n");
        printf("Colored Television is Avalaible in 2 Varity\n");
         printf("-----------------------------------------------------------\n");
         printf("1. Colored Television 24 inch\n");
          printf("-----------------------------------------------------------\n");
          printf("2. Colored Television 32 inch\n");
           printf("-----------------------------------------------------------\n");
          c=getch();
          if( c == '1'){
            printf("\n\tYou Choosed 24 inch\n");
             printf("-----------------------------------------------------------\n");
            printf("Enter 24 inch Television price :- ");
            scanf("%d",&price);
            printf("-----------------------------------------------------------\n");
            printf("Discount is %d%% on your 24 inch Colored Television \n",s);
             printf("-----------------------------------------------------------\n");
            dis = price*0.10;
            ntp = price-dis;
            printf("24 inch Television Net Price is %.2f\n",ntp);
             printf("-----------------------------------------------------------\n");

          }
          else if(c == '2'){
            printf("\n\tYou Choosed 32 inch\n");
            printf("-----------------------------------------------------------\n");
            printf("Enter 32 inch Television price :- ");
            scanf("%d",&price);
            printf("\n-----------------------------------------------------------\n");
             printf("Discount is %d%% on your 32 inch Colored Television \n",a);
             printf("-----------------------------------------------------------\n");
            dis = price*0.15;
            ntp = price-dis;
            printf("32 inch Television Net Price is %.2f\n",ntp);
            printf("-----------------------------------------------------------\n");
          }
    }
    else if( c == '2'){
        printf("\n\tYou Choose Black & White Television\n");
        printf("-----------------------------------------------------------\n");
        printf("You Choosed 21 inch Black and White Television\n");
        printf("-----------------------------------------------------------\n");
           printf("Enter 21 inch B&W Television price :- ");
            scanf("%d",&price);
            printf("-----------------------------------------------------------\n");
            printf("Discount is %d%% on your 21 inch Black and White Television \n",b);
            printf("-----------------------------------------------------------\n");
            dis = price*0.12;
            ntp = price-dis;
            printf("21 inch Television Net Price is %.2f\n",ntp);
            printf("-----------------------------------------------------------\n");
    }

}
