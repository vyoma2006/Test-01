#include<stdio.h>
#include<unistd.h>// For sleep function
int main()
{

int seconds;

// Input from the User
printf("Enter the number of seconds to countdown :\n");
scanf("%d",&seconds);

//To countdown
while (seconds>=0)
{
printf("%d\n", seconds);
sleep(1);// Wait for 1 second
seconds-- ;
}
printf("Countdown completed\n");
printf("24DCS094_vyoma\n");
  return 0;// Successful execution
}