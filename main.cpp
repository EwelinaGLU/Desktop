#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{
    int *i_adr= new int;
    double *r_adr=new double[10];
    string *txt_adr=new string;
    
    *i_adr=0;
    *r_adr=0;
    *txt_adr="ABC";
    
    cout<<"pod adresem "<<i_adr<<" jest" <<*i_adr<<endl;
    cout<<"pod adresem "<<r_adr<<" jest" <<*r_adr<<endl;
    cout<<"pod adresem "<<txt_adr<<" jest" <<*txt_adr<<endl;
    
    delete i_adr;
    delete[]r_adr;
    delete txt_adr;
    
    cout<<endl<<endl;
    
    /*--------------------------------------------------------------------*/
    int i=5;
    double pi;
    string txt;
    
    cout<<"zmienna i znajduje sie pod adresem "<<&i<<endl;
    cout<<"zmienna pi znajduje sie pod adresem "<<&pi<<endl;
    cout<<"zmienna txt znajduje sie pod adresem "<<&txt<<endl;
    
      
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
