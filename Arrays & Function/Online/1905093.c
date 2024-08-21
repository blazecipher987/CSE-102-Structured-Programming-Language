#include<stdio.h>



long long convert(int n)
{
    long long bin = 0;
    int rem, i = 1, step = 1,count =0;
    while (n != 0)
    {
        rem = n % 2;
        n = n/2;
        bin += rem * i;
        i = i*10;
    }

    while(bin!=0)
    {
        if((bin%10)==1)
            count++;
        bin= bin/10;
    }

    return count;
}


int factor(int m)
{
    int num,i;

    for(i=1; i<=m; i++)
    {
        if(m%i==0)
            num++;
    }

    return num;
}






int main()
{
    int n,x,y,p,a[1000],k,temp,i,j;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }



    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if( convert(a[i])>convert(a[j]) )
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

            else if(convert(a[i])== convert(a[j]))
            {
                if(factor(a[j])<factor(a[i]))
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }

                else if(factor(a[j])==factor(a[i]))
                {
                    if(a[j]<a[i])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }

        }
    }



    for(k=0; k<n; k++)
        printf("%d",a[k]);


    return 0;



}
