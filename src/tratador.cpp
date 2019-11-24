#include "../include/tratador.h"

using namespace std;

/**
 * Constructors and Destructors
 */

//Construtor Padrão
Tratador::Tratador() {}

//Destrutor Padrão
Tratador::~Tratador() {}

//Construtor com parâmetro, utilizando as propriedades do tratador e as propriedades herdadas do funcionario
Tratador::Tratador(int _id, string _nome, string _cpf, int _idade, char _tipo_sanguineo, char _fator_rh, string _especialidade, int _nivel_de_seguranca)
{
  setID(_id)
  setNome(_nome);
  etCPF(_cpf);
  setIdade(_idade);
  setTipoSanguineo(_tipo_sanguineo);
  setFatorRh(_fator_rh);
  setEspecialidade(_especialidade);
  setNivelDeSeguranca(_nivel_de_seguranca)
}

/**
 * Getters
 */

int Tratador::getNivelDeSeguranca()
{
  return this->nivel_de_seguranca;
}

 /**
 * Setters
 */

 void Tratador::setNivelDeSeguranca(int nivel_de_seguranca)
 {
   this->nivel_de_seguranca = nivel_de_seguranca;
 }
