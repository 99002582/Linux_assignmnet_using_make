#include <stdio.h>
#include "mstr.h"
#include "bit_oprtn.h"
#include "num_oprtn.h"
int main ()
{
	printf("\n........................................\n");
	    int op=set1(4,4);
	    int r=reset(2);
	    int p=flip(4);

	    printf("%d %d %d",op,r,p);
	    printf(" ");
	    isKthBitSet(3,5);
	    int x,y;
	    int count = 5;

	printf("\n........................................\n");
	 int d=factorial(4);
	 isprime(5);
	 ispalindrome(100);
	 printf(" \nfactorial is %d ",d);

	  x=sum(count, 12, 67, 6, 7, 100);
	  printf("\nsum is %d ",x);


	printf("\n........................................\n");
	char a[20]="Program";
    char b[20]="Hello world";

    int len = my_strlen(a);
    printf("Length is %d\n", len);

    printf("\nCopying first string into second... \n");
    my_strcpy(b, a); // copy the contents of ch_arr1 to ch_arr2
    printf("First string (a) = %s\n", a);
    printf("Second string (b) = %s\n", b);

    printf("\nConcatenating first and second string .. \n");
    my_strcat(a, b);
    printf("First string: %s\n", a);
    printf("Second string: %s\n\n", b);

    //my_strcmp(a,b);
     printf("Comparing first and second string .. ");
    printf("\nstrcmp(\"a\", \"b\") = %d\n", my_strcmp("a", "b") );


}
