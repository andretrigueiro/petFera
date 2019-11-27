#ifndef TRATADOR_H
#define TRATADOR_H

#include <iostream>
#include <string>

#include "funcionario.h"

using namespace std;

class Tratador : public Funcionario
{
private:

  /**
   * Atributos privados da class tratador, especificos desta classe
   */

   int nivel_de_seguranca;

public:

  /**
   * Getters
   * Funções para acessar os valores dos atributos da classe
   */

   int getNivelDeSeguranca();

   /**
    * Setters
    * Funções para determinar os valores dos atributos da classe
    */

    void setNivelDeSeguranca(int nivel_de_seguranca);

    /**
     * Constructors and Destructors
     * Contrutor e destrutor da classe
     */

     Tratador();
     Tratador(int id, string nome, string cpf, int idade, char tipo_sanguineo, char fator_rh, string especialidade, int nivel_de_seguranca);
     ~Tratador();

};

#endif
