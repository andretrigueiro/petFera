#include "../include/veterinario.h"

using namespace std;

/**
 * Constructors and Destructors
 */

//Construtor Padrão
Veterinario::Veterinario() {}

//Destrutor Padrão
Veterinario::~Veterinario() {}

//Construtor com parâmetro, utilizando as propriedades do veterinario e as propriedades herdadas do funcionario
Veterinario::Veterinario(int _id, string _nome, string _cpf, int _idade, char _tipo_sanguineo, char _fator_rh, string _especialidade, string _cmv)
{
  setID(_id)
  setNome(_nome);
  etCPF(_cpf);
  setIdade(_idade);
  setTipoSanguineo(_tipo_sanguineo);
  setFatorRh(_fator_rh);
  setEspecialidade(_especialidade);
  setCMV(_cmv)
}

/**
 * Getters
 */

string Veterinario::getCMV()
{
  return this->cmv;
}

 /**
 * Setters
 */

 void Veterinario::setCMV(string cmv)
 {
   this->cmv = cmv;
 }
