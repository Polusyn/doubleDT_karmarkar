#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "multi_cost_h.h"
#include <malloc.h>
int n,m;
double **a;
double* b, *c, *x;

int main(void)
{
	/*
	scanf("%d",&m);
	scanf("%d",&n);
	FILE* a_file;
	FILE *b_file;
	FILE *c_file;
	*/
	m=4;
	a=(double**)malloc(m*sizeof(double*));

	for (int i=0;i<m;i++)
		free(a[i]);
	free(a);
	/*
	b=(double*)malloc(n*sizeof(double));
	c=(double*)malloc(n*sizeof(double));
	x=(double*)malloc(n*sizeof(double));
	hx = (double *)malloc(n*sizeof(double));
	hv = (double *)malloc(n*sizeof(double));
	vk = (double *)malloc(m*sizeof(double));
	a_file=fopen("a_file.txt","r");
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		fscanf(a_file,"%lf ",&a[i][j]);
		fscanf(a_file,"\n");
	}
	fclose(a_file);
	c_file = fopen("c_file.txt","r");
	for (int i=0;i<n;i++)
	{
		fscanf(c_file,"%lf\n",&c[i]);
	}
	fclose(c_file);
	b_file = fopen("b_file.txt","r");
	for (int i=0;i<m;i++)
	{
		fscanf(b_file,"%lf\n",&b[i]);
	}
	fclose(b_file);
	*/
	return 0;
}

