#include <stdio.h.>
int main(){

    int rows;
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}


// #include<stdio.h>
// int main(){
//     int n;
//     printf("No of rows:\n");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("*");
            
            
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include <stdio.h.>
// int main(){

//     int rows;
//     scanf("%d", &rows);

//     for(int i = 1; i <= rows; i++){
//         for(int j = 1; j <= i; j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }