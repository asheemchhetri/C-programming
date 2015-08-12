/* This program, is to understand the concepts of scanf structure of C.
* Author: Asheem Chhetri
* Date: August 11
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	char d = '\0';
	printf ("Enter some values: \n");
	scanf("%d%d%d %c",&a,&b,&c,&d);
	printf("a = %d\nb = %d\nc = %d\nd = %c\n",a,b,c,d);
	return 0;
}
/* Note: since our scnaf function is in this form: scanf("%d%d%d%c",&a,&b,&c,&d)
*  If we would have given an input of 214 156 14 z, then the %c will not skip white spaace,
*  and it is wrong to avoid that, we need to use this "% c" or " %c" instead of  "%c"
*/
