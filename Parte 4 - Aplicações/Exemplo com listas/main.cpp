#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <fstream> // Possibilita a leitura e grava��o de dados em um arquivo.
using std::ofstream;
using std::ifstream;

#include <algorithm>
using std::sort; // Ordena os elementos do vector por meio dos iteradores.

#include <stdexcept>
using std::out_of_range; // Exce��o que indica tentativa de acesso a uma posi��o que o vector n�o possui.

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
			<< "\n4 - Pesquisar pessoa pela posi��o na lista."
			<< "\n5 - Remover pessoa por CPF."
			<< "\n6 - Imprimir lista."
			<< "\n7 - Imprimir lista ordenada."
			<< "\n0 - Encerrar o programa."
			<< "\n\nOp��o escolhida --> ";
			
		cin >> opcao;
		
		system("cls");
		switch(opcao)
		{
			case 0:
			{
				cout << "Voc� quer ir embora. ;-;" << endl;
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
					cout << "O cadastro n�o pode ser realizado!" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				if(lista.salvarLista())
					cout << "A lista est� salva." << endl;
				else
					cout << "N�o foi poss�vel salvar a lista." << endl;
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
					cout << "O nome pesquisado n�o est� na lista." << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				unsigned posicao;
				cout << "Insira um n�mero para realizar a pesquisa por posi��o: ";
				cin >> posicao;
				
				if(!lista.pesquisarPorPosicao(posicao))
					cout << "A posi��o inserida n�o condiz com o tamanho da lista." << endl;
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
					cout << "O CPF informado n�o pertence a nenhuma pessoa da lista." << endl;
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
				
				cout << "== Escolha a forma de ordena��o dos dados === " << endl;
				
				cout << "1 - Ordena��o por nome;" << endl;
				cout << "2 - Ordena��o por CPF;" << endl;
				cout << "3 - Ordena��o por Idade;" << endl;
				cout << "4 - Ordena��o por Peso;" << endl;
				cout << "Insira sua op��o: ";
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
					cout << "Op��o Inv�lida. Tente novamente!" << endl;
					break;
				}
				}
			}
			default:
			{
				cout << "Op��o incorreta! Pressione enter para tentar novamente." << endl;
				system("pause");
				system("cls");
				break;
			}
		}
		
	}
	
	
	return 0;
}
