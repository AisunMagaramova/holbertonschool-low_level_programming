#inclide "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;//dovr ucun deyisen 
	 //dovr: 0-dan n-e qeder gedirik ve her bayti doldururq
	 for (i=0; i<n; i++)
		       {
			       s[i]=b;//i-ci bayti 'b' sivolu ile doldur
		       }
		       return (s);
}
