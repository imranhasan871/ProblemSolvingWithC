#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {

    int a, b, c, m1, m2, m3;
    scanf("%d %d %d",&a, &b, &c);

    m1 = max(a, max(b, c));
    m3 = min(a, min(a, c));
    m2 = (a + b + c) - (m1 + m3);
    
    printf("%d %d %d", m3, m2, m1);
    return 0;

}