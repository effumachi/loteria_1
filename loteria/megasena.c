#include <stdio.h>
void megasena()
{
//#define na 6
#define np 60
    //FILE * f;
    int na1,na;
    printf("MegaSena\nQuantos numeros vc deseja jogar?\n");
    scanf("%d",&na1);
    na=na1-1;

    int y[np],x[na],k,l,n;

    k=0;
    l=0;
    n=0;

    printf("MegaSena\n----------------------------------------\n");

      //  f=fopen("01_MegaSena.txt","a");
    for(k=0; k<na; k++)
    {
        x[k]=1+(rand()%np);
        for(n=0;n<2;n++)
        {
            for(l=0; l<k; l++)
            {
                if(x[l] == x[k])
                {
                    x[k]=1+rand()%np;
                    l=0;
                }
            }
        }
    }
    for(k=0;k<np;k++)
    {
        y[k]=0;
    }
    for(k=0;k<np;k++)
    {
        for(l=0;l<np;l++)
        {
            if(x[k]==(l+1))
            {
                y[l]=x[k];
            }
        }
    }
    for(k=0;k<np;k++)
    {
        if(y[k]==0)
        {
            printf("    ");
        }
        else
        {
        printf("%4d",y[k]);
        }
        if(k%10==9)
        {
            printf("\n");
        }
    }
    //for(k=0;k<na; k++)
    //{
    //    fprintf(f,"%4d",x[k]);
    //}
    //fprintf(f,"\n");
    //fclose(f);
    printf("----------------------------------------\n");
}
