void knock05() {
    int a = 0;
    int b = 0;
    printf("input number a, b >> ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);  // 和
    printf("%d - %d = %d\n", a, b, a - b);  // 差
    printf("%d * %d = %d\n", a, b, a * b);  // 積
    if (a % b == 0) {
        // 割り切れる場合
        printf("%d / %d = %d, remainder = %d\n", a, b, a / b, a % b);  // 商
    } else {
        // 割り切れない場合
        printf("%d / %d = %d, remainder = %d\n", a, b, a / b,
               a % b);  // 商（小数点以下1桁を表示）
    }
}