#ifndef REPTIL.H
#define REPTIL.H

#include <iostream>
#include <string>

#include "animal.h"

using namespace std;

class Reptil : public Animal
{
private:

  /**
   * Atributos privados da class reptil, especificos desta classe
   */

   bool venenoso;
   string tipo_veneno;

public:

  /**
   * Getters
   * Funções para acessar os valores dos atributos da classe
   */

   bool getVevenoso();
   string getTipoVeneno();

   /**
    * Setters
    * Funções para determinar os valores dos atributos da classe
    */

    void setVenenoso(bool venenoso);
    void setTipoVeneno(string tipo_veneno);

    /**
     * Constructors and Destructors
     * Contrutor e destrutor da classe
     */

     Reptil();
     Reptil(int _id, string _classe, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, Veterinario _veterinario, Tratador _tratador, string _nome_batismo, bool _venenoso, string _tipo_veneno);
     ~Reptil();

};




#endif
