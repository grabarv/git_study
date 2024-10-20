include <stdio.h>

int void main()
{
	printf("Hello\n");
	printf(func(2));
	printf(func(true));
}

int func(int a)
{
	if (a % 2 == 0 ) {
		return 0;
	} else {
		return 1;
	}
}

boolean func(bollean b)
{
	return !b;
}
 // comment
