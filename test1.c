#include <stdio.h>
int timUocChung(int M, int N, int K){
    int count = 0;
    int max = 0;
    int min = M;
    if (N < M){
        min = N;
    }

    for (int i = min; i >= 1; i--){
        if (M % i == 0 && N % i ==0){
            count++;
            if (count == K){
                max = i;
                break;
            }
        }
    }
    return max;
}

int main(){
    int M, N, K;
    printf("Nhap 2 so M va N: ");
    scanf("%d %d", &M, &N);
    printf("Nhap k: ");
    scanf("%d", &K);
    int result = timUocChung(M,N,K);
    printf("Uoc chung la: %d\n",result);
}