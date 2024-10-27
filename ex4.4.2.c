#include <stdio.h>

// 排序函数，从大到小排序
void sort_desc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // 修改为 "<" 实现从大到小
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[4];
    printf("请输入4个整数: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }

    sort_desc(a, 4);  // 调用排序函数，按从大到小排序

    printf("按从大到小的顺序输出: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
