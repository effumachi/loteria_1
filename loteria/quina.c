#include <stdio.h>
void quina()
{
#define na 5
#define np 80
    FILE * f;
    f=fopen("02_Quina.txt","a");
    int x[na],k,l,n;
    k=0;
    l=0;
    n=0;

    for(k=0; k<na; k++)
    {
        x[k]=1+rand()%np;
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
    printf("\nQuina\n");
    fprintf(f,"\n");
    for(k=0;k<na; k++)
    {
        printf("%3d\n",x[k]);
    }
    for(k=0;k<na; k++)
    {
        fprintf(f,"%3d",x[k]);
    }
    fclose(f);
}
