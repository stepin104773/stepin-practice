/**
* @file CheckPrime.c
*
*/
#include <stdio.h>
#include <math.h>

/**
* Check if a number is prime or note
* @param[in] Number to be checked
* @return If number is prime or note
* @note Returns 1 if prime and 0 if not prime
*/
short checkPrime(int n)
{
  short primeFlag = 1;
  for(int i = 2; i <= sqrt(n); i++)
  {
    if(n % i == 0)
    {
      primeFlag = 0;
      break;
    }
  }
  if(n <= 1)
  {
    primeFlag = 0;
  }
  return primeFlag;

}

/**
* Main entry point of the program.
*
*/
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if(checkPrime(n))
  {
    printf("The number %d is a Prime Number\n", n);
  }
  else
  {
    printf("The number %d is NOT a Prime Number\n", n);
  }
  return 0;
}