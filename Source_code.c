#include <stdio.h>
#include <stdlib.h>
/* 
Guess what, the line below is suppoded to be in a file called readme.md, 
this is the file where other user would come and read inorder to understand
what youre repo is for

it saves the time of going through your code to understand it
*/

//this program tells u d month of year based on the number u pick (1 - 12)

int main()
{
	int month, year ;
	char ans;
	puts("\t\t CALENDER\t\t");
	printf("\tEnter the month number (1-12): ");
	scanf("%d", &month);

	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf("The month has 30 days.\nDo you want to know what month it is exactly? ");
		printf("\n 1- Yeah sure. \n 2- Nah I'm good.\n\t\t   ");
		scanf(" %c", &ans); //add a space before %c to compensate for the unused \n(enter key) from the above scanf
		if(ans=='a')
		{
			printf(" Input the month number again: ");
			scanf("%d", &month);
			
			if(month == 4)
			puts("The month of APRIL has 30 days.");
			else if (month == 6)
			puts("The month of JUNE has 30 days.");
			else if (month == 9)
			puts("The month of SEPTEMBER has 30 days. ");
			else if (month ==11)
			puts("The month of NOVEMBER has 30 days.");
			else
			puts("That's not a month with 30 days");
		}
		else if (ans == 'b')
		puts("Your loss. ");
		
	}

	else if (month == 2)
	{
		puts("\nYou selected the month of February.");
	printf("What year is it?: ");
	scanf("%d", &year);

		if (year % 4)
			puts("The month of February has 28 days this year ");
		else
			puts("Since it's a leap year, the month of Febrary has 29 days this year ");
	}
	else
		puts("The month has 31 days");

	return 0;
}
