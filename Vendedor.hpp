#include "Empregado.hpp"
#include <iostream>

class Vendedor: public Empregado{
    public:
      
        void setQuotaMensal(double quotaMensal);
        int getQuotaMensal();
        int anoTotal = 12;
        int getQuotaAnual(){
            return (getQuotaMensal() * anoTotal);
        }

    private:
        double quotaMensalVendas;
};  
