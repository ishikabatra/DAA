//Given an unsorted array of positive integers
//design an algorithm and implement it using a
//program to find whether there are any duplicate elements in the array or not.
//(use sorting) (Time Complexity = O(n log n))
#include<stdio.h>
int main()
{
    int t,n,a[50],i,key;
    scanf("%d",&t);
    while(t>0)
    {
       scanf("%d",&n);
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       scanf("%d",&key);
       for(i=0;i<n;i++)
       {
        if (a[i]==key)
       {
        printf("present %d",i+1);
        break;
       } 
       }
       if (i==n)
       printf("not present");

    }
    t=t-1;
    return 0;
}
