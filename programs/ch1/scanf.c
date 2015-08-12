/* In this program, we will look at a case, where we need strict user input or else the scanf stops reaidng
*  Author: Asheem Chhetri
*  Date: August 11/2015
*  Change log:
*  <Date>: Change description
*/
#define COLON ':'
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{	
	int date = 0;
	int month = 0;
	int year =0;
	printf("Please enter a date in format(mm-dd-yyyy): \n");
	scanf("%d-%d-%d",&month,&date,&year);
	printf("Date entered%c %d-%d-%d\n",COLON,month,date,year);
	return 0;
}
/*Note: Here we have a specific sequence for scanf which is: scanf("%d-%d-%d",&month,&date,&year);
* Notice the '-' in between '%d', if a user enters an input such as: 08 11 2015
* Then the output will be following:
* Please enter a date in format(mm-dd-yyyy): 
* 08 11 2015
* Date entered: 8-0-0
* This is not we are expecting so the input should be following: 
* Please enter a date in format(mm-dd-yyyy): 
* 08-11-2015
* Date entered: 8-11-2015
* In this program we learned, that it requires Strict input from user.
*/
