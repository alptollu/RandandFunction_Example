#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int biggest (int A[],int numbers)
{
    int i,big;
    big=A[0];
    for(i=1;i<numbers;i++)
    {
        if(A[i]>big)
        {
            big=A[i];
        }
    }
    return big;
}
int main() {
    int n; //number of random numbers
    int t;
    printf("Howmany random number u want?\n");
    scanf("%d",&n);

    printf("What is the top boundry number for random numbers? e.g Any number from 0 to ....?");
    scanf("%d",&t);

    int i;
    int row[n];
    srand(time(0));
    for(i=0;i<n;i++)
    {
        row[i]=rand()%t;
        printf("%d\n",row[i]);
    }
    printf("Biggest number between these numbers is %d",biggest(row,n));
    return 0;
}
