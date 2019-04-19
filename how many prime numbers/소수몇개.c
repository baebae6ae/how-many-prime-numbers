#include <stdio.h>

int main()
{
	int i,j,p,a=0;
	int s;
	while(1)
	{
		printf("2부터 몇 까지의 소수의 개수?: ");
		scanf("%d", &s); 
		for(i=2;i<s+1;i++)
		{
			for(j=i;j>=1;j--)
			{
				if(i%j==0)
				{
					a++;
				}
			}
			if(a<3)
			p++;
			a=0;
		}
		printf("2부터 %d까지의 소수는 %d개\n", s,p);
		p=0;
	}
	return 0;
}
