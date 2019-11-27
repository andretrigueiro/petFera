#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
private:

  /**
   * Atributos privados da class funcionario, ou seja, apenas a própria classe pode acessar. Em geral são dados básicos de uma pessoa/funcionario.
   */

  int id;
  string nome;
  string cpf;
  int idade;
  char tipo_sanguineo;
  char fator_rh;
  string especialidade;

public:

  /**
   * Getters
   * Funções para acessar os valores dos atributos da classe
   */

 int getID();
 string getNome();
 string getCPF();
 int getIdade();
 char getTipoSanguineo();
 char getFatorRh();
 string getEspecialidade();

 /**
  * Setters
  * Funções para determinar os valores dos atributos da classe
  */

  void setID(int id);
  void setNome(string nome);
  void setCPF(string cpf);
  void setIdade(int idade);
  void setTipoSanguineo(char tipo_sanguineo);
  void setFatorRh(char fator_rh);
  void setEspecialidade(string especialidade);

  /**
   * Constructors and Destructors
   * Contrutor e destrutor da classe
   */

   Funcionario();
   Funcionario(int _id, string _nome, string _cpf, int _idade, char _tipo_sanguineo, char _fator_rh, string _especialidade);
   ~Funcionario();

};

#endif
