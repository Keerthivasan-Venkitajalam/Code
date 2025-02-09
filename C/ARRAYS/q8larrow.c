#include <stdio.h>
int main(){
    int m,n;
    printf("ENTER THE NO OF ROWS (n): ");
    scanf("%d",&n);
    printf("ENTER THE NO OF COLUMNS (m): ");
    scanf("%d",&m);

    int matrix[n][m];
    printf("ENTER THE ELEMENTS OF THE MATRIX:\n ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("ENTER THE ELEMENTS OF THE MATRIX :\n");
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        int maxElement=matrix[i][0];
        for(int j=1;j<m;j++){
            if(matrix[i][j]>maxElement){
                maxElement=matrix[i][j];
            }   
        }
        printf ("LARGEST ELEMENT %d=%d\n",i+1,maxElement);
    }
    return 0;
}