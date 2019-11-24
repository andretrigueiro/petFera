#ifndef MAMIFERO.H
#define MAMIFERO.H

#include <iostream>
#include <string>

#include "animal.h"

using namespace std;

class Mamifero : public Animal
{
private:

  /**
   * Atributos privados da class mamifero, especificos desta classe
   */

   string cor_pelo;

public:

  /**
   * Getters
   * Funções para acessar os valores dos atributos da classe
   */

   string getCorPelo();

   /**
    * Setters
    * Funções para determinar os valores dos atributos da classe
    */

    void setCorPelo(string cor_pelo);

    /**
     * Constructors and Destructors
     * Contrutor e destrutor da classe
     */

     Mamifero();
     Mamifero(int _id, string _classe, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, Veterinario _veterinario, Tratador _tratador, string _nome_batismo, string _cor_pelo);
     ~Mamifero();

};

#endif
