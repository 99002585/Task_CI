#include <calculator.h>
#include <stdio.h>
#include<stdio_ext.h>


/* Display the menu of operations supported */
void calculator_menu(void);
int calculator_operand1=0, calculator_operand2=0, calculator_operand3=0,val=0;
float val1=0;


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    int calculator_operation;
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Factorial\n6. Angstrom\n7. Primeno check\n8. Even_Odd check\n9. Circle area\n10.Cirlce perimeter\n11. Square area");
    printf("\n12. Square perimeter\n 13.Rectngle area\n 14.Rectangle perimeter\n15. Triangle area\n16. Triangle perimeter 17. Exit");
    printf("\n\tEnter your choice\n");
   
     
    scanf("%d", &calculator_operation);

   
    
  
  
  switch(calculator_operation)
    {
        case 1:
            scanf("%d %d", &calculator_operand1, &calculator_operand2);
            
           val= add(calculator_operand1, calculator_operand2);
            printf("%d",val);
            
            
            break;
        case 2:
            scanf("%d %d", &calculator_operand1, &calculator_operand2);
            
             val=subtract(calculator_operand1, calculator_operand2);
            
            
            printf("%d",val);
            break;
        case 3:
            scanf("%d %d", &calculator_operand1, &calculator_operand2);
            
             val=multiply(calculator_operand1, calculator_operand2);
            
            printf("%d",val);
           
            break;
        case 4:
            scanf("%d %d", &calculator_operand1, &calculator_operand2);
            
             val=divide(calculator_operand1, calculator_operand2);
            
            
            printf("%d",val);
            break;
        case 5:
            scanf("%d", &calculator_operand1);
             val=factorial(calculator_operand1);
            if(val<0)
              printf("No factorial for negative no");
            else 
             printf(" Factorial=%d",val);
            break;
        case 6:
             scanf("%d",&calculator_operand1);
              val=isangstrom(calculator_operand1);
             if(val=0)
                     printf("NOT ANGSTROM");
             else
                     printf("ANGSTROM");
             break;
        case 7:
             scanf("%d",&calculator_operand1);
              val=isprime(calculator_operand1);
             if(val=1)
                     printf("\nNOT PRIME");
             else
                     printf("\nPRIME");
             break;      
        case 8:
             scanf("%d",&calculator_operand1);
              val=even_odd(calculator_operand1);
             if(val=1)
                     printf("\nEVEN");
             else
                     printf("\nODD");
             break;      
         case 9:
             scanf("%d",&calculator_operand1);
              val1=circle_area(calculator_operand1);
             printf("Area=%f",val1);
             break;
         case 10:
             scanf("%d",&calculator_operand1);
              val1=circle_pm(calculator_operand1);
             printf("Perimeter=%f",val1);
             break;
          case 11:
             scanf("%d",&calculator_operand1);
              val=square_area(calculator_operand1);
             printf("Area=%d",val);
             break;
          case 12:
             scanf("%d",&calculator_operand1);
              val=square_pm(calculator_operand1);
             printf("Perimeter=%d",val);
             break;
          case 13:
             scanf("%d %d", &calculator_operand1, &calculator_operand2);
              val=rect_area(calculator_operand1, calculator_operand2);
             printf("Area=%d",val);
             break;
           case 14:
             scanf("%d %d", &calculator_operand1, &calculator_operand2);
              val=rect_pm(calculator_operand1, calculator_operand2);
             printf("Perimeter=%d",val);
             break;
           case 15:
             scanf("%d %d %d", &calculator_operand1, &calculator_operand2, &calculator_operand3);
              val1=tri_area(calculator_operand1, calculator_operand2, calculator_operand3);
             printf("Area=%f",val1);
             break;
           case 16:
             scanf("%d %d %d", &calculator_operand1, &calculator_operand2, &calculator_operand3);
              val=tri_pm(calculator_operand1, calculator_operand2, calculator_operand3);
             printf("Perimeter=%d",val);
             break;
    
    
        
        default:
            printf("\n\t---It should never come here---\n");
    }
}

