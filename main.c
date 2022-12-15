#include <stdio.h>
//計算 i 次方的值
int main(){
    int num;
    while (scanf("%d", &num) != EOF) {
        if (num > 31) {
            printf("Value of more than 31\n");
        }
        else {
            int ans = 1;
            for (int i=0; i<num; i++) {
                ans *= 2;
            }
            printf("%d\n", ans);
        }
    }
    return 0;
}
