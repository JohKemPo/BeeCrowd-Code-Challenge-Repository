#include <stdio.h>

#define MAX 100001

int main() {
    int n, m, bilhete, contagem[MAX], falsos = 0;

    while (scanf("%d %d", &n, &m) == 2 && n != 0 && m != 0) {
        falsos = 0;
        for (int i = 0; i < MAX; i++) contagem[i] = 0;

        for (int i = 0; i < m; i++) {
            scanf("%d", &bilhete);
            contagem[bilhete]++;
            if (contagem[bilhete] == 2) falsos++;
        }

        printf("%d\n", falsos);
    }

    return 0;
}
