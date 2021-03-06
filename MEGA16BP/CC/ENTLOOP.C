/**********************************************************************/
#include "std.h"
#include "megatyp.h"
#include "megacad.h"
#define MAXPIDS 500
/**********************************************************************/
char edta[32000];// Puffer f�r variable Daten
ulong pids[MAXPIDS]; // Platz f�r 500 Element ID's
ushort pidnum;  // Z�hler f�r die Anzahl der Elemet ID's
/**********************************************************************/
short SelPid(
        void *argptr )
{
    t_entity  *ent;

    ent = argptr;
    if(ent->attr.col == GREEN)
    {
        pids[pidnum] = ent->id;
        pidnum++;
    }
    if(pidnum == MAXPIDS)
        return(BREAK_LOOP);
    else
        return(CONTINUE_LOOP);
}
/**********************************************************************/
short DoDraw(
        void *ptr )
{
    DrawEntities(pids,pidnum);
}
/**********************************************************************/
short MegaMain(
        char *filename,
        char *args )
{
    t_entity ent;
    ulong    filter;
    t_mat44  ecs;

    // Anzahl auf 0 vorinitialisieren
    pidnum = 0;
    SetFuncText("Farbe invertieren");
    MouseHelp("Element w�hlen","zur�ck",HLP_INV(0,0,0));
    // Selektionskriterium -> alle Elemente erlaubt
    filter = 0xffffffff;
    // Schleife �ber alle Elemente
    EntityLoop(filter,filter,SelPid,&ent,edta,sizeof(edta),&ecs);
    // alle Elemente, deren ID jetzt in pids steht, blinken
    Blink(DoDraw,NULL);
    return(0);
}
/**********************************************************************/
