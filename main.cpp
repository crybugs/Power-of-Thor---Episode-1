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
    int x = light_x-initial_tx;
    int y = light_y-initial_ty;
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();
        while(initial_tx!=light_x&&initial_ty!=light_y){
            if (x>0&&y<0){
                printf("NE");
                x-=1;
                y+=1;
                initial_tx+=1;
                initial_ty+=1;
            }
            else if(x<0&&y>0){
                printf("NW");
                x+=1;
                y-=1;
                initial_tx-=1;
                initial_ty+=1;
            }
            else if(x<0&&y<0){
                printf("SE");
                x+=1;
                y+=1;
                initial_tx+=1;
                initial_ty-=1;
            }
            else if(x>0&&y>0){
                printf("SW");
                x-=1;
                y-=1;
                initial_tx-=1;
                initial_ty-=1;
            }
            else if(x>0&&y==0){
                printf("E");
                x-=1;
                initial_tx+=1;
            }
            else if(x<0&&y==0){
                printf("W");
                x+=1;
                initial_tx-=1;
            }
            else if(x==0&&y<0){
                printf("N");
                y+=1;
                initial_ty+=1;
            }
            else if(x==0&&y>0){
                printf("S");
                y-=1;
                initial_ty-=1;
            }
        }



        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << "SE" << endl;
    }
}