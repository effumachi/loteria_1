#include <stdio.h>
void lotofacil()
{
#define na_lf 15
#define np_lf 25
    //FILE * f;
    int aux,ylf[np_lf],xlf[na_lf],k,l,n;
    k=0;
    l=0;
    n=0;
    printf("LotoFacil\n--------------------\n");
        //f=fopen("03_Lotofacil.txt","a");
    for(k=0; k<na_lf; k++)
    {
        xlf[k]=1+rand()%np_lf;
        for(n=0;n<2;n++)
        {
            for(l=0; l<k; l++)
            {
                if(xlf[l] == xlf[k])
                {
                    xlf[k]=1+rand()%np_lf;
                    l=0;
                }
            }
        }
    }
    for(k=0;k<np_lf;k++)
    {
        ylf[k]=0;
    }
    for(k=0;k<np_lf;k++)
    {
        for(l=0;l<np_lf;l++)
        {
            if(xlf[k]==(l+1))
            {
                ylf[l]=xlf[k];
            }
        }
    }
    for(k=0;k<np_lf;k++)
    {
        if(ylf[k]==0)
        {
            printf("    ");
        }
        else
        {
        printf("%4d",ylf[k]);
        }
        if(k%5==4)
        {
            printf("\n");
        }
    }/*
    for(k=0;k<np; k++)
    {
        fprintf(f,"%4d",y[k]);
    }
    fprintf(f,"\n");*/
    //fclose(f);
    printf("--------------------\n");
}
