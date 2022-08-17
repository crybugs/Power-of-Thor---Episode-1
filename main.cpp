#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();
        int x = light_x-initial_tx;
        int y = light_y-initial_ty;
        while(initial_tx!=light_x&&initial_ty!=light_y){
            if (x>0&&y<0){
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
            else if(x<0&&y<0){
                printf("SE\n");
                x+=1;
                y+=1;
                initial_tx+=1;
                initial_ty-=1;
            }
            else if(x>0&&y>0){
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
        }



        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}