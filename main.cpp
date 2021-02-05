#include <iostream>
#include <fstream>
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	
	
	
	
	
	
	
	
	
	
	
	
	fstream plik;  
	
			vector <int> ciag;
			vector <int> ciag_p;
			int liczba=0;
			int poprzednia=0;
			int roznica=0;
			int dlugosc=1;
			int dlugosc_v=0;
			plik.open("liczby2.txt", ios::in); 
			if(plik.good()) 
			while(!plik.eof()) 
			      {
			  	
					plik>>liczba;
					if(poprzednia==0)
					{
						poprzednia=liczba;
					}
					else
					{
						roznica=poprzednia-liczba;
					}
					
					if(roznica<=0)
					{
						
						dlugosc++;
						ciag_p.push_back(poprzednia);
					}
					else
					{
						dlugosc=1;
					}
					if(dlugosc==1)
					{
						ciag_p.clear(); 
					}
					else
					{
						
						if(dlugosc>=dlugosc_v)
						{
						dlugosc_v=dlugosc;
						ciag.clear();
							for(int i = 0; i < ciag_p.size(); i++ )
							{
								ciag.push_back(ciag_p[i]);
							}
						}
						else
						{
					
						}
					}
				
				poprzednia=liczba;

			   }
			     plik.close(); 
			  		
	
								cout<<ciag[0]<<endl;
								cout<<dlugosc_v;
						
			   
	
	
	return 0;
}
