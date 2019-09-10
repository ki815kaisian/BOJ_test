#include <stdio.h>

int main(void)
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int right, top;
	right = w - x;
	top = h - y;

	int horizontal = x;
	if (right < x)horizontal = right;
	int vertical = y;
	if (top < y)vertical = top;

	if (horizontal > vertical)printf("%d", vertical);
	else printf("%d", horizontal);


	return 0;
}