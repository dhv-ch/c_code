// c code to learn the use of indef directive..


/*#include<stdio.h>
#define xyz 10

int main()
{
	#ifdef xyz
	printf("Yeah!!!\nyou won a lottery no. %d\n", xyz);

	#else
	printf("error while finding lottery no.\n");
	#endif
	return 0;
}*/

#include <stdio.h>

#define YEARS_OLD 12

#undef YEARS_OLD

int main()
{
   #ifndef YEARS_OLD
   printf("TechOnTheNet is over %d years old.\n", YEARS_OLD);
   #endif

   printf("TechOnTheNet is a great resource.\n");

   return 0;
}
