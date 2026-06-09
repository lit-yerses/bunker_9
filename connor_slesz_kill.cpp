#include <iostream>
#include <windows.h>
#include <string>
#include <shellapi.h>
#define RESET   "\033[0m"
#define BLACK   "\033[38;2;0;0;0m"
#define WHITE   "\033[38;2;255;255;255m"
using namespace std;
struct wall{
    char s=254;
    string c;
};
wall a[20][30];


void tw(string color, string text, int delay = 25){
    for(int i=0; text[i]; i++){
        cout << color << text[i] << flush;
        Sleep(delay);
    }
}


void vaccuum(int wiersze){
    for(int w=0; w<wiersze; w++){
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


void stand(int scg){ //scg -> srodek czubka glowy
    vaccuum(20);
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
    vaccuum(20);
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
    vaccuum(20);
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
    vaccuum(20);
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
    vaccuum(20);
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
    vaccuum(20);
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


void walk(int scg, int n){
    int sos=200;
    for(int i=0; i<n; i++){
    s(sos);
    clean();
    turnstat(scg);
    s(sos);
    clean();
    a1(scg);
    s(sos);
    clean();
    a2(scg+1);
    s(sos);
    clean();
    a3(scg+1);
    s(sos);
    clean();
    a4(scg+1);
    scg=scg+2;
    }
}


void head(int scg){
    vaccuum(7);
    a[2][scg-1].c = a[2][scg].c = a[2][scg+1].c =               //,
    a[3][scg-2].c = a[4][scg-2].c = a[5][scg-2].c =             //-> glowa
    a[3][scg+2].c = a[4][scg+2].c = a[5][scg+2].c =             //'
    a[6][scg-1].c = a[6][scg].c = a[6][scg+1].c = WHITE;        //'

    draw();
}


void headd(int scg){
    vaccuum(7);
    a[2][scg-1].c = a[2][scg].c = a[2][scg+1].c =               //,
    a[3][scg-1].c = a[3][scg].c = a[3][scg+1].c =               //,
    a[4][scg-1].c = a[4][scg].c = a[4][scg+1].c =               //-> glowa
    a[5][scg-1].c = a[5][scg].c = a[5][scg+1].c =               //'
    a[6][scg-1].c = a[6][scg].c = a[6][scg+1].c = WHITE;        //'

    draw();
}



int main()
{
    for(int w=0; w<20; w++){      //anneceseri
        for(int k=0; k<30; k++){
            if(k<30 && w<20){
               a[w][k].c=BLACK;
               a[w][k].s=254;
            }
        }
    }
    stand(4);
    walk(4,1);
    clean();
    head(5);
    tw(WHITE,"hello",50);
    s(300);
    clean();
    headd(5);
    s(1000);
    clean();
    turnstat(6);
    s(1000);
    clean();
    head(6);
    cout << endl;
    tw(WHITE, "what r u waitin for...?",50);

    int sekundy;

    std::cout << "Podaj sekunde, od ktorej zaczac film: ";
    std::cin >> sekundy;

    std::string link = "https://youtube.com" + std::to_string(sekundy);

    ShellExecute(0, "open", link.c_str(), NULL, NULL, SW_SHOWNORMAL);

    return 0;

}
