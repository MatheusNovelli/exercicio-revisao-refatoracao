#include "Empregado.hpp"

void Empregado::setNome(std::string _nome)
{
  nome = _nome;
}

std::string Empregado::getNome()
{
  return nome;
}

void Empregado::setSalarioHora(double _salarioHora)
{
  salarioHora = _salarioHora;
}

double Empregado::getSalarioHora()
{
  return salarioHora;
}

double Empregado::pagamentoMes(double horasTrabalhadas)
{
  double totHoras = horasTrabalhadas;

  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > minHoras)
  {
    double extraHoras = horasTrabalhadas - minHoras;
    totHoras += extraHoras * metadeHoras;
  }
  return totHoras * salarioHora;
}
