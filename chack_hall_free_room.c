#include <stdio.h>

int main()
{
    int totalCell, freeCell;
    scanf("%d", &totalCell);
    freeCell = 0;
    while (totalCell > 0)
    {
        int students, room_capacity;
        scanf("%d %d", &students, &room_capacity);
        int reqAmount = students + 2;
        if (reqAmount <= room_capacity)
        {
            freeCell++;
        };
        totalCell--;
    };
    printf("%d\n", freeCell);
    return 0;
}
/*
    Abu and Babu are close friends. Recently they both got admitted into the same university. Now they want to live in the university halls.

    They want to live in the same room. There are n rooms in the hall. At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). Your task is to count how many rooms has free place for both Abu and Babu.

Input
    The first line contains a single integer n (1 ≤ n ≤ 100) — the number of rooms.
    The i-th of the next n lines contains two integers pi and qi (0 ≤ pi ≤ qi ≤ 100) — the number of people who already live in the i-th room and the room's capacity.
Output
    Print a single integer — the number of rooms where both friends can move in.
*/