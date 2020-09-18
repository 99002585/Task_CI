#include <calculator.h>
#include <math.h>

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

int isangstrom(int operand1)
{
    int temp_operand,loop_var=0,remainder=0,result=0;
    for (temp_operand = operand1; temp_operand != 0; ++loop_var)
    {
       temp_operand /= 10;
    }

   for (temp_operand = operand1; temp_operand != 0; temp_operand /= 10)
   {
       remainder = temp_operand % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, loop_var);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == operand1)
    return 1;
   else
    return 0;
}    

int isprime(int operand1)
{
    int flag=0;
    if(operand1>1)
    {
        for (loop_var = 2; loop_var <= operand1 / 2; ++loop_var) {

        // condition for non-prime
        if (operand1 % loop_var == 0) 
        {
            flag = 1;
            break;
        }
    }
    return flag;
}        
 
