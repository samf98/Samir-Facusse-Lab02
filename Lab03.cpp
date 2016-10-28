#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Domingos();

void DivisionSint();

void Permutaciones(int);

int main()
{
	int numero;
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
				cout<<"Ingrese el número: ";
				cin>> numero;
				Permutaciones(numero);
				break;
			}
		}
	}while(op<4&&op>0);
	return 0;
}

void Domingos()
{
	int dia_semana = 2;
	int domingos = -1;
	int bisiesto = 3;
	int dias_mes = 0;
	for(int year = 1900; year < 2000; year++)
	{
		//Validando si es bisiesto
		if(year%4==0)
			bisiesto = 4;
		else
			bisiesto = 0;
		
		//For de meses
		for(int mes = 1; mes <= 12; mes++)
		{
			//Validando meses
			if(mes==4||mes==6||mes==9||mes==11)
				dias_mes = 30;

			if(mes==2)
				dias_mes=28;

			if(mes==2&&bisiesto==4)
				dias_mes=29;

			if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
				dias_mes == 31;

			//For de días
			for(int dia = 1; dia <= dias_mes; dia++)
			{
				//Validando si el primer día del mes es domingo
				if(dia == 1&&dia_semana == 1)
                                        domingos++;

				//Validando si la semana terminó
				if(dia_semana==7)
					dia_semana=1;
				else
					dia_semana++;
			}
		}
	}
	cout<<"BAM "<<domingos<<endl;
}

void DivisionSintetica()
{
	int size;
	cout<<"Grado del polinomio: ";
	cin>>size;
	
}

void Permutaciones(int numero)
{
	stringstream ss;
	ss << numero;
	string numeros = ss.str();

	if(numeros.size() == 1)
	{
		cout<<numeros[0]<<endl;
	}
	else if(numeros.size() == 2)
	{
		cout<<numeros[0]<<numeros[1]<<endl;
		cout<<numeros[1]<<numeros[0]<<endl;
	}
	else if(numeros.size() == 3)
	{
		cout<<numeros[0]<<numeros[1]<<numeros[2]<<endl;
		cout<<numeros[0]<<numeros[2]<<numeros[1]<<endl;
		cout<<numeros[1]<<numeros[0]<<numeros[2]<<endl;
		cout<<numeros[1]<<numeros[2]<<numeros[0]<<endl;
		cout<<numeros[2]<<numeros[0]<<numeros[1]<<endl;
		cout<<numeros[2]<<numeros[1]<<numeros[0]<<endl;
	}
	else if(numeros.size() == 4)
	{
		cout<<numeros[0]<<numeros[1]<<numeros[2]<<numeros[3]<<endl;
		cout<<numeros[0]<<numeros[1]<<numeros[3]<<numeros[2]<<endl;
		cout<<numeros[0]<<numeros[2]<<numeros[1]<<numeros[3]<<endl;
		cout<<numeros[0]<<numeros[2]<<numeros[3]<<numeros[1]<<endl;
		cout<<numeros[0]<<numeros[3]<<numeros[1]<<numeros[2]<<endl;
		cout<<numeros[0]<<numeros[3]<<numeros[2]<<numeros[1]<<endl;
		cout<<numeros[1]<<numeros[2]<<numeros[0]<<numeros[3]<<endl;
                cout<<numeros[1]<<numeros[2]<<numeros[3]<<numeros[0]<<endl;
                cout<<numeros[1]<<numeros[0]<<numeros[3]<<numeros[2]<<endl;
                cout<<numeros[1]<<numeros[0]<<numeros[2]<<numeros[3]<<endl;
                cout<<numeros[1]<<numeros[3]<<numeros[0]<<numeros[2]<<endl;
                cout<<numeros[1]<<numeros[3]<<numeros[2]<<numeros[0]<<endl;
		cout<<numeros[2]<<numeros[1]<<numeros[3]<<numeros[0]<<endl;
                cout<<numeros[2]<<numeros[1]<<numeros[0]<<numeros[3]<<endl;
                cout<<numeros[2]<<numeros[2]<<numeros[2]<<numeros[0]<<endl;
                cout<<numeros[2]<<numeros[2]<<numeros[0]<<numeros[2]<<endl;
                cout<<numeros[2]<<numeros[3]<<numeros[1]<<numeros[2]<<endl;
                cout<<numeros[2]<<numeros[3]<<numeros[2]<<numeros[1]<<endl;
		cout<<numeros[3]<<numeros[1]<<numeros[2]<<numeros[0]<<endl;
                cout<<numeros[3]<<numeros[1]<<numeros[0]<<numeros[2]<<endl;
                cout<<numeros[3]<<numeros[2]<<numeros[1]<<numeros[0]<<endl;
                cout<<numeros[3]<<numeros[2]<<numeros[0]<<numeros[1]<<endl;
                cout<<numeros[3]<<numeros[0]<<numeros[2]<<numeros[2]<<endl;
                cout<<numeros[3]<<numeros[0]<<numeros[1]<<numeros[1]<<endl;
	}
		
}
