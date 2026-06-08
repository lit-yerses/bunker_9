#include <iostream>
#include <windows.h>
#include <tuple>
#define RESET   "\033[0m"
#define RESET   "\033[0m"
#define BLACK   "\033[38;2;0;0;0m"
#define RED     "\033[38;2;255;0;0m"
#define GREEN   "\033[38;2;71;255;221m"
#define YELLOW  "\033[38;2;250;250;0m"
#define BLUE    "\033[38;2;0;100;255m"
#define ORANGE  "\033[38;2;255;85;0m"
#define WHITE   "\033[38;2;255;255;255m"
using namespace std;
struct wall{
    char s=254;
    string c;
};
wall a[20][30];


void vaccuum(){
    for(int w=0; w<20; w++){
        for(int k=0; k<30; k++){
            if(k<30 && w<20){
               a[w][k].c=BLACK;
               a[w][k].s=254;
            }
        }
    }
}


void draw(){
    for(int w=0; w<20; w++){
        for(int k=0; k<30; k++){
            cout << a[w][k].c << a[w][k].s << RESET << " ";
        }
        cout << endl;
    }
}


void clean(){
    COORD coord;
    coord.X = 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void s(int t){
    Sleep(t); //wiem, ooooooogromne ulaywienie
}


void stand(int scg){ //scg -> œrodek czubka glowy
    vaccuum();
    a[2][scg-1].c = a[2][scg].c = a[2][scg+1].c =               //,
    a[3][scg-2].c = a[4][scg-2].c = a[5][scg-2].c =             //-> glowa
    a[3][scg+2].c = a[4][scg+2].c = a[5][scg+2].c =             //'
    a[6][scg-1].c = a[6][scg].c = a[6][scg+1].c = WHITE;        //'

    a[7][scg].c = a[8][scg].c = a[9][scg].c =                   //,
    a[10][scg].c = a[11][scg].c =                               //-> kredoslup
    a[12][scg].c = a[13][scg].c = WHITE;                        //'

    a[8][scg-1].c= a[9][scg-2].c = a[10][scg-2].c =             //-> lewa reka
    a[11][scg-2].c = a[12][scg-2].c = WHITE;                    //'

    a[8][scg+1].c = a[9][scg+2].c = a[10][scg+2].c =            //-> prawa reka
    a[11][scg+2].c = a[12][scg+2].c = WHITE;                    //'

    a[14][scg-1].c = a[15][scg-1].c = a[16][scg-1].c =          //-> lewa noga
    a[17][scg-1].c = a[18][scg-1].c = a[18][scg-2].c = WHITE;   //'

    a[14][scg+1].c = a[15][scg+1].c = a[16][scg+1].c =          //-> prawa noga
    a[17][scg+1].c = a[18][scg+1].c = a[18][scg+2].c = WHITE;   //'

    draw();
}


void turnstat(int scg){
    vaccuum();
    a[2][scg-1].c = a[2][scg].c = a[2][scg+1].c =               //,
    a[3][scg-1].c = a[3][scg].c = a[3][scg+1].c =               //,
    a[4][scg-1].c = a[4][scg].c = a[4][scg+1].c =               //-> glowa
    a[5][scg-1].c = a[5][scg].c = a[5][scg+1].c =               //'
    a[6][scg-1].c = a[6][scg].c = a[6][scg+1].c = WHITE;        //'

    a[7][scg].c = a[8][scg].c = a[9][scg].c =                   //,
    a[10][scg].c = a[11][scg].c =                               //-> kredoslup
    a[12][scg].c = a[13][scg].c = WHITE;                        //'

    a[8][scg-1].c= a[9][scg-2].c =                              //-> lewa reka
    a[10][scg-2].c = a[11][scg-1].c = WHITE;                    //'

    a[8][scg+1].c = a[9][scg+2].c = a[10][scg+2].c =            //-> prawa reka
    a[11][scg+3].c = a[11][scg+4].c = WHITE;                    //'

    a[14][scg-1].c = a[15][scg-1].c = a[16][scg-1].c =          //-> lewa noga
    a[17][scg-1].c = a[18][scg-1].c = a[18][scg].c = WHITE;     //'

    a[14][scg+1].c = a[15][scg+1].c = a[16][scg+1].c =          //-> prawa noga
    a[17][scg+1].c = a[18][scg+1].c = a[18][scg+2].c = WHITE;   //'

    draw();
}


void a1(int scg){
    vaccuum();
    a[2][scg-1].c = a[2][scg].c = a[2][scg+1].c =               //,
    a[3][scg-1].c = a[3][scg].c = a[3][scg+1].c =               //,
    a[4][scg-1].c = a[4][scg].c = a[4][scg+1].c =               //-> glowa
    a[5][scg-1].c = a[5][scg].c = a[5][scg+1].c =               //'
    a[6][scg-1].c = a[6][scg].c = a[6][scg+1].c = WHITE;        //'

    a[7][scg].c = a[8][scg].c = a[9][scg].c =                   //,
    a[10][scg].c = a[11][scg].c =                               //-> kredoslup
    a[12][scg].c = a[13][scg].c = WHITE;                        //'

    a[8][scg-1].c= a[9][scg-2].c = a[12][scg-2].c =             //-> lewa reka
    a[10][scg-3].c = a[11][scg-3].c = WHITE;                    //'

    a[8][scg+1].c = a[9][scg+2].c = a[10][scg+3].c =            //-> prawa reka
    a[10][scg+4].c = a[9][scg+5].c = WHITE;                    //'

    a[14][scg-1].c = a[15][scg-1].c = a[16][scg-1].c =          //-> lewa noga
    a[17][scg-1].c = a[18][scg-1].c = a[18][scg].c = WHITE;     //'

    a[14][scg+1].c = a[15][scg+1].c = a[16][scg+2].c =          //-> prawa noga
    a[17][scg+2].c = a[17][scg+3].c = WHITE;                    //'

    draw();
}


void a2(int scg){
    vaccuum();
    a[2][scg-1].c = a[2][scg].c = a[2][scg+1].c =               //,
    a[3][scg-1].c = a[3][scg].c = a[3][scg+1].c =               //,
    a[4][scg-1].c = a[4][scg].c = a[4][scg+1].c =               //-> glowa
    a[5][scg-1].c = a[5][scg].c = a[5][scg+1].c =               //'
    a[6][scg-1].c = a[6][scg].c = a[6][scg+1].c = WHITE;        //'

    a[7][scg].c = a[8][scg].c = a[9][scg].c =                   //,
    a[10][scg].c = a[11][scg].c =                               //-> kredoslup
    a[12][scg].c = a[13][scg].c = WHITE;                        //'

    a[8][scg-1].c= a[9][scg-2].c = a[12][scg-2].c =             //-> lewa reka
    a[10][scg-3].c = a[11][scg-3].c = WHITE;                    //'

    a[8][scg+1].c = a[9][scg+2].c = a[10][scg+3].c =            //-> prawa reka
    a[10][scg+4].c = a[9][scg+5].c = WHITE;                    //'

    a[14][scg-1].c = a[15][scg-1].c = a[16][scg-2].c =          //-> lewa noga
    a[17][scg-2].c = a[18][scg-2].c = a[18][scg-1].c = WHITE;     //'

    a[14][scg+1].c = a[15][scg+1].c = a[16][scg+1].c =          //-> prawa noga
    a[17][scg+1].c = a[18][scg+1].c = a[18][scg+2].c = WHITE;   //'

    draw();
}


void a3(int scg){
    vaccuum();
    a[2][scg-1].c = a[2][scg].c = a[2][scg+1].c =               //,
    a[3][scg-1].c = a[3][scg].c = a[3][scg+1].c =               //,
    a[4][scg-1].c = a[4][scg].c = a[4][scg+1].c =               //-> glowa
    a[5][scg-1].c = a[5][scg].c = a[5][scg+1].c =               //'
    a[6][scg-1].c = a[6][scg].c = a[6][scg+1].c = WHITE;        //'

    a[7][scg].c = a[8][scg].c = a[9][scg].c =                   //,
    a[10][scg].c = a[11][scg].c =                               //-> kredoslup
    a[12][scg].c = a[13][scg].c = WHITE;                        //'

    a[8][scg-1].c= a[9][scg-2].c = a[12][scg-2].c =             //-> lewa reka
    a[10][scg-3].c = a[11][scg-3].c = WHITE;                    //'

    a[8][scg+1].c = a[9][scg+2].c = a[10][scg+3].c =            //-> prawa reka
    a[10][scg+4].c = a[9][scg+5].c = WHITE;                    //'

    a[14][scg-1].c = a[15][scg-1].c = a[16][scg-1].c =          //-> lewa noga
    a[16][scg-2].c = a[16][scg-3].c = a[17][scg-3].c = WHITE;     //'

    a[14][scg+1].c = a[15][scg+1].c = a[16][scg+1].c =          //-> prawa noga
    a[17][scg+1].c = a[18][scg+1].c = a[18][scg+2].c = WHITE;   //'

    draw();
}


void a4(int scg){
    vaccuum();
    a[2][scg-1].c = a[2][scg].c = a[2][scg+1].c =               //,
    a[3][scg-1].c = a[3][scg].c = a[3][scg+1].c =               //,
    a[4][scg-1].c = a[4][scg].c = a[4][scg+1].c =               //-> glowa
    a[5][scg-1].c = a[5][scg].c = a[5][scg+1].c =               //'
    a[6][scg-1].c = a[6][scg].c = a[6][scg+1].c = WHITE;        //'

    a[7][scg].c = a[8][scg].c = a[9][scg].c =                   //,
    a[10][scg].c = a[11][scg].c =                               //-> kredoslup
    a[12][scg].c = a[13][scg].c = WHITE;                        //'

    a[8][scg-1].c= a[9][scg-2].c = a[12][scg-2].c =             //-> lewa reka
    a[10][scg-3].c = a[11][scg-3].c = WHITE;                    //'

    a[8][scg+1].c = a[9][scg+2].c = a[10][scg+3].c =            //-> prawa reka
    a[10][scg+4].c = a[9][scg+5].c = WHITE;                    //'

    a[14][scg-1].c = a[15][scg].c = a[16][scg+1].c =          //-> lewa noga
    a[16][scg+2].c = a[16][scg+3].c = a[15][scg+3].c = WHITE;     //'

    a[14][scg+1].c = a[15][scg+1].c = a[16][scg+1].c =          //-> prawa noga
    a[17][scg+1].c = a[18][scg+1].c = a[18][scg+2].c = WHITE;   //'

    draw();
}


void walk(int scg){
    s(300);
    clean();
    turnstat(scg);
    s(300);
    clean();
    a1(scg);
    s(300);
    clean();
    a2(scg+1);
    s(300);
    clean();
    a3(scg+1);
    s(300);
    clean();
    a4(scg+1);
    s(300);
    clean();
    turnstat(scg+2);
}



int main()
{
    for(int w=0; w<20; w++){
        for(int k=0; k<30; k++){
            if(k<30 && w<20){
               a[w][k].c=BLACK;
               a[w][k].s=254;
            }
        }
    }
    stand(4);
    walk(4);
}
