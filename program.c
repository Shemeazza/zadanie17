
#include <stdio.h>
int a =0;
int b =0;
int c =0;

int main()
{
	printf("\npodaj 1 warotsc:\t");
	scanf("%d",&a);
	printf("\npodaj 2 warotsc:\t");
	scanf("%d",&b);
	printf("\npodaj 3 warotsc:\t");
	scanf("%d",&c);
	
	printf("\n wynik to\t%d",oblicz(a,b,c));
    return 0;
}

int oblicz(int a, int b, int c){
	return (a*b*c);
}
