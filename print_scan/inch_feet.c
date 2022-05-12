#include <stdio.h>

int main()
{
    //     একটা প্র োগ্রাম লি খ যে টা ত োমার উচ্চতা ইনপুট নি বে ইঞ্চি তে , তারপর সে টাকে ফুট আর ইঞ্চি
    // ফরম্যাট এ আউটপুট দি বে ।
    double inch;
    int feet;
    int reminder;
    printf("Enter height in inches: ");
    scanf("%lf", &inch);
    feet = inch / 12;
    reminder = (int)inch % 12;
    printf("Your height is %d feet %d inches\n ", feet, reminder);
    // printf("%d\n", x / y); // 4/2 => 2
    return 0;
}