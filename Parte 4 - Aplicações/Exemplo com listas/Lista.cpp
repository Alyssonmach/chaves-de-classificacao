#include "Lista.h"
#include "Sobrecargas.h"

Lista::Lista()
{
	Pessoa p;
	ifstream arquivo; // Criando um arquivo apenas para leitura.
	arquivo.open("Lista_de_pessoas.txt"); // Abrindo o arquivo de leitura.
	
	if(arquivo.is_open()) // Verificando se o arquivo foi aberto.
	{
		while(!arquivo.eof()) // Enquanto for diferente de eof(end of file) continue se repetindo.
		{
			arquivo.ignore(); // Ignorando o caractere de quebra de linha que está no início de cada objeto.
			arquivo >> p; // Utilizando a sobrecarga do operador >> para inicializar o objeto.
			lista_p.push_back(p); // Adicionando o objeto a lista.
		}
	}
	arquivo.close(); // Fechando o arquivo de leitura.
}

Lista::~Lista()
{
	salvarLista(); // Salvando lista caso o usuário não se lembre de salvar.
}

bool Lista::inserirPessoa(Pessoa p)
{
	for(unsigned i(0); i < lista_p.size(); i++)
	{
		// Verificando se já não existe uma pessoa na lista com o mesmo CPF.
		if(lista_p[i].getCPF() == p.getCPF())
			return false;
	}
	
	lista_p.push_back(p);
	return true;
}

bool Lista::salvarLista()
{
	ofstream arquivo; // Criando um arquivo para salvar a lista de objetos.
	
	/* Utilizando o modo de abertura trunc, que abre e apaga os dados anteriores armazenados nele. Como toda a lista
	foi carregada no vector se utilizassemos o modo de abertura app o arquivo iria ficar com objetos repetidos.*/
	arquivo.open("Lista_de_pessoas.txt", std::ios::trunc);
	
	if(arquivo.is_open())
	{
		for(unsigned i(0); i < lista_p.size(); i++)
		{
			// Utilizando a sobrecarga do operador << para gravar o objeto no arquivo.
			arquivo << lista_p[i]; 
		}
		return true;	
	}
	else
		return false;
	
	arquivo.close();
	
	return true;
}

bool Lista::pesquisarPorNome(string nome) const
{
	unsigned count(0);
	for(unsigned i(0); i < lista_p.size(); i++)
	{
		if(lista_p[i].getNome() == nome)
		{
			lista_p[i].imprimeDados();
			return true;
		}
		else
			count++;
	}
	if(count == lista_p.size())
		return false;
	
	return false;
}

bool Lista::pesquisarPorPosicao(unsigned pos) const
{
	// Esse tratamento de erro impede o programa de encerrar de forma inesperada.
	try // O laço try tenta realizar o que está nele, caso não consiga lança a exceção para o catch.
	{
		/* O elemento de acesso at retorna uma exceção caso tentem
		acessar uma posição que o vector não possui. */
		lista_p.at(pos).imprimeDados();
	}catch(out_of_range const& excecao) // O catch realiza o tratamento do erro e retoma de onde o try parou.
	{
		cout << excecao.what() << endl;
		return false;
	}
	
	return false;
}

bool Lista::removerPorCPF(string cpf)
{
	unsigned count(0);
	for(unsigned i(0); i < lista_p.size(); i++)
	{
		if(lista_p[i].getCPF() == cpf)
		{
			lista_p.erase(lista_p.begin() + i);
			return true;
		}
		else
			count++;
	}
	if(count == lista_p.size())
		return false;
	
	return false;
}

void Lista::imprimirLista() const
{
	for(unsigned i(0); i < lista_p.size(); i++)
	{
		cout << i+1 << "ª Pessoa: " << endl;
		lista_p[i].imprimeDados();
		cout << endl;
	}
}

void Lista::ordenaNome(void)
{
	int smallest; // indice do menor elemento

    // itera sobre size - 1 elementos
    for(unsigned i = 0; i < lista_p.size() - 1; i++)
    {
        smallest = i; // primeiro indice do array

        // faz um loop para localizar o indice do menor elemento
        for(unsigned index = i + 1; index < lista_p.size(); index++)
        {
        	// > 0 
            if(lista_p[index].getNome().compare(lista_p[smallest].getNome()) < 0)
            {
                smallest = index;
            }
        }
		Pessoa pessoa_auxiliar;
		pessoa_auxiliar = lista_p[i];
    	lista_p[i] = lista_p[smallest];
    	lista_p[smallest] = pessoa_auxiliar;
    } // fim do for
} // fim da funcao selectionSort

void Lista::ordenaCPF(void)
{
	int smallest; // indice do menor elemento

    // itera sobre size - 1 elementos
    for(unsigned i = 0; i < lista_p.size() - 1; i++)
    {
        smallest = i; // primeiro indice do array

        // faz um loop para localizar o indice do menor elemento
        for(unsigned index = i + 1; index < lista_p.size(); index++)
        {
            if(lista_p[index].getCPF().compare(lista_p[smallest].getCPF()) < 0)
            {
                smallest = index;
            }
        }
		Pessoa pessoa_auxiliar;
		pessoa_auxiliar = lista_p[i];
    	lista_p[i] = lista_p[smallest];
    	lista_p[smallest] = pessoa_auxiliar;
    } // fim do for
} // fim da funcao selectionSort

void Lista::ordenaIdade(void)
{
	int smallest; // indice do menor elemento

    // itera sobre size - 1 elementos
    for(unsigned i = 0; i < lista_p.size() - 1; i++)
    {
        smallest = i; // primeiro indice do array

        // faz um loop para localizar o indice do menor elemento
        for(unsigned index = i + 1; index < lista_p.size(); index++)
        {
            if(lista_p[index].getIdade() < lista_p[smallest].getIdade())
            {
                smallest = index;
            }
        }
		Pessoa pessoa_auxiliar;
		pessoa_auxiliar = lista_p[i];
    	lista_p[i] = lista_p[smallest];
    	lista_p[smallest] = pessoa_auxiliar;
    } // fim do for
} // fim da funcao selectionSort

void Lista::ordenaPeso(void)
{
	int smallest; // indice do menor elemento

    // itera sobre size - 1 elementos
    for(unsigned i = 0; i < lista_p.size() - 1; i++)
    {
        smallest = i; // primeiro indice do array

        // faz um loop para localizar o indice do menor elemento
        for(unsigned index = i + 1; index < lista_p.size(); index++)
        {
            if(lista_p[index].getPeso() < lista_p[smallest].getPeso())
            {
                smallest = index;
            }
        }
		Pessoa pessoa_auxiliar;
		pessoa_auxiliar = lista_p[i];
    	lista_p[i] = lista_p[smallest];
    	lista_p[smallest] = pessoa_auxiliar;
    } // fim do for
} // fim da funcao selectionSort


