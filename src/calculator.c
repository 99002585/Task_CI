#include <calculator.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int factorial(int operand1)
{
  if(operand1<0)
   return -1;
  else if(operand1==0 ||operand1==1)
    return 1;
  else
  {
    int fact;
    for (int loop_var = 1; loop_var <=operand1 ; ++loop_var)
    {
          fact *= loop_var;
    }
    return fact;
  }
}
