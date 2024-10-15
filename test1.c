//
// Created by ximo on 24-10-14.
//
#include <stdio.h>
#include <stdlib.h>

#define c 110 //定义最大值

int N, V;
int v[c], w[c], s[c], f[c][c];

int max(int a, int b) {//取最大值
    return a > b ? a : b;
}

int main() {
    scanf("%d %d", &N, &V);//输入种类和体积 3 10

    for (int i = 1; i <= N; i++) {//不从0开始直接空一行用来后面进行比较
        scanf("%d %d %d", &v[i], &w[i], &s[i]);//物品的
    }

    for (int i = 1; i <= N; i++) {//遍历所有物品,不包括数量
        for (int j = 0; j <= V; j++) {//遍历从0到v的体积
            for (int k = 0; k <= s[i] && k * v[i] <= j; k++) {//遍历每个物品,加上每个所含的数量
                f[i][j] = max(f[i][j], f[i - 1][j - v[i] * k] + w[i] * k);//表示在不考虑当前物品i的情况下,背包容量为j - k * v[i]时的最大价值再加上当前物品i的价值k * w[i]
            }
        }
    }

    printf("%d\n", f[N][V]);

    return 0;
}