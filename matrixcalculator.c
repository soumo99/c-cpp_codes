#include<stdio.h> // HEADER FILE 
int main() // MAIN PART 
{
    int arr1[3][3] , arr2[3][3] , arr3[3][3] , arr4[3][3] , arr5[3][3] , arr6[3][3] , i , j , k ; // INTEGERS PART / VALUE TAKING PART 
    printf("Enter the elements of the first matrix : "); // STATEMENT FOR THE FIRST MATRIX ELEMENT 
    for(i=0 ; i<3 ; i++) // LOOPS FOR ROWS 
    {
        for(j=0 ; j<3 ; j++) // LOOPS FOR COLUMNS
        scanf("%d" , &arr1[i][j]); // SCANNING THE ROWS AND COLUMNS PART 
    } 

    printf("Enter the elements of the second  matrix : "); // STATEMNT FOR THE ELEMENTS OF THE SECONF MATRIX 
    for(i=0 ; i<3 ; i++) // LOOP FOR THE ROWS 
    {
        for(j=0 ; j<3 ; j++) // LOOPS FOR THE COLUMNS 

        scanf("%d" , &arr2[i][j]); // SCANNING THE ROWS AND COLUMNS 

    } // END OF  THE FOR LOOPS 
 
// MATRIX ADDITION  

    for(i=0 ; i<3 ; i++)  
    {   
        for(j=0 ; j<3 ; j++) 
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j]; // CALCULATING THE ADDITION PART 
        }  
    }
    printf("THE RESULTANT MATRIX FOR ADDITION : \n"); // STATEMENT  FOR THE RESULATANT VALUE 
    
    for(i=0 ; i<3 ; i++) 
    {
        for(j=0 ; j<3 ; j++)
        printf("%d \t " , arr3[i][j]); // PRINTING THE FINAL RESULT OF THE CALCULATION 
        printf("\n");
    }

// MATRIX SUBTRACTION 

    for(i=0 ; i<3 ; i++) // LOOPS FOR THE ROWS 
    {
        for(j=0 ; j<3 ; j++) // LOOP FOR THE COLUMNS 
        {
            arr4[i][j] = arr1[i][j] - arr2[i][j]; // CALCULATING THE SUBTRACTION PART 
        }
    }
    printf("THE RESULTANT MATRIX FOR SUBTRACTION : \n"); // STATAMENT FOR THE RESULATANT MATRIX 
    
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        printf("%d \t " , arr4[i][j]); // PRINTING THE FINAL RESULT OF THE CALCULATION 
        printf("\n");

    }// END OF THE  FOR  LOOPS 

    /*
    printf("ENTER THE FIRST MATRIX ELEMENT =\n");

for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {
            scanf("%d",&arr1[i][j]);
    }
    }
    printf("ENTER THE SECOND MATRIX ELEMENT =\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }*/

// MATRIX MULTIPLICATION 

    printf("THE RESULTANT MATRIX FOR MULTIPLICATION  =\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            arr5[i][j]=0;
            for(k=0;k<2;k++)
            {  
                arr5[i][j]=arr5[i][j]+arr1[i][k]*arr2[k][j];// CALCULATION TH MULTPLICATION PART
            }
        }   
    }


for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",arr5[i][j]);
        }
        printf("\n");
    }

    // MATRIX DIVISON 

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            arr6[i][j] = arr1[i][j] / arr2[i][j]; // CALCULATION PART OF THE DIVISION 
        }
    }
    printf("THE RESULTANT MATRIX FOR DIVISION : \n"); // STATEMENT OF THE RESULTANT MATRIX
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        printf("%d\t" , arr6[i][j]); // PRINTING THE FINAL RESULT 
        printf("\n");
        
    }
    return 0; // RETURN STATEMENT 
} //  END OF MAIN 