#include "../include/funcionario.h"

using namespace std;

/**
 * Constructors and Destructors
 */

//Construtor Padrão
Funcionario::Funcionario() {}

//Destrutor Padrão
Funcionario::~Funcionario() {}

//Construtor com parâmetro, utilizando as propriedades do funcionario
Funcionario::Funcionario(int _id, string _nome, string _cpf, int _idade, char _tipo_sanguineo, char _fator_rh, string _especialidade)
{
  setID(_id);
  setNome(_nome);
  setCPF(_cpf);
  setIdade(_idade);
  setTipoSanguineo(_tipo_sanguineo);
  setFatorRh(_fator_rh);
  setEspecialidade(_especialidade);
}

/**
 * Getters
 */

int Funcionario::getID()
{
  return this->id;
}

string Funcionario::getNome()
{
  return this->nome;
}

string Funcionario::getCPF()
{
  return this->cpf;
}

int Funcionario::getIdade()
{
  return this->idade;
}

char Funcionario::getTipoSanguineo()
{
  return this->tipo_sanguineo;
}

char Funcionario::getFatorRh()
{
  return this->fator_rh;
}

string Funcionario::getEspecialidade()
{
  return this->especialidade;
}

/**
 * Setters
 */

void Funcionario::setID(int id)
{
  this->id = id;
}

void Funcionario::setNome(string nome)
{
  this->nome = nome;
}
void Funcionario::setCPF(string cpf)
{
  this->cpf = cpf;
}
void Funcionario::setIdade(int idade)
{
  this->idade = idade;
}
void Funcionario::setTipoSanguineo(char tipo_sanguineo)
{
  this->tipo_sanguineo = tipo_sanguineo;
}
void Funcionario::setFatorRh(char fator_rh)
{
  this->fator_rh = fator_rh;
}
void Funcionario::setEspecialidade(string especialidade)
{
  this->especialidade = especialidade;
}

