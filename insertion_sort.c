#include<stdio.h>//header file 
int main()//main part 
{
    int arr[6]={2,4,1,5,3,7};// accepting values 
    int x , y, swap,n=6;// accepting  variables 
    for(x=1; x<=(n-1);x++)// loop used for scanning the index pos
    {
        for(y=x;y>0;y--)// loop is used  for checking the smaller numbers 
        {
            if(arr[y-1]>arr[y])
            {
            //swapping 
            swap = arr[y];
            arr[y] = arr[y-1];
            arr[y-1] = swap;
            }
        }

    }
    
    printf("Sorted array\n");//statement for printing the sorted array

    for(x=0 ; x<n ; x++)

    printf("%d\t" , arr[x]);//array sorted 

    return 0;
    

}