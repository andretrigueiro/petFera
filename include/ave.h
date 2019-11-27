#ifndef AVE_H
#define AVE_H

#include <iostream>
#include <string>

#include "animal.h"

using namespace std;

class Ave : public Animal
{
private:

  /**
   * Atributos privados da class ave, especificos desta classe
   */

   double tamanho_do_bico_cm;
   double envergadura_das_asas;

public:

  /**
   * Getters
   * Funções para acessar os valores dos atributos da classe
   */

   double getTamanhoDoBicoCM();
   double getEnvergaduraDasAsas();

   /**
    * Setters
    * Funções para determinar os valores dos atributos da classe
    */

    void setTamanhoDoBicoCM(double tamanho_do_bico_cm);
    void setEnvergaduraDasAsas(double envergadura_das_asas);

    /**
     * Constructors and Destructors
     * Contrutor e destrutor da classe
     */

     Ave();
     Ave(int _id, string _classe, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, Veterinario _veterinario, Tratador _tratador, string _nome_batismo, double _tamanho_do_bico_cm, double _envergadura_das_asas);
     ~Ave();

};

#endif
