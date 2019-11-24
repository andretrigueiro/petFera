#include "../include/animal.h"

using namespace std;

/**
 * Constructors and Destructors
 */

//Construtor Padrão
Animal::Animal() {}

//Destrutor Padrão
Animal::~Animal() {}

//Construtor com parâmetro, utilizando as propriedades do animal
Animal(int _id, string _classe, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, Veterinario _veterinario, Tratador _tratador, string _nome_batismo)
{
  setID(int _id);
  setClasse(string _classe);
  setNomeCientifico(string _nome_cientifico);
  setSexo(char _sexo);
  setTamanho(double _tamanho);
  setDieta(string _dieta);
  setVeterinario(Veterinario _veterinario);
  setTratador(Tratador _tratador);
  setNomeBatismo(string _batismo);
}

/**
 * Getters
 */

 int Animal::getID()
 {
   return this->id;
 }

 string Animal::getClasse()
 {
   return this->classe;
 }

 string Animal::getNomeCientifico()
 {
   return this->nome_cientifico;
 }

 char Animal::getSexo()
 {
   return this->sexo;
 }

 double Animal::getTamanho()
 {
   return this->tamanho;
 }

 string Animal::getDieta()
 {
   return this->dieta;
 }

 Veterinario Animal::getVeterinario()
 {
   return this->veterinario;
 }

 Tratador Animal::getTratador()
 {
   return this->tratador;
 }

 string Animal::getNomeBatismo()
 {
   return this->nome_batismo;
 }

 /**
  * Setters
  */

  void setID(int id)
  {
    this->id = id;
  }

  void setClasse(string classe)
  {
    this->classe = classe;
  }

  void setNomeCientifico(string nome_cientifico)
  {
    this->nome_cientifico = nome_cientifico;
  }

  void setSexo(char sexo)
  {
    this->sexo = sexo;
  }

  void setTamanho(double tamanho)
  {
    this->tamanho = tamanho;
  }

  void setDieta(string dieta)
  {
    this->dieta = dieta;
  }

  void setVeterinario(Veterinario veterinario)
  {
    this->veterinario = veterinario;
  }

  void setTratador(Tratador tratador)
  {
    this->tratador = tratador;
  }

  void setNomeBatismo(string nome_batismo)
  {
    this->nome_batismo = nome_batismo;
  }
