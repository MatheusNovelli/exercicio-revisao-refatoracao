#include <string>
#include <iostream>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:  
   
    void setProjetos(int totalProjetos);
    int getProjetos();

  private:
    int projetos;
	
};

