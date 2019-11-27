#include "../include/mamifero.h"

using namespace std;

/**
 * Constructors and Destructors
 */

//Construtor Padrão
Mamifero::Mamifero() {}

//Destrutor Padrão
Mamifero::~Mamifero() {}

//Construtor com parâmetro, utilizando as propriedades do animal
Mamifero::Mamifero(int _id, string _classe, string _nome_cientifico, char _sexo, double _tamanho, string _dieta, Veterinario *_veterinario, Tratador *_tratador, string _nome_batismo, string _cor_pelo)
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
  setCorPelo(_cor_pelo);
}

/**
 * Getters
 */

string Mamifero::getCorPelo()
{
  return this->cor_pelo;
}

  /**
  * Setters
  * Funções para determinar os valores dos atributos da classe
  */

void Mamifero::setCorPelo(string cor_pelo)
{
  this->cor_pelo = cor_pelo;
}