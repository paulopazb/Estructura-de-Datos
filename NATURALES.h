#pragma once
#include <iostream>
#include <string>

using namespace std;
class NATURALES
{	 long long entero;
public:

	//Metodos de acceso//

	int Get_entero()
	{
	 return entero;
	}
	void Set_entero(long long e)
	{  entero=e;
	}
	void Leer()
	{
		cout<<"Ingrese el numero"<<endl;
		cin>>entero;
	}
	void Mostrar()
	{
	 cout<<"El resultado es: "<<entero;
	}

	bool Se_repite(long long digito, long long numero)
	{
		int contador=0;
			while(numero>0)
			{
				if((numero%10)==digito)
				{
					contador++;
				}
				numero=numero/10;
			}
			if(contador>=3)
			{return true;}
			else{return false;}
	}
	NATURALES Invertir_numero()
	{	NATURALES r;
		long long numero=entero;
		long long acumulador=0;
		long long digito;
		while(numero>0) //12
		{	digito=numero%10; //2
			acumulador=acumulador*10+digito;
			numero=numero/10;
		}
		r.Set_entero(acumulador);
		return r;
	}
	
	
	NATURALES Eliminar_repetidos()
	{
		NATURALES Respuesta;
		long long numero=entero;
		long long acumulador=0;
		long long digito;
		
			
			while(numero>0) 
			{
				digito=numero%10; 
				if(Se_repite(digito,numero)==false) 
				{
					acumulador=acumulador*10+digito;
				}
				numero=numero/10;
			}
			
			Respuesta.Set_entero(acumulador);
			
			return Respuesta.Invertir_numero();
	}

};

