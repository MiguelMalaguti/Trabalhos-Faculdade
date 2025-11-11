#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include <limits>

using namespace std;

int main(){
    string nome, verificacao;
    int categoria,categoria2,quantidade;
    float preco;
    quantidade = 0;
    preco = 0;
    bool flag = true;


    cout << "Bem vindo a Lanchonete!" << endl;
    cout << "Por favor, insira seu nome: ";
    getline(cin,nome);

    cout << "Ola, "<< nome << "!Escolha uma categoria: " << endl;

    while( verificacao != "N" && flag ){
        cout << "1.Lanches" << endl;
        cout << "2.Bebidas" << endl;
        cout << "3.Sobremesas" << endl;
        cout << "4.Finalizar pedido" << endl;
        cout << "Escolha uma opcao: ";
        cin >> categoria;
            while (cin.fail() || categoria<1 || categoria>4 || cin.peek() != '\n'){
                cout << "Opcao inexistente! Tente novamente \n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> categoria;
            }

        switch(categoria){
            case 1:
                cout << "Lanches disponiveis:" << endl;
                cout << "1.Hamburguer (R$ 10.00)" << endl;
                cout << "2.Cheeseburguer (R$ 12.00)" << endl;
                cout << "3.X-Bacon (R$ 15.00)" << endl;
                cout << "Escolha uma opcao: ";
                cin >> categoria2;
                    while(cin.fail() || categoria2<1 ||categoria2 > 3 || cin.peek() != '\n'){
                        cout << "Opcao invalida! Tente novamente.";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin >> categoria2;
                    }
                    switch(categoria2){
                        case 1:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                                while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                                }
                            preco += (10*quantidade);
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;

                        case 2:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                                while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                                }
                            preco +=(12*quantidade);
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                   
                                }
                            break;
                        case 3:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                                while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                                }
                                preco +=(15*quantidade);
                                cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                                cin >> verificacao;
                                transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;
                        default:
                            cout << "Escolha uma opcao valida!";
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(cin.fail() && verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                };
                            break;
                    };
                break;

            case 2:
                cout << "Bebidas disponiveis:" << endl;
                cout << "1.Refrigerante (R$ 5.00)" << endl;
                cout << "2.Suco (R$ 7.00)" << endl;
                cout << "3.Agua (R$ 3.00)" << endl;
                cout << "escolha uma opcao: ";
                cin >> categoria2;
                    while(cin.fail() || categoria2<1 ||categoria2 > 3 || cin.peek() != '\n'){
                        cout << "Opcao invalida! Tente novamente.";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin >> categoria2;
                    }
                    switch(categoria2){
                        case 1:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                            while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                            }
                            preco += (5*quantidade);
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;
                        case 2:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                                while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                                }
                            preco += (7*quantidade);
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;
                        case 3:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                                while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                                }
                            preco += (3*quantidade);
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;
                        default:
                            cout << "Escolha uma opcao valida!";
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;
                    };
                break;

            case 3:
                cout << "Sobremesas disponiveis:" << endl;
                cout << "1.Sorvete (R$ 8.00)" << endl;
                cout << "2.Bolo (R$ 6.00)" << endl;
                cout << "3.Pudim (R$ 5.00)" << endl;
                cout << "escolha uma opcao: ";
                cin >> categoria2;
                    while(cin.fail() || categoria2 < 1 ||categoria2 > 3 || cin.peek() != '\n'){
                        cout << "Opcao invalida! Tente novamente.";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin >> categoria2;
                    }
                    switch(categoria2){
                        case 1:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                            while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                            }
                            preco += (8*quantidade);
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;
                        case 2:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                                while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                                }
                            preco += (6*quantidade);
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;
                        case 3:
                            cout << "Digite a quantidade: ";
                            cin >> quantidade;
                                while(quantidade <= 0 || cin.fail() || cin.peek() != '\n'){
                                    cout << "Quantidade invalida! Digite um numero maior que zero.";
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> quantidade;
                                }
                            preco += (5*quantidade);
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                                break;
                        default:
                            cout << "Escolha uma opcao valida!";
                            cout << "Deseja adicionar mais coisas no carrinho? (S/N):";
                            cin >> verificacao;
                            transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                while(verificacao != "N" && verificacao != "S"){
                                    cout << "Opcao invalida! Tente novamente." <<endl;
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    cin >> verificacao;
                                    transform(verificacao.begin(), verificacao.end(), verificacao.begin(), ::toupper);
                                }
                            break;
                    };
                break;
            case 4:
                flag = !flag;
                break;
             default:
                cout << "Insira uma opcao valida!" << endl;
                break;
        }
    }
    cout << "Pedido finalizado!" << endl;
    cout << "Total do pedido: R$ " << fixed << setprecision(2) << preco <<endl;

    if(preco > 50){
        cout<< "Pedido acima de R$50!Desconto aplicado:" << endl;
        cout << "Valor com desconto: R$ "<< fixed << setprecision(2) <<(preco- (preco * 0.10)) << endl;
    };
    cout << "Obrigado por comprar em nossa loja, " << nome << "!";

    return 0;
}