#include<stdio.h>

//TUM KEITH KIMUTAI
//ENE212-0092/2-2021

int main()
{  
//Initialization      
int a[5][5], b[5][5], c[5][5];
int m,x,y,z;         

//Entering the values of the matrices
    printf("Enter the value of M (M <=5): \n");
    scanf("%d", & m);
    printf("Enter the elements of matrix 1: \n");
    for (x=0; x<m; x++){
        for(y=0; y<m; y++){
            scanf("%d", & a[x][y]);
        }     
    }
printf("Enter the elements of matrix 2: \n");
for(x=0; x<m; x++){
    for(y=0; y<m; y++)
    {
        scanf("%d", & b[x][y]);
    }
}

//Multiplying the 2 matrices
for(x=0; x<m; x++){
    for(y=0; y<m; y++){
        c[x][y] = 0;
        for(z=0; z<m; z++){
            c[x][y] += a[x][z] * b[z][y];
        }
    }
}

printf("The product of the two matrices is: \n");
for (x=0; x<m; x++){
    for(y=0; y<m; y++){
        printf("%d\t", c[x][y]);
    }
    printf("\n");
}
return 0;
        
}

