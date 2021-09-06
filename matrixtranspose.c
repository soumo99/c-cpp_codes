#include<stdio.h>
int main()
{
    int arr1[3][3] ,  i , j , trans[3][3] ; // INTEGERS PART / VALUE TAKING PART 
    printf("Enter the elements of the first matrix : "); // STATEMENT FOR THE FIRST MATRIX ELEMENT 
    for(i=0 ; i<3 ; i++) // LOOPS FOR ROWS 
    {
        for(j=0 ; j<3 ; j++) // LOOPS FOR COLUMNS
        scanf("%d" , &arr1[i][j]); // SCANNING THE ROWS AND COLUMNS PART 
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            trans[j][i] = arr1[i][j]  ; 
        }
    }
    printf("The resultant transposed  matrix is :\n");

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        
            printf("%d \t " , trans[i][j]); 
            printf("\n");
        
    }
    return 0;
}