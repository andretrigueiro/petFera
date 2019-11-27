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
Animal::Animal(int _id, string _classe, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, Veterinario *_veterinario, Tratador *_tratador, string _nome_batismo)
{
  setID(_id);
  setClasse(_classe);
  setNomeCientifico(_nome_cientifico);
  setSexo(_sexo);
  setTamanho(_tamanho);
  setDieta(_dieta);
  setVeterinario(_veterinario);
  setTratador(_tratador);
  setNomeBatismo(_nome_batismo);
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
   return *veterinario;
 }

 Tratador Animal::getTratador()
 {
   return *tratador;
 }

 string Animal::getNomeBatismo()
 {
   return this->nome_batismo;
 }

 /**
  * Setters
  */

  void Animal::setID(int id)
  {
    this->id = id;
  }

  void Animal::setClasse(string classe)
  {
    this->classe = classe;
  }

  void Animal::setNomeCientifico(string nome_cientifico)
  {
    this->nome_cientifico = nome_cientifico;
  }

  void Animal::setSexo(char sexo)
  {
    this->sexo = sexo;
  }

  void Animal::setTamanho(double tamanho)
  {
    this->tamanho = tamanho;
  }

  void Animal::setDieta(string dieta)
  {
    this->dieta = dieta;
  }

  void Animal::setVeterinario(Veterinario *veterinario)
  {
    this->veterinario = veterinario;
  }

  void Animal::setTratador(Tratador *tratador)
  {
    this->tratador = tratador;
  }

  void Animal::setNomeBatismo(string nome_batismo)
  {
    this->nome_batismo = nome_batismo;
  }
