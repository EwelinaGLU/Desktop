/**********************************************************************/
#include "std.h"
#include "megatyp.h"
#include "megacad.h"
/**********************************************************************/
int DrwTxt(
            void *para)
{
    t_text  *txtdata;

    txtdata = para;
    DrawInv(E_TXTLIN,txtdata,LMODE(0,0,0),E_TXTLIN);
    return(0);
}
/**********************************************************************/
short MegaMain(
        char *filename,
        char *args )
{
    t_text  txtdata;
    char    str[255];

    // Funtionstext setzen
    SetFuncText("Text eingeben");

    // den Text eingeben
    if(StringInput("Text eingeben",str,255))
    {
        // den Zeiger f�r den Text zuweisen
        txtdata.str = str;
        // die in MegaCAD eingestellten Textdaten holen
        GetTextVal(E_TXTLIN,TRUE,&txtdata);
        // Funktionstext und Maushilfe setzen
        SetFuncText("Text setzen");
        MouseHelp("Punkt setzen","zur�ck",HLP_INV(0,0,0));
        // jetzt den Einf�gepunkt f�r den Text holen
        // und den Text an die Maus h�ngen
        if(GetPntInv(&txtdata.tx,0,DrwTxt,&txtdata))
        {
            // Element speichern
            CreateEntity(E_TXTLIN,NULL,&txtdata,NULL,NULL);
            // ... und in die UNDO / REDO Liste eintragen
            savecount();
        }
    }
    return(0);
}
/**********************************************************************/
