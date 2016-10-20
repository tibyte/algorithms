#include <cstdio>

int main()
{
	int num, base;
	char res[32];
	int i = 30;

	scanf("%d%d", &num, &base);
	
	for(;num>0;) {
		res[i--] = "0123456789ABCDEF"[num%base];
		num /= base;
	}
	res[31] = '\0';
	
	printf("%s\n", res+i+1);
	
	return 0;
}