#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int H, M, X;
    scanf("%d%d%d", &H, &M, &X);
    H = (H + (M + X) / 60) % 24;
    M = (M + X) % 60;
    printf("%02d %02d", H, M);
}