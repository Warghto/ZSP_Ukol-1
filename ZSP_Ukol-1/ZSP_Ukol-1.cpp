#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void u1_1()
{
    int cena, cenadph, pocet; 
    printf("Zadejte cenu\n");
    scanf("%d", &cena);
    printf("Zadejte pocet kusu\n");
    scanf("%d", &pocet); 
    cenadph = (cena * 20) / 100 + cena ; 
    printf("Uctenka\n");
    printf("Cena bez DPH/ks %d Kc\tCena s DPH/ks %d Kc\n", cena, cenadph);
    printf("Pocet kusu: %d\tCena bez DPH %d Kc\tCena s DPH (20%%) %d Kc\n", pocet, cena * pocet, cenadph * pocet);

}

void u1_2()
{
    const double hranice1 = 2 , hranice2 = 4;
    double strhod;
    int znamky[5];
    
    printf("Zadejte pet znamek postupne\n");
    int input;
    for (int i = 0; i < 5; i++)
    {
        
        scanf("%d", &input);

        if (input >= 1 && input <= 5) {
            znamky[i] = input;
        }
        else {
            printf("Spatna vtupni hodnota, znamka muze byt od 1 az 5\n");
            i--;
        }
    }
   
    int suma = 0;

    for (int i = 0; i < 5; i++)
    {
        suma += znamky[i];
    }


    strhod = suma / 5.0;
    printf("stredni hodnpta: %f\n", strhod);

    if (strhod < 5 && strhod > hranice2)
    {
        printf("Neprospel");
    }
    else if (strhod > hranice1 && strhod < hranice2)
    {
        printf("Prospel"); 
    }
    else
    {
        printf("prospel s vyznamenanim");
    }

    // todo u1-2
}

void u1_3()
{
    //float EUR = 24.9, USD, Kc;






}


int main()
{
    //u1_1();
    u1_2();
    //u1_3();
    return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
