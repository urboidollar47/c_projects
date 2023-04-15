# include <stdio.h>

void input_matix(int a[], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    }
}

int main(){
    int n;
    int a[100][100];
    int b[100][100];

    int r1, c1;     // matrix 1
    int r2, c2;     // matrix 2

    printf("matrix 1\n");
    printf("row: ");    // row of matrix 1
    scanf("%d", &r1);
    printf("column: ");
    scanf("%d", &c1);   // column of matrix 1

    printf("\nmatrix2\n");
    printf("row: ");    // row of matix 1
    scanf("%d", &r2);
    printf("column: "); // column of matrix 2
    scanf("%d", &c2);


    // input matrix elements
    input_matix(a, r1); // matrix 1 input
    input_matix(b, r2); // matrix 2 input

    int sum[100][100];
    
    // sum of matrix
    for(int i = 0; i < r1; ++i){
        for(int j = 0; j < r1; ++j)
            sum[i][j] = a[i][j] + b[i][j];
    }

    // printing sum matrix

    printf("\n");
    for(int i = 0; i < r1; ++i){
        for(int j = 0; j < r1; ++j)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}