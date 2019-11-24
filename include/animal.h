#ifndef ANIMAL.H
#define ANIMAL.H

#include <iostream>
#include <string>

#include "veterinario.h"
#include "tratador.h"
#include "funcionario.h"

using namespace std;

class Animal
{
private:
  
  /**
   * Atributos privados da class animal, ou seja, apenas a própria classe pode acessar. Em geral são dados básicos de um animal.
   */

   int id;
   string classe;
   string nome_cientifico;
   char sexo;
   double tamanho;
   string dieta;
   Veterinario veterinario;
   Tratador tratador;
   string nome_batismo;

public:

  /**
   * Getters
   * Funções para acessar os valores dos atributos da classe
   */

   int getID();
   string getClasse();
   string getNomeCientifico();
   char getSexo();
   double getTamanho();
   string getDieta();
   Veterinario getVeterinario();
   Tratador getTratador();
   string getNomeBatismo();

   /**
    * Setters
    * Funções para determinar os valores dos atributos da classe
    */

    void setID(int id);
    void setClasse(string classe);
    void setNomeCientifico(string nome_cientifico);
    void setSexo(char sexo);
    void setTamanho(double tamanho);
    void setDieta(string dieta);
    void setVeterinario(Veterinario veterinario);
    void setTratador(Tratador tratador);
    void setNomeBatismo(string nome_batismo);

    /**
     * Constructors and Destructors
     * Contrutor e destrutor da classe
     */

     Animal();
     Animal(int _id, string _classe, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, Veterinario _veterinario, Tratador _tratador, string _nome_batismo);
     ~Animal();

};

#endif
