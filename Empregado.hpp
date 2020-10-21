#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    int minHoras = 8;
    double totHoras;
    float metadeHoras = 0.5;
    double salarioHora;
    std::string nome; 
  
  public:
     
    double quotaMensalVendas;  
  
    double pagamentoMes(double);

    std::string getNome();
    void setNome(std::string);

    void setSalarioHora(double);
    double getSalarioHora();
};

#endif