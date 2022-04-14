#include <stdio.h>
// In a grid there are HH rows and WW columns of cells. All cells are white initially.

// Alex picks some hh rows and ww columns. Then all cells that are in these rows or columns are colored black.

// How many cells will remain white?
int main()
{
    int H, W, h, w, totalCell, touchedCell;
    scanf("%d %d", &H, &W);
    scanf("%d %d", &h, &w);
    totalCell = H * W;
    touchedCell = (h * W + w * H) - h * w;
    // touche Cell = w*H; 1
    printf("%d\n", totalCell - touchedCell);
    return 0;
}