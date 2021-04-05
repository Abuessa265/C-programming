#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k[n+1];
    int a[n+1];
    for(int i = 0; i <= n; i++){
        k[i] = 0;
        a[i] = 0;
    }
    for(int i = 2; i <= n; i++){
        if(k[i]==0){
            for(int j = 2; i*j <= n; j++){
                k[i*j] = 1;
            }
        }
    }
    int indx = 0;
    for(int i = 2; i <= n; i++){
        if(k[i]==0){
            a[indx] = i;
            indx += 2;
        }
    }
    int sum = 0;
    for(int i = 0; i <= n; i++){
        if(i%2==0) sum += a[i];
    }
    printf("%d\n", sum);
    return 0;
}
