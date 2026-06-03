#include <iostream>
#include <windows.h>
#define r        "\033[0m"
#define BLACK    "\033[30m"
#define RED      "\033[38;2;222;4;0m"
#define GREEN    "\033[38;2;0;222;0m"
#define YELLOW   "\033[38;2;222;222;0m"
#define BLUE     "\033[38;2;0;185;222m"
#define ORANGE   "\033[38;2;222;135;0m"
#define dBLUE    "\033[38;2;0;0;255m"
#define PURPLE   "\033[38;2;180;0;255m"
#define KARRY    "\033[38;2;225;218;163m"
#define GRAY     "\033[38;2;220;220;220m"
#define ZURAWINA "\033[38;2;219;92;139m"
#define WHITE    "\033[38;2;255;255;255m"
using namespace std;
void tw(string color, string text, int delay = 25){
    for(int i=0; text[i]; i++){
        cout << color << text[i] << flush;
        Sleep(delay);
    }
}
int main()
{
    int a;
    tw(r,"Uszanowanie!");
    Sleep(1500);
    tw(r,"\nPiszesz projekt na informatyke?");
    Sleep(750);
    tw(r," Coz za zbieg okolicznosci, ze akurat mam cos, co moze Cie zainteresowac!");
    Sleep(1000);
    tw(r,"\nPragne przedstawic Ci kurs, po ktorym pisanie ");
    tw(GREEN,"w roznych ");
    tw(ORANGE,"kolorach nie ");
    tw(BLUE,"bedzie problem");
    tw(r," :]");
    Sleep(1500);
    tw(r,"\nSpojrz na chwilke w kod tego programu, na sama gore. Cos sie troche nie zgadza, nieprawdasz?\n");
    cin >> a;
    tw(r,"Kto to widzial, ");
    tw(GREEN,"#define");
    tw(r,", jakas czarna magia");
    Sleep(1000);
    tw(r,"\nWlasnie ta czarna magia bedziemy sie poslugiwac i dokladnie wytlumacze Ci jak");
    Sleep(1250);
    tw(YELLOW,"\n   ~ ~ ~ KURS CZAS ZACZAC! ~ ~ ~");
    Sleep(1500);
    tw(r,"\nNajpierw wyjasnimy sobie, jak kolory sa zdefiniowane w tym kodzie.");
    Sleep(250);
    tw(r," Mozemy podzielic je na 3 elementy:");
    Sleep(500);
    cout << GREEN << "\n#define";
    Sleep(500);
    tw(r," - komenda definicji coska (nieduze/znikome zaskoczenie)");
    Sleep(1000);
    cout << GREEN << "\nCOLOR";
    Sleep(500);
    tw(r," - cosiek");
    Sleep(1000);
    cout << GREEN << "\n\\033[38;2;R;G;Bm";
    Sleep(500);
    tw(r," - definicja coska");
    Sleep(300);
    tw(r,"\nOkej STOP");
    tw(r,". . .", 500);
    tw(r,"\nCo to w ogole jest...?");
    Sleep(1500);
    tw(r," Ehh, rozbijanie na czynniki pierwsze v2:");
    Sleep(500);
    cout << KARRY << "\n\\033";
    Sleep(500);
    tw(r," - informuje, ze nastepne elementy to komenda sterujaca, a nie zwykly tekst");
    Sleep(1000);
    cout << KARRY << "\n[";
    Sleep(500);
    tw(r," - rozpoczecie sekwecji sterujacej");
    Sleep(1000);
    cout << KARRY << "\n38";
    Sleep(500);
    tw(r," - informuje, ze manewrujemy na kolorach czcionki (np. 48 to zmiana koloru tla)");
    Sleep(1000);
    cout << KARRY << "\n2";
    Sleep(500);
    tw(r," - informuje, ze bedziemy opisywac kolory przez RGB");
    Sleep(1000);
    cout << KARRY << "\nR";
    Sleep(200);
    tw(RED," - red");
    Sleep(300);
    cout << KARRY << "\nG";
    Sleep(200);
    tw(GREEN," - green");
    Sleep(300);
    cout << KARRY << "\nB";
    Sleep(200);
    tw(BLUE," - blue");
    Sleep(300);
    cout << KARRY<< "\nm";
    Sleep(500);
    tw(r," - koniec, good job");
    Sleep(1000);
    tw(KARRY,"\n(no i oczywiscie duzo srednikow + wszystko ladnie w cudzyslowie)");
    Sleep(1500);
    tw(r,"\nNie takie straszne.");
    Sleep(250);
    tw(r," Wspanialym elementem tego sposobu jest to, ze mozna nim zdefiniowac DOWONLY KOLOR");
    Sleep(750);
    tw(r,"\nTAK, Uzytkowniku, mozesz wypisac co chcesz w DOWOLNYM KOLORZE");
    Sleep(400);
    tw(WHITE,"\n  Ale jak, ale jak?");
    Sleep(350);
    tw(r,"\nJuz odpowiadam!");
    Sleep(1000);
    tw(r,"\nWystarczy, ze wejdziesz na dowolna strone z kolem barw (polecam CERAMES), wybierzesz jakis kolor, i w miejsce R, G oraz B w kodzie wpiszesz dane, ktore Ci sie wyswietlaja");
    Sleep(1500);
    tw(ZURAWINA,"\nTen kolor dla przykladu to -RGB(219, 92, 139)-, czyli zdefiniujemy go jako -#define ZURAWINA \"\\033[38;2;219;92;139m\"-");
    Sleep(1000);
    tw(r,"\nDobra, zdefiniowalismy sobie ladny kolor, teraz jak go uzyc?");
    Sleep(1000);
    tw(GREEN,"\n    cout     ");
    tw(RED, "    <<     ");
    tw(r,"    ZURAWINA     ");
    tw(RED, "    <<     ");
    tw(BLUE,"    \"placki\"    ");
    tw(RED,";");
    Sleep(300);
    tw(r,"\nPiszemy nasza formulke...");
    Sleep(200);
    tw(r," NAJPIERW barwimy wode...");
    Sleep(200);
    tw(r," potem zatapiamy literki...");
    Sleep(200);
    cout << ZURAWINA << "\nplacki";
    Sleep(500);
    tw(r,"\nEt voila!");
    Sleep(1000);
    tw(r,"\nWarto dodac, ze woda jest caly czas zabarwiona. Jesli nie zmienimy jej koloru, to wczystko, co bedziemy potem \npisac, bedzie w ostatnim podanym kolorze");
    Sleep(1000);
    tw(r,"\nTu na ratunek wchodzi ReSeT, czyli -#define reset \"\\033[0m\"-, ktorego mozna uzyc gdziekolwiek");
    Sleep(1000);
    tw(YELLOW,"\n   ~ ~ ~ KONIEC KURSU! ~ ~ ~");
    Sleep(1500);
    tw(r,"\nTo by bylo na tyle. Dziekuje za uwage i dobranoc.");
}
