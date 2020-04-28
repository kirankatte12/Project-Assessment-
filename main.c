#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// working code with no funcitons


int main(){

char str[1000]="wearediscoveredfleeatonce", *ptr;
ptr = &str;
int length = 25, rails = 3, i, j, count, matrixarray[100][1000];



while(*ptr != '\0')
{
printf("%c", *ptr++);
}

printf("\nLength: %d\n", length);
printf("Rails: %d\n", rails);

for(i=0; i<rails; i++)
{
    for(j=0; j<length;j++)
    {
        matrixarray[i][j]=0;
    }
}
count = 0;
j = 0;
while(j<length)
{
    if(count%2==0)
    {
        for(i=0; i<rails;i++)
        {
            matrixarray[i][j] = (int)str[j];
            j++;
        }
    }
    else
    {
        for(i=rails-2; i>0; i--)
        {
            matrixarray[i][j] = (int)str[j];
            j++;
        }
    }
count ++;
}
for(i=0; i<rails;i++)
{
    for(j=0;j<length;j++)
    {
        if(matrixarray[i][j] != 0)
            printf("%c", matrixarray[i][j]);
    }
}
printf("\n");
}


