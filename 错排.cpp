#include <stdio.h>
int f(int n){
    if(n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    int a=0; 
int b=1;      
int current;
    for(int i=3;i<=n;i++){
        current=(i-1)*(b+a);
        a=b;
        b=current;
    }
    return b;
}

int main() {
    int n;
    printf("�������ŵ����� n: ");
    scanf("%d", &n);
    int result = f(n);
    printf("װ���� %d �֡�\n", result);
    return 0;
}
