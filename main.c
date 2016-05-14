#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
int main()
{
    unsigned int a,b,i;

    scanf("%x",&a);
    scanf("%x",&b);
}


//2014_2
int main()
{
    int n,i,j,pom,niz[100];
    scanf("%d",n);

    srand(time(NULL));

    for(i=0;i<n;i++) niz[i]=(int)((rand()*1.0/RAND_MAX)*100+100);
    for(i=0;i<n;i++)
    {
        if (niz[i]%2==1) continue;
        else
        {
            for(j=i+1;j<n;j++)
            {
                if(niz[j]%2==1)
                {
                    pom=niz[i],niz[i]=niz[j],niz[j]=pom;
                    break;
                }
            }
            continue;
        }
    }
    for(i=0;i<n;i++) printf("%d",niz[i]);

}

//2014_1
int main()
{
    unsigned int x,y;
    int i;
    scanf("%u",&x);
    y=0;
    for(i=0;i<16;i++){
        y+=x&1;
        y<<=1;
    }
    y=~y;
    if (x=y) printf("DA");
    else printf("NE");
}
//2012_1
int main()
{
  int i,brk=0,bru;
  float x,y,pi;

  srand(time(NULL));

  printf("Unesi broj tacaka\n");
  scanf("%d",&bru);
  for(i=0;i<bru;i++){
    x=rand()*1.0/RAND_MAX;
    y=rand()*1.0/RAND_MAX;
    if ((x*x+y*y)<=1.0) brk++;
  }
  pi=4.0*brk/bru;
  printf("Broj Pi je %0.2f",pi);
}


//2012_2
int main()
{
    int n,i,ocena,o;
    float s=0,d=0,ocene[100],procenat[6];

    memset(procenat,0,6*sizeof(float));

    printf("Unesi broj studenata\n");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&ocene[i]);
        s+=ocene[i];
    }
    s/=n;
    printf("Prosecan broj poena je %f",s);
    for(i=0;i<n;d+=pow(ocene[i]-s,2),i++);
    d/=n;
    d=sqrt(d);
    printf("Standardna devijacija je %f",d);
    for(i=0;i<n;i++)
    {
        switch(ocena[i])
        {
            default:ocena=5;
            case >50:ocena=6;
            case >60:ocena=7;
            case >70:ocena=8;
            case >80:ocena=9;
            case >90:ocena=10;
        }
        procenat[ocena-5]++;
    }
    procenat[]/=n;
    for(i=0;i<6;i++) printf("Procenat studenata koji je dobio %d: %0.2f",i+5,procenat[i]*100);
}
*/


