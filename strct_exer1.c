#include <stdio.h>

#ifndef EXER_COM_ENA
	#define EXER_COM_ENA
#endif

#include "exer_com.h"

int main(int argv, char *argc[])
{
	ST_EXER	st_val = {1,2,"Good morning!"};	
	ST_EXER *st_val_p = &st_val;
	ST_EXER st_val1 = {3,4,"Good afternoon!"};
	ST_EXER *st_val1_x = &st_val;

	printf("*** Init ****\n");
	printf("struct from=%d\n", st_val.from);
	printf("struct to=%d\n", st_val.to);
	printf("struct msg=%\n",st_val_p->msg);
	printf("struct from=%d\n", st_val1.from);
	printf("struct to=%d\n", st_val1.to);
	printf("struct msg=%3.8f\n",st_val1_x->msg);

	st_val.c_mnb = 'A';
	st_val_p->i_mnb = 1234;

	st_val. = 1.41421356;

	printf("*** Modify ****\n");

	printf("struct from=%d\n", st_val_p->c_mnb);
	printf("struct to=%d\n", st_val.i_mnb);
	printf("struct msg=%c\n",st_val_p->d_mnb[0]);
	printf("struct from=%d\n", st_val1.from);
	printf("struct to=%d\n", st_val1.to);
	printf("struct msg=%3.8f\n",st_val1_x->msg);

	return 0;
}
