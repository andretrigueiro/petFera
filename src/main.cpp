// Projeto da unidade 3 de LP1
// Autor: André Trigueiro

//Bibliotecas padrão do C++
#include <iostream>
#include <string>
#include <vector>

//Arquivos de cabeçalhos para serem adicionados ao programa
#include "../include/menu.h"
#include "../include/anfibio.h"
#include "../include/animal.h"
#include "../include/ave.h"
#include "../include/exotico.h"
#include "../include/funcionario.h"
#include "../include/mamifero.h"
#include "../include/nativo.h"
#include "../include/reptil.h"
#include "../include/silvestre.h"
#include "../include/tratador.h"
#include "../include/veterinario.h"

//Vetores (estrutura de dados) para armazenar as informações
vector<Tratador *> tratadores;
vector<Veterinario *> veterinarios;
vector<Mamifero *> mamiferos;

//Funções auxiliares para funcionalidades do programa
void cadastrarMamifero();
void consultarAnimalPorAnimal();
void consultarAnimalPorFuncionario();
void cadastrarVeterinario();
void cadastrarTratador();
void listarFuncionarios();

//Função para inicializar o banco de dados
void initFunc();

//Funções de busca dentro do banco de dados
int buscaVeterinario(int _ID);
int buscaTratador(int _ID);

//Funções para escolher e retornar o objeto desejado
Veterinario *escolheVeterinario(int _ID);
Tratador *escolheTratador(int _ID);

//Utilizando o namespace std para "limpar" o código
using namespace std;

//função principal do programa, que comandará todas as funcionalidades
int main ()
{
    //Limpando a tela
    system("clear");

    //função para inicializar o banco de dados
    initFunc();

    //variável para armazenar o estado do menu
    //onde caso seja verdadeiro, irá sair do menu principal e consequentemente do programa
    bool sair = false;

    while(sair == false){
        int entrada = menu();
        int opcao = -1;

        //o valor passado pelo usuário na função menu serve como variável que irá selecionar a funcionalidade desejada
        switch (entrada)
        {
        case 1:
            //cadastrar um animal
            opcao = menuCadastroAnimais();
            if(opcao == 1){ cadastrarMamifero(); }
            break;
        case 2: 
            //remover um animal
            break;
        case 3:
            //alterar dado
            break;
        case 4:
            //consultar animal POR ANIMAL
            system("clear");
            consultarAnimalPorAnimal();
            break;
        case 5:
            //consultar animal POR FUNCIONARIO
            system("clear");
            consultarAnimalPorFuncionario();
            break;
        case 6:
            //cadastrar funcionario
            opcao = menuCadastroFuncionario();
            if(opcao == 1){ cadastrarVeterinario(); }
            else if(opcao == 2){ cadastrarTratador(); }
            else if(opcao == 0){ }
            break;
        case 7:
            //listando todos os funcionarios cadastrados
            system("clear");
            listarFuncionarios();
            break;
        case 0:
            sair = true;
            break;
        default:
            cout << "ATENÇÃO AOS COMANDOS!! INFORME APENAS NÚMEROS!" << endl; 
            break;
        }
    }
    return 0;
}

/* ---------------------------------------------------------------- */

//Função para inicializar o banco de dados com objetos padrões
void initFunc(){

    int ID = 1, idade = 24;
    string NOME = "andre", CPF = "123456", especialidade = "nenhuma", cmv = "654321";
    char tipo_sangue = 'o', fator_rh = '-';

    int ID2 = 2, idade2 = 20, nivel_seg2 = 3;
    string NOME2 = "joao", CPF2 = "567890", especialidade2 = "silvestre";
    char tipo_sangue2 = 'a', fator_rh2 = '+';

    veterinarios.push_back(new Veterinario(ID, NOME, CPF, idade, tipo_sangue, fator_rh, especialidade, cmv));
    tratadores.push_back(new Tratador(ID2, NOME2, CPF2, idade2, tipo_sangue2, fator_rh2, especialidade2, nivel_seg2));

}

/* ---------------------------------------------------------------- */

//Função para buscar e deterimar o ID do veterinario desejado
int buscaVeterinario(int _ID){

    for (unsigned int i = 0 ; i < veterinarios.size(); i++){
        Veterinario *vet = veterinarios[i];

        if (vet->getID() == _ID) {
            return _ID;
        }
        else {
            cout << "O ID informado não existe em nosso Banco de Dados." << endl
                 << "Confira em nossa lista de funcionarios e escolha um ID." << endl;
            listarFuncionarios();
            int new_ID;
            cout << "Informe novamente um ID válido: ";
            cin >> new_ID;
            return new_ID;
        }
    }

    return 0;
}

/* ---------------------------------------------------------------- */

//Função para buscar e deterimar o ID do tratador desejado
int buscaTratador(int _ID){

    for (unsigned int i = 0 ; i < tratadores.size(); i++){
        Tratador *tratador = tratadores[i];

        if (tratador->getID() == _ID) {
            return _ID;
        }
        else {
            cout << "O ID informado não existe em nosso Banco de Dados." << endl
                 << "Confira em nossa lista de funcionarios e escolha um ID." << endl;
            listarFuncionarios();
            int new_ID;
            cout << "Informe novamente um ID válido: ";
            cin >> new_ID;
            return new_ID;
        }
    }

    return 0;
}

/* ---------------------------------------------------------------- */

//Função para pegar os dados do veterinario dsejado
Veterinario *escolheVeterinario(int _ID){
    
    Veterinario *vet;

    for (unsigned int i = 0 ; i < veterinarios.size(); i++){
        if(_ID == veterinarios[i]->getID()){
            vet = veterinarios[i];
        } 
    }

    return vet;
}

/* ---------------------------------------------------------------- */

//Função para pegar os dados do tratador dsejado
Tratador *escolheTratador(int _ID){
    
    Tratador *tratador;

    for (unsigned int i = 0 ; i < tratadores.size(); i++){
        if(_ID == tratadores[i]->getID()){
            tratador = tratadores[i];
        } 
    }

    return tratador;
}


/* ---------------------------------------------------------------- */

//Função para cadastrar animais mamiferos. Recebe todas as informações via terminal e incializa o objeto através do construtor por cópia
void cadastrarMamifero(){

    int ID = 0, id_veterinario = 0, id_tratador = 0;
    string classe, nome_cientifico, dieta, nome_batismo, cor_pelo;
    char sexo;
    double tamanho;
    Veterinario *vet;
    Tratador *trat;

    system("clear");

    cout << "CADASTRANDO MAMIFERO!" << endl;

    cout << endl << "Número de ID: ";
    cin >> ID;

    cout << endl << "Nome Batismo: ";
    cin >> nome_batismo; 

    cout << endl << "Sexo: ";
    cin >> sexo;

    cout << endl << "Nome Cientifico: ";
    cin >> nome_cientifico; 

    cout << endl << "Classe: ";
    cin >> classe; 

    cout << endl << "Tamanho (em metros): ";
    cin >> tamanho; 

    cout << endl << "Dieta: ";
    cin >> dieta; 
    
    cout << endl << "Cor do pelo: ";
    cin >> cor_pelo; 

    cout << endl << "Veterinario responsável (Informe apenas o ID): ";
    cin >> id_veterinario;

    id_veterinario = buscaVeterinario(id_veterinario);
    vet = escolheVeterinario(id_veterinario);

    cout << endl << "Tratador responsável (Informe apenas o ID): ";
    cin >> id_tratador;

    id_tratador = buscaTratador(id_tratador);
    trat = escolheTratador(id_tratador);

    mamiferos.push_back(new Mamifero(ID, classe, nome_cientifico, sexo, tamanho, dieta, vet, trat, nome_batismo, cor_pelo));

    cout << "###" << "MAMÍFERO CADASTRADO COM SUCESSO!" << "###" << endl;

    system("clear");

}

/* ---------------------------------------------------------------- */

//Consultar animais através do seu ID
void consultarAnimalPorAnimal(){

    int num_ID;

    cout << "CONSULTAR ANIMAIS - BUSCANDO PELO ANIMAL" << endl << endl;

    if (mamiferos.size() == 0)
    {
        cout << endl << "Nenhum animal cadastrado."
             << endl;
        return;       
    }

    cout << "Informe o ID: ";
    cin >> num_ID;

    for (unsigned int i = 0 ; i < mamiferos.size(); i++){
        if(num_ID == mamiferos[i]->getID()){
            cout << endl << endl;
            cout << "### Animal Mamifero ###" << endl
                 << "ID: " << mamiferos[i]->getID() << endl
                 << "Nome de Batismo: " << mamiferos[i]->getNomeBatismo() << endl
                 << "Sexo: " << mamiferos[i]->getSexo() << endl
                 << "Tamanho: " << mamiferos[i]->getTamanho() << endl
                 << "Classe: " << mamiferos[i]->getClasse() << endl
                 << "Cor do pelo: " << mamiferos[i]->getCorPelo() << endl
                 << "Nome cientifico: " << mamiferos[i]->getNomeCientifico() << endl
                 << "Dieta: " << mamiferos[i]->getDieta() << endl << endl;
        }
        else{
            cout << "Nenhum animal encontrado com este ID." << endl;
        }
    }
}

/* ---------------------------------------------------------------- */

//Consultar animais pelo ID do funcionario responsavel
void consultarAnimalPorFuncionario(){

}

/* ---------------------------------------------------------------- */

//Função para cadastrar funcionarios do tipo Veterinario. Recebe todas as informações via terminal e incializa o objeto através do construtor por cópia
void cadastrarVeterinario(){

    int ID = 0, idade = 0;
    string NOME, CPF, especialidade, cmv;
    char tipo_sangue, fator_rh;

    system("clear");

    cout << "CADASTRANDO VETERINARIO!" << endl;

    cout << endl << "Número de ID: ";
    cin >> ID;

    cout << endl << "Nome completo: ";
    cin >> NOME; 

    cout << endl << "CPF (somente numeros): ";
    cin >> CPF; 

    cout << endl << "Idade: ";
    cin >> idade; 

    cout << endl << "Tipo Sanguineo (Apenas a letra): ";
    cin >> tipo_sangue; 
    
    cout << endl << "Fator RH (Apenas o simbolo): ";
    cin >> fator_rh; 

    cout << endl << "Especialidade: ";
    cin >> especialidade;

    cout << endl << "CMV: ";
    cin >> cmv;  

    veterinarios.push_back(new Veterinario(ID, NOME, CPF, idade, tipo_sangue, fator_rh, especialidade, cmv));

    cout << endl << "###" << "VETERINÁRIO CADASTRADO COM SUCESSO!" << "###" << endl;

    system("clear");

}

/* ---------------------------------------------------------------- */

//Função para cadastrar funcionarios do tipo Tratador. Recebe todas as informações via terminal e incializa o objeto através do construtor por cópia
void cadastrarTratador(){

    int ID, idade, nivel_seg;
    string NOME, CPF, especialidade;
    char tipo_sangue, fator_rh;

    system("clear");

    cout << "CADASTRANDO VETERINARIO!" << endl;

    cout << endl << "Número de ID: ";
    cin >> ID;

    cout << endl << "Nome completo: ";
    cin >> NOME; 

    cout << endl << "CPF (somente números): ";
    cin >> CPF; 

    cout << endl << "Idade: ";
    cin >> idade; 

    cout << endl << "Tipo Sanguineo (Apenas a letra): ";
    cin >> tipo_sangue; 
    
    cout << endl << "Fator RH (Apenas o simbolo): ";
    cin >> fator_rh; 

    cout << endl << "Especialidade: ";
    cin >> especialidade;

    cout << endl << "Nivel de seguranda (de 0 a 2): ";
    cin >> nivel_seg;  

    tratadores.push_back(new Tratador(ID, NOME, CPF, idade, tipo_sangue, fator_rh, especialidade, nivel_seg));

    cout << endl << "###" << "TRATADOR CADASTRADO COM SUCESSO!" << "###" << endl;

    system("clear");

}

/* ---------------------------------------------------------------- */

//Função para listar todos os funcionarios, seja veterinario ou tratador, do petfera, bem como seus dados.
void listarFuncionarios(){

    int entrada = 1;

    cout << "LISTA DE TODOS OS FUNCIONÁRIOS" << endl << endl;

    if (veterinarios.size() == 0 && tratadores.size() == 0)
    {
        cout << endl << "Nenhum funcionário cadastrado."
            << endl;
        return;       
    }

    for (unsigned int i = 0 ; i < veterinarios.size(); i++){
        Veterinario *vet = veterinarios[i];
        
        cout << "### Veterinario ###" << endl
             << "ID: " << vet->getID() << endl
             << "Nome: " << vet->getNome() << endl
             << "Idade: " << vet->getIdade() << endl
             << "Sangue: " << vet->getTipoSanguineo() << vet->getFatorRh() << endl
             << "Especialidade: " << vet->getEspecialidade() << endl
             << "CMV: " << vet->getCMV() << endl << endl;
    }

    for (unsigned int i = 0 ; i < tratadores.size(); i++){
    Tratador *tratador = tratadores[i];
    
        cout << "### Tratador ###" << endl
                << "ID: " << tratador->getID() << endl
                << "Nome: " << tratador->getNome() << endl
                << "Idade: " << tratador->getIdade() << endl
                << "Sangue: " << tratador->getTipoSanguineo() << tratador->getFatorRh() << endl
                << "Especialidade: " << tratador->getEspecialidade() << endl
                << "Nivel de segurança: " << tratador->getNivelDeSeguranca() << endl << endl;
        }

    cout << endl << "Aperta a tecla >> 0 << para voltar ao menu anterior!" << endl;
    cin >> entrada;
    if (entrada == 0){
        system("clear");
        return;
    }    
}



