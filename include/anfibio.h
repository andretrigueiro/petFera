#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <iostream>
#include <string>

#include "animal.h"

using namespace std;

class Anfibio : public Animal
{
private:

  /**
   * Atributos privados da class anfibio, especificos desta classe
   */

   int dia;
   int mes;
   int ano;
   int total_de_mudas;

public:

  /**
   * Getters
   * Funções para acessar os valores dos atributos da classe
   */

   int getDiaUltimaMuda();
   int getMesUltimaMuda();
   int getAnoUltimaMuda();
   int getTotalDeMudas();

   /**
    * Setters
    * Funções para determinar os valores dos atributos da classe
    */

    void setDiaUltimaMuda(int dia);
    void setMesUltimaMuda(int mes);
    void setAnoUltimaMuda(int ano);
    void setTotalDeMudas(int total_de_mudas);

    /**
     * Constructors and Destructors
     * Contrutor e destrutor da classe
     */

     Anfibio();
     Anfibio(int _id, string _classe, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, Veterinario _veterinario, Tratador _tratador, string _nome_batismo, int _dia, int _mes, int _ano, int _total_de_mudas);
     ~Anfibio();

};

#endif
