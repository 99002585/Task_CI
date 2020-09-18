#include <calculator.h>


/* Display the menu of operations supported */
void calculator_menu(void);


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
   
     __fpurge(stdin);
    scanf("%d", calculator_operation);

    if(calculator_operation==17)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", calculator_operand1, calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    
  
  
  switch(calculator_operation)
    {
        case 1:
            scanf("%d %d", calculator_operand1, calculator_operand2);
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case 2:
            scanf("%d %d", calculator_operand1, calculator_operand2);
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case 3:
            scanf("%d %d", calculator_operand1, calculator_operand2);
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case 4:
            scanf("%d %d", calculator_operand1, calculator_operand2);
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case 5:
            scanf("%d", calculator_operand1);
            int value=factorial(calculator_operand1);
            if(value<0)
              printf("No factorial for negative no";
            else if
              printf("\nFactorial=%d",value);
            break;
        case 6:
             scanf("%d",calculator_operand1);
             int val=isangstrom(calculator_operand1);
             if(value=0)
                     printf("NOT ANGSTROM");
             else
                     printf("ANGSTROM");
             break;
        case 7:
             scanf("%d",calculator_operand1);
             int val=isprime(calculator_operand1);
             if(value=1)
                     printf("\nNOT PRIME");
             else
                     printf("\nPRIME");
             break;      
        case 8:
             scanf("%d",calculator_operand1);
             int val=even_odd(calculator_operand1);
             if(value=1)
                     printf("\nEVEN");
             else
                     printf("\nODD");
             break;      
         case 9:
             scanf("%d",calculator_operand1);
             float val=circle_area(calculator_operand1);
             printf("Area=%d",val);
             break;
         case 10:
             scanf("%d",calculator_operand1);
             float val=circle_pm(calculator_operand1);
             printf("Perimeter=%d",val);
             break;
          case 11:
             scanf("%d",calculator_operand1);
             int val=square_area(calculator_operand1);
             printf("Area=%d",val);
             break;
          case 12:
             scanf("%d",calculator_operand1);
             int val=square_pm(calculator_operand1);
             printf("Perimeter=%d",val);
             break;
          case 13:
             scanf("%d %d", calculator_operand1, calculator_operand2);
             int val=rect_area(calculator_operand1, calculator_operand2);
             printf("Area=%d",val);
             break;
           case 14:
             scanf("%d %d", calculator_operand1, calculator_operand2);
             int val=rect_pm(calculator_operand1, calculator_operand2);
             printf("Perimeter=%d",val);
             break;
           case 15:
             scanf("%d %d %d", calculator_operand1, calculator_operand2, calculator_operand3);
             int val=tri_area(calculator_operand1, calculator_operand2, calculator_operand3);
             printf("Area=%d",val);
             break;
           case 16:
             scanf("%d %d %d", calculator_operand1, calculator_operand2, calculator_operand3);
             int val=tri_pm(calculator_operand1, calculator_operand2, calculator_operand3);
             printf("Perimeter=%d",val);
             break;
    
    
        case 17:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

