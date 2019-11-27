#include "../include/menu.h" 
  
/* ------------------------------------------- */

//Menu principal, onde são mostradas as funcionalidades do programa
//ATENÇÃO: todos os menus seguem o mesmo padrão, atente-se aos comentários do primeiro menu para entender os demais
int menu(){
    
    int entrada = 0;
    bool sair = false; 

    while (!sair){
        cout << "BEM-VINDO AO PETFERA!" << endl;
        cout << "Atente-se as opções do menu!" << endl
            << "Lembre-se de informar APENAS o número da opção!!!" << endl;
        cout << endl << endl;

        //seleção da funcionalidade desejada
        cout << "Escolha uma das opções:" << endl
            << "[1] Cadastrar um animal" << endl
            //<< "[2] Remover um animal" << endl
            //<< "[3] Alterar dado de um animal" << endl
            << "[4] Consultar dado de um animal - por Animal" << endl
            //<< "[5] Consultar dado de um animal - por Funcionarios" << endl
            << "[6] Cadastrar um funcionario" << endl 
            << "[7] Consultar funcionarios" << endl    
            << "[0] Sair do programa" << endl
            << "[Escolha uma opção] > "; 
        
        cin >> entrada;

        //checkando se a entrada é valida
        if(entrada != 1 && 
           entrada != 2 &&
           entrada != 3 &&
           entrada != 4 &&
           entrada != 5 &&
           entrada != 6 &&
           entrada != 7 &&
           entrada != 0){
            system("clear");
            cout << "###################################" << endl;
            cout << "Atenção. Informe APENAS O NÚMERO das opções acima!!" << endl;
            cout << "###################################" << endl << endl;
        }
        else{
            return entrada; //return a entrada selecionada
        }
    }

    return -1;
}

/* ------------------------------------------- */

//Menu para seleção do tipo de funcionario a ser cadastrado
int menuCadastroFuncionario(){

    system("clear");

    int entrada = 0;
    bool sair = false; 

    while (!sair){
        cout<< "Menu de cadastro de funcionários" << endl
            << "Você pode cadastrar as seguintes opções de funcionário:" << endl
            << "[1] Veterinário" << endl
            << "[2] Tratador" << endl
            << "[0] Retornar ao menu anterior" << endl
            << "[Escolha uma opção] > ";

        cin >> entrada; 

        if(entrada != 1 && 
           entrada != 2 &&
           entrada != 0){
                system("clear");
                cout << "###################################" << endl;
                cout << "Atenção. Informe APENAS O NÚMERO das opções acima!!" << endl;
                cout << "###################################" << endl << endl;
        }
        else{
            return entrada;
        }
    }

    return -1;
}

/* ------------------------------------------- */

//Menu para seleção do tipo de animal a ser cadastrado
int menuCadastroAnimais(){

    system("clear");

    int entrada = 0;
    bool sair = false; 

    while (!sair){
        cout<< "Menu de cadastro de animais" << endl
            << "Você pode cadastrar as seguintes opções de animais:" << endl
            << "[1] Mamifero" << endl
            << "[0] Retornar ao menu anterior" << endl
            << "[Escolha uma opção] > ";

        cin >> entrada; 

        if(entrada != 1 && 
           entrada != 0){
                system("clear");
                cout << "###################################" << endl;
                cout << "Atenção. Informe APENAS O NÚMERO das opções acima!!" << endl;
                cout << "###################################" << endl << endl;
        }
        else{
            return entrada;
        }
    }

    return -1;
}
