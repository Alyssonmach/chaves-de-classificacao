#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <fstream> // Possibilita a leitura e gravação de dados em um arquivo.
using std::ofstream;
using std::ifstream;

#include <algorithm>
using std::sort; // Ordena os elementos do vector por meio dos iteradores.

#include <stdexcept>
using std::out_of_range; // Exceção que indica tentativa de acesso a uma posição que o vector não possui.

#include <locale>

#include "Pessoa.cpp"
#include "Lista.cpp"

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	Lista lista;
	short aux(1), opcao;
	
	while(aux != 0)
	{
		
		cout << "=== Controle de Pessoas ===\n" 
			<< "\n\n1 - Inserir uma nova pessoa a lista."
			<< "\n2 - Salvar a lista em um arquivo txt."
			<< "\n3 - Pesquisar pessoas por nome."
			<< "\n4 - Pesquisar pessoa pela posição na lista."
			<< "\n5 - Remover pessoa por CPF."
			<< "\n6 - Imprimir lista."
			<< "\n7 - Imprimir lista ordenada."
			<< "\n0 - Encerrar o programa."
			<< "\n\nOpção escolhida --> ";
			
		cin >> opcao;
		
		system("cls");
		switch(opcao)
		{
			case 0:
			{
				cout << "Você quer ir embora. ;-;" << endl;
				system("pause");
				aux = 0;
				break;
			}
			case 1:
			{
				string nome, cpf;
				short idade;
				float peso;
				
				cout << "Insira os seguintes dados para realizar o cadastro: "
					<< "\nNome: ";
				cin.ignore();
				getline(cin, nome);
				cout << "CPF: ";
				getline(cin, cpf);
				cout << "Idade: ";
				cin >> idade;
				cout << "Peso: ";
				cin >> peso;
				
				Pessoa p(nome, cpf, idade, peso);
				if(lista.inserirPessoa(p))
					cout << "Pessoa cadastrada com sucesso!" << endl;
				else
					cout << "O cadastro não pode ser realizado!" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				if(lista.salvarLista())
					cout << "A lista está salva." << endl;
				else
					cout << "Não foi possível salvar a lista." << endl;
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				string nome;
				cout << "Insira um nome para realizar a pesquisa: ";
				cin.ignore();
				getline(cin, nome);
				
				if(!lista.pesquisarPorNome(nome))
					cout << "O nome pesquisado não está na lista." << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				unsigned posicao;
				cout << "Insira um número para realizar a pesquisa por posição: ";
				cin >> posicao;
				
				if(!lista.pesquisarPorPosicao(posicao))
					cout << "A posição inserida não condiz com o tamanho da lista." << endl;
				system("pause");
				system("cls");
				break;
			}
			case 5:
			{
				string cpf;
				cout << "Insira cpf da pessoa que deseja remover da lista: ";
				cin >> cpf;
				if(lista.removerPorCPF(cpf))
					cout << "Pessoa removida com sucesso!" << endl;
				else
					cout << "O CPF informado não pertence a nenhuma pessoa da lista." << endl;
				system("pause");
				system("cls");
				break;
			}
			case 6:
			{
				cout << "Lista de pessoas na ordem em que forma inseridas no arquivo: " << endl << endl;
				lista.imprimirLista();
				system("pause");
				system("cls");
				break;
			}
			case 7:
			{
				int escolha;
				
				cout << "== Escolha a forma de ordenação dos dados === " << endl;
				
				cout << "1 - Ordenação por nome;" << endl;
				cout << "2 - Ordenação por CPF;" << endl;
				cout << "3 - Ordenação por Idade;" << endl;
				cout << "4 - Ordenação por Peso;" << endl;
				cout << "Insira sua opção: ";
				cin >> escolha;
				
				switch(escolha)
				{
				case 1:
				{
					lista.ordenaNome();
					lista.imprimirLista();
					break;
				}
				case 2:
				{
					lista.ordenaCPF();
					lista.imprimirLista();
					break;
				}	
				case 3:
				{
					lista.ordenaIdade();
					lista.imprimirLista();
					break;
				}
				case 4:
				{
					lista.ordenaPeso();
					lista.imprimirLista();
					break;
				}
				default:
				{
					cout << "Opção Inválida. Tente novamente!" << endl;
					break;
				}
				}
			}
			default:
			{
				cout << "Opção incorreta! Pressione enter para tentar novamente." << endl;
				system("pause");
				system("cls");
				break;
			}
		}
		
	}
	
	
	return 0;
}
