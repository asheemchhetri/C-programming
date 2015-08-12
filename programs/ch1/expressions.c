/* This program deal with the Postfix and prefix expressions:
*  Postfix: Operand Operator
*  Prefix:  Operator Operand
*  Operand: It is the objet on which computation occurs.
*  Operator: These are the syntactic token such as +,-, etc. They can be expression like sizeof(), casting, etc.
*  The postfix expression operation occurs after the expression is evaluated. 
*  While with prefix operation occurs before the expression is evaluated.
*  Author: Asheem Chhetri
*  Date: Aug 11, 2015
*  Change log:
*  <Date>: Change description
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	int number = 50;
	int prefix_num = 0;
	int postfix_num = 0;
	printf("The number value: %d\n",number);
	postfix_num = number++;
	printf("Value after the postfix operation: %d\n",postfix_num);//postfix_num = number;
	printf("Value of number: %d\n",number);//Value of number is changed.
	prefix_num = ++number;
	printf("Value after the prefix operation: %d\n",prefix_num);
	printf("Value of number: %d\n",number);//Value of number is changed.
	return 0;
}
/*So what happened on line22, here postfix_num is assigned to number which is 50, and it stays like that only.
* While the value of number is updated to 51. 
* For line 25, prefix_num is assigned value of 52, because number is already chnaged to 51 earlier. But 
* if you remember, prefix evaluates first and assigns later.
*/
