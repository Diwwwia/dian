#include <stdio.h>
int main() {

	int a,b,c;
	printf("请输入哪层有一人等候电梯:,请输入要到哪一层：,请输入电梯此时在哪一层\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("%d %d %d\n%d %d %d\n%d %d %d", c, 0, 0, a, a - c, 1, b, a - c + b, 0);

	return 0;
}