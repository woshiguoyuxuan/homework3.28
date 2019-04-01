#include <stdio.h>
#include <stdint.h>

uint32_t antitone(uint32_t buf);

int main(void)
{
	uint32_t a = 0xff00ff00;
	uint32_t b;
	b = antitone(a);
	printf("b = %08X\n",b);
	printf("a = %08X\n",a);
	return 0;
}

uint32_t antitone(uint32_t buf)
{
	uint32_t search = buf;
	uint32_t new_buf = 0;
	int i;
	for(i = 0; i < 32; i++)
	{
		if((search >> i)%2)
		{
			new_buf = new_buf | (1 << (31 - i));
		}
		search = buf;
	}
	return new_buf;
}