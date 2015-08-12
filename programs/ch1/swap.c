#include <stdio.h>

int main(int argc, char **argv)
{
	int x = 10;
	int y = 20;
	int z = 0;
	printf("Before swapping\n");
	printf("Current value of x: %d, y: %d,z(swap variable): %d\n",x,y,z);
	z = x;
	x = y;
	y = z;
	printf("After swapping\n");
	printf("Current value of x: %d, y: %d,z(swap variable): %d\n",x,y,z);
	return 0;
}