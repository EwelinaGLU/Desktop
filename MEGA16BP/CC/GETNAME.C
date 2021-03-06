/**********************************************************************/
#include "std.h"
#include "megatyp.h"
#include "megacad.h"
/**********************************************************************/
short MegaMain(
        char *filename,
        char *args )
{
    char fname[200];
    char buf[200];

    // fname initialisieren
    strcpy(fname,".\\PRT\\*.PRT");
    // Datei ausw�hlen
    if(GetFilename("Datei ausw�hlen",fname))
    {
        // Kommandostring zusammenstellen
        sprintf(buf,"%s%s","PrtLoad ",fname);
        // MegaCAD Kommando ausf�hren
        MegaCMD(buf);
    }
    return(0);
}
/**********************************************************************/
