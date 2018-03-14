#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int i,j;
    int m[4][5];
    
    for ( i = 0; i<4; i++)
        for (j=0; j<5; j++)
        m[i,j] = i*j;
  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
