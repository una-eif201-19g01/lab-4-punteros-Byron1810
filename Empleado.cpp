/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-29
 *
 *         Author:  Byron Argüello Rodríguez byron181098@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include<stdlib.h>
#include<time.h>
#include "Empleado.h"

Empleado::Empleado() 
{
	numeroEmpleado = std::rand() % NUMERO_MAXIMO;
}

Empleado::Empleado(const std::string &nombre, int &anniosExperiencia, float salarioBase) : nombre(nombre), anniosExperiencia(anniosExperiencia), salarioBase(salarioBase) 
{
	numeroEmpleado = std::rand() % NUMERO_MAXIMO;
}

float Empleado::aumentarSalario(const int* anniosExperiencia) 
{
	float salario = getSalarioBase();
	float salarioNuevo = 0;

	if (*anniosExperiencia > 0 && *anniosExperiencia < 3)
	{
		salarioNuevo = salario + ((0.02 * getAnniosExperiencia()) * salario);
		return salarioNuevo;
	}
	else
		if (*anniosExperiencia >= 3)
		{
			salarioNuevo = salario + ((0.05 * getAnniosExperiencia()) * salario);
			return salarioNuevo;
		}
		else
			salarioNuevo = salario;
			return salarioNuevo;
}

void Empleado::revisarAleatorio(bool* revisarEmp) 
{
	if(rand() % 2 == 0){
		*revisarEmp = true;
	}
	else {
		*revisarEmp = false;
	}
}

std::string Empleado::obtenerReporteEmpleado()
{
	std::string reporte = "";
	std::string revision = "";
	bool* revisar = &revisarEmp;
	revisarAleatorio(revisar);


	if (*revisar == true)
	{
		revision = "Si";
	}
	else
	{
		revision = "No";
	}


	reporte = reporte + "Empleado # [" + std::to_string(getNumeroEmpleado()) + "]\n\tNombre [" + getNombre() + "]\n\t" + "Annios de experiencia [" 
		      + std::to_string(getAnniosExperiencia()) + "]\n\tSalario inicial [" + std::to_string(getSalarioBase()) + "]\n\tSalario acumulado ["
		      + std::to_string(aumentarSalario(&anniosExperiencia)) + "]\n\tNecesita revision [" + revision + "]\n\t";

	return reporte;
}

std::string Empleado::getNombre()
{
	return nombre;
}

void Empleado::setNombre(std::string nom) 
{
	Empleado::nombre = nom;
}

int Empleado::getNumeroEmpleado()
{
	return numeroEmpleado;
}

void Empleado::setNumeroEmpleado(int numeroEmp)
{
	Empleado::numeroEmpleado = numeroEmp;
}

int Empleado::getAnniosExperiencia()
{
	return anniosExperiencia;
}

void Empleado::setAnniosExperiencia(int anniosExp)
{
	Empleado::anniosExperiencia = anniosExp;
}



float Empleado::getSalarioBase()
{
	return salarioBase;
}

void Empleado::setSalarioBase(int salarioB)
{
	Empleado::salarioBase = salarioB;
}