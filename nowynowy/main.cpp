#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main(int argc, char *argv[])

/*
{
    //wskazniki
    
    
int *i_adr, *j_adr, i, j;
double *r_adr;
string *txt_adr;
char c;    
    
    cout << "pod adresem " << i_adr << " jest " << *i_adr << endl;
        cout << "pod adresem " << j_adr << " jest " << *j_adr << endl;
            cout << "pod adresem " << r_adr << " jest " << *r_adr << endl;
              /*  cout << "pod adresem " << txt_adr << " jest " << *txt_adr << endl;
              ta linia dzia³a ale wyrzuca program */
    
    

    /*
{    
 
 int *i_adr = new int;                                  //zajmuje nowa komorke
 double *r_adr = new double[10];
 string *txt_adr = new string;
 *i_adr = 0;
 *r_adr = 0;
 *txt_adr = "abc";
 
        cout << "pod adresem " << i_adr << " jest " << *i_adr << endl;
             cout << "pod adresem " << r_adr << " jest " << *r_adr << endl;
                  cout << "pod adresem " << txt_adr << " jest " << *txt_adr << endl;
 
 delete i_adr;                           //kasujemy wszystkie bajty pamieci
 delete [] r_adr;                      // [] wyrzuca ca³a tablice
 delete txt_adr;
    
    */
    
    /*
 {   
    
                                      //szuka gdzie jest zmienna    
 int i=5;
 double pi;
 string txt; 
    
  cout << "zmienna i znajduje sie pod adresem " << &i << endl;
    cout << "zmienna pi znajduje sie pod adresem " << &pi << endl;
      cout << "zmienna txt znajduje sie pod adresem " << &txt << endl;
  
  */
  
  //równanie liniowe
  /*
{  
  
    double a, b, x;
      cout << "podaj a ";
        cin >> a ;
           cout << "podaj b ";
             cin >> b ;
               

                if (a !=0)
                 {
                       x=-b/a;
       
        cout << "x wynosi " << x << endl;
        }
          else
          {
           if (b==0)
            {cout << "jest nieskoñczenie wiele rozwi¹zañ " << endl;
            }
             else
                {
                   cout << "równanie sprzeczne " << endl;
                   }  
                   } 
                   
                 */
                 
                 
                 //rownanie kwadratowe
                 
                 /*
                 
       {          
            double a, b, c, d, x, x1, x2;
      cout << "podaj a ";
        cin >> a ;
           cout << "podaj b ";
             cin >> b ;       
              cout << "podaj c ";
                cin >> c ;     
                   
         if (a==0)
         {
              cout << "to jest rownanie liniowe!!!" << endl;
              
              if (b !=0)
                 {
                       x=-c/b;
       
        cout << "x wynosi " << x << endl;
        }
          else
          {
           if (c==0)
            {cout << "jest nieskoñczenie wiele rozwi¹zañ " << endl;
            }
             else
                {
                   cout << "równanie sprzeczne " << endl;
                   }  
                   } 
                     
              
              }
              else
              {
               d=b*b-4*a*c;
               cout << "delta wynosi " << d << endl;
               
               }
                if (d<0)
                {
                    cout << "rownanie nie ma pierwiastkow po stronie liczb rzeczywistych" << endl;      
                    }
                    else
                    {
                        if (d==0)
                        {
                                 x=-b/2*a;
                             cout << "x wynosi " << x << endl;    
                             }
                             else
                             {
                                 x1=(-b-sqrt(d))/2*a;
                                 x2=(-b+sqrt(d))/2*a;
                                 
                                cout << "x1 wynosi " << x1 << endl;    
                                 cout << "x2 wynosi " << x2 << endl;  
                  
                  }
                  }
         
         
         
         */
         
         //rownanie kwadratowe ze zmienna pomocnicza//
         
         
         {
         
         double a, b, c, d, x, x1, x2, x3, x4, pom;
      cout << "podaj a ";
        cin >> a ;
           cout << "podaj b ";
             cin >> b ;       
              cout << "podaj c ";
                cin >> c ;     
                   
         if (a==0)
         {
              cout << "to jest rownanie liniowe!!!" << endl;
                 
              if (b !=0)
                 {
                       x=-c/b;
       
        cout << "x wynosi " << x << endl;
        }
          else
          {
           if (c==0)
            {cout << "jest nieskoñczenie wiele rozwi¹zañ " << endl;
            }
             else
                {
                   cout << "równanie sprzeczne " << endl;
                   }  
                   } 
                     
              
              }
              else
              {
               d=b*b-4*a*c;
               cout << "delta wynosi " << d << endl;
               
               }
                if (d<0)
                {
                    cout << "rownanie nie ma pierwiastkow po stronie liczb rzeczywistych" << endl;      
                    }
                    else
                    {
                        if (d==0)
                        {
                                 x=-b/2*a;
                             cout << "x wynosi " << x << endl;    
                             }
                             else
                             
                             {
                                 x1=(-b-sqrt(d))/2*a;
                                 x2=(-b+sqrt(d))/2*a;
                                 
                                cout << "x1 wynosi " << x1 << endl;    
                                 cout << "x2 wynosi " << x2 << endl;  
                  
                                 {
                                 pom=c/a;
                                 
                                        if   (b>0)
                                        
                                        {
                                 x3=(-b-sqrt(d))/2*a;
                                 x4=pom/x3;
                                         }  else
                                         
                                         
                                 x4=(-b+sqrt(d))/2*a;
                                 x3=pom/x4;
                                 
                                 
                                 
                                cout << "x3 wynosi " << x3 << endl;    
                                 cout << "x4 wynosi " << x4 << endl;  
                                 }
                                 }
                  }
         
         
         
         //deklarowanie obiektów deklaracja klasy klasa musi byc zakonczona srednmikiem
                        //doda³em string include
         
         
         /*
         {
         
         class Kot                                //powinno byc przed int
         {
               private:
               public:
                  string imie;
                  int    wiek;            
               
               
               };
         
         Kot Mruczek, ObceKoty[1000];
         Mruczek.imie="Mruczek";
         Mruczek.wiek=3;
         
         for (int i=0; i<1000; i++)
         {
         ObceKoty[i].imie="Nieznany Kocur";
         ObceKoty[i].wiek=5;
         }
         
         cout <<"Imie " << Mruczek.imie << ",wiek " << Mruczek.wiek << endl << endl;
              cout <<"Imie kota 123 " << ObceKoty[123].imie << ",wiek kota 357 " << ObceKoty[357].wiek << endl << endl;
         
                   */
                   
                   
                   
                   /*
            {
                   
                   class LiczbaZespolona
                   {
                         private:
                               
                         public:
                            double re, im;
                            void wypisz(void);
                            double modul(void);       
                            };
                            
                            
                   LiczbaZespolona z;
                   z.re=5;
                   z.im=10;
                   
                   cout << "Modul liczby zespolonej " << z.wypisz() << "wynosi  ";
                   
                   void LiczbaZespolona :: wypisz(void)
                   {
                        cout << re << "+" << im << "i" << endl;
                    }
            
                   
                   
                   // praca domowa zrobic sume liczb zespolonych
                   
                   
                   */
                   
                   
                   
    system("PAUSE");
    return 0;

}
