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

int add(int a, int b)
{
	return a+b;
}
// comment1
// comment2

