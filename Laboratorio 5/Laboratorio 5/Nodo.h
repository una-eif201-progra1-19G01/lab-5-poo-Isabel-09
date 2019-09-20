#pragma once
#include "Trabajador.h"
class Nodo
{
		Trabajador trabajador;
		Nodo* siguiente;

	public:
		Nodo();

		Nodo(const Trabajador& trabajador, Nodo* siguiente);

		virtual ~Nodo();

		const Trabajador& getTrabajador() const;

		void setTrabajador(const Trabajador& trabajador);

		Nodo* getSiguiente() const;

		void setSiguiente(Nodo* _siguiente);

		std::string toString();



};

