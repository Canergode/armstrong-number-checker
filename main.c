#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int number,remainder,result=0,originalNumber;

    // Geta 3-digit number from user
    printf("Enter a 3-digit number:\n");
    scanf("%d",&number);

    originalNumber=number;

    // Calculate the sum of cubes of each digit
    while(number!=0)
    {
      remainder=number%10;
      result=result+remainder*remainder*remainder;
      number=number/10;
    }

    // Check if the number is an Armstrong number
    if(originalNumber==result)
    {
        printf("%d is an Armstrong number",originalNumber);
    }
    else
    {
        printf("%d is not an Armstrong number",originalNumber);
    }

    return 0;
}
