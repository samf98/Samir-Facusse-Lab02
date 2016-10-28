#include <iostream>

using namespace std;

void Domingos();

int main()
{
	
	int op;
	do
	{
		cout<<"1 - Domingos"<<endl<<"2 - División Sintética"<<endl<<"3 - Permutaciones"<<endl;
		cin >> op;
		switch(op)
		{
			case 1:
			{
				Domingos();
				break;
			}
			case 2:
			{
				
				break;
			}
			case 3:
			{
				
				break;
			}
		}
	}while(op<4&&op>0);
	return 0;
}

void Domingos()
{
	int dia_semana = 2;
	int domingos = 0;
	int bisiesto = 3;
	int dias_mes = 0;
	for(int year = 1900; year <= 2000; year++)
	{
		if(year%4==0)
			bisiesto = 4;
		else
			bisiesto = 0;

		for(int mes = 1; mes <= 12; mes++)
		{
			if(mes==4||mes==6||mes==9||mes==11)
				dias_mes = 30;

			if(mes==2)
			{
				if(bisiesto==4)
					dias_mes = 29;
				else
					dias_mes = 28;
			}

			if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
				dias_mes == 31;

			for(int dia = 1; dia <= dias_mes; dia++)
			{
				if(dia == 1&&dia_semana == 1)
                                        domingos++;

				if(dia_semana==7)
					dia_semana==1;
				else
					dia_semana++;
			}
		}
	}
	cout<<"BAM "<<domingos<<endl;
}
