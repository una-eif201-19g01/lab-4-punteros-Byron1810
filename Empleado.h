/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-29
 *
 *         Author:  Byron Argüello Rodríguez byron181098@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>

const int NUMERO_MAXIMO = 100;

class Empleado {

protected:
	std::string nombre;
	int numeroEmpleado;
	int anniosExperiencia;
	float salarioBase;
	bool revisarEmp;

private:
	float aumentarSalario(const int *);
	static void revisarAleatorio(bool*);

public:
	Empleado();
	Empleado(const std::string &nombre, int &anniosExperiencia, float salarioBase);
	std::string obtenerReporteEmpleado();

	std::string getNombre();
	void setNombre(std::string nombre);

	int getNumeroEmpleado();
	void setNumeroEmpleado(int numeroEmpleado);

	int getAnniosExperiencia();
	void setAnniosExperiencia(int anniosExperiencia);

	float getSalarioBase();
	void setSalarioBase(int salarioBase);
};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
