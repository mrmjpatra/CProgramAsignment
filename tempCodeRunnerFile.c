/* */
#include<stdio.h>


void main()
{
    
    int arr[][3]={{10,20},{10,20,30}};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
    }
}