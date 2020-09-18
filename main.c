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
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Factorial\n6. Angstrom\n7. Primeno check\n8. Even\Odd check\n9. Oddnum check10. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", calculator_operation);

    if(calculator_operation==10)
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
             int val=isangstrom(int calculator_operand1);
             if(value=0)
                     printf("NOT ANGSTROM");
             else
                     printf("ANGSTROM");
             break;
        case 7:
             scanf("%d",calculator_operand1);
             int val=isprime(int calculator_operand1);
             if(value=1)
                     printf("\nNOT PRIME");
             else
                     printf("\nPRIME");
             break;      
        case 8:
             scanf("%d",calculator_operand1);
             int val=even_odd(int calculator_operand1);
             if(value=1)
                     printf("\nEVEN");
             else
                     printf("\nODD");
             break;      
    
    
    
    
        case 5:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

