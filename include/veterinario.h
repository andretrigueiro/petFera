#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>

#include "funcionario.h"

using namespace std;

class Veterinario : public Funcionario
{
private:

  /**
   * Atributos privados da class tratador, especificos desta classe
   */

   string cmv;

public:

  /**
   * Getters
   * Funções para acessar os valores dos atributos da classe
   */

   string getCMV();

   /**
    * Setters
    * Funções para determinar os valores dos atributos da classe
    */

    void setCMV(string cmv);

    /**
     * Constructors and Destructors
     * Contrutor e destrutor da classe
     */

     Veterinario();
     Veterinario(int id, string _nome, string cpf, int idade, char tipo_sanguineo, char fator_rh, string especialidade, string cmv);
     ~Veterinario();
};

#endif
