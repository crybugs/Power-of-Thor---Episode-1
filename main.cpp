#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    // the X position of the light of power
    int light_x;
    // the Y position of the light of power
    int light_y;
    // Thor's starting X position
    int initial_tx;
    // Thor's starting Y position
    int initial_ty;
    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);

    // game loop
    while (1) {
        // The remaining amount of turns Thor can move. Do not remove this line.
        int remaining_turns;
        scanf("%d", &remaining_turns);
        int x = light_x-initial_tx;
        int y = light_y-initial_ty;
        fprintf(stderr, "%d %d %d %d\n", initial_ty, initial_tx, light_x, light_y);
        while(initial_tx!=light_x || initial_ty!=light_y){
            if (x>0&&y>0){
                printf("NE\n");
                x-=1;
                y+=1;
                initial_tx+=1;
                initial_ty+=1;
            }
            else if(x<0&&y>0){
                printf("NW\n");
                x+=1;
                y-=1;
                initial_tx-=1;
                initial_ty+=1;
            }
            else if(x>0&&y<0){
                printf("SE\n");
                x+=1;
                y+=1;
                initial_tx+=1;
                initial_ty-=1;
            }
            else if(x<0&&y>0){
                printf("SW\n");
                x-=1;
                y-=1;
                initial_tx-=1;
                initial_ty-=1;
            }
            else if(x>0&&y==0){
                printf("E\n");
                x-=1;
                initial_tx+=1;
            }
            else if(x<0&&y==0){
                printf("W\n");
                x+=1;
                initial_tx-=1;
            }
            else if(x==0&&y<0){
                printf("N\n");
                y+=1;
                initial_ty+=1;
            }
            else if(x==0&&y>0){
                printf("S\n");
                y-=1;
                initial_ty-=1;
            }
            fprintf(stderr, "%d %d\n", initial_ty, initial_tx);
        }
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");


        // A single line providing the move to be made: N NE E SE S SW W or NW
    }

    return 0;
}