// Arquivo destinado as sobrecargas utilizadas no projeto.

#include "Pessoa.h"

// Sobrecarregando o operador de saída << para que possa gravar um objeto inteiro em um arquivo.
ofstream& operator << (ofstream& arquivo, Pessoa& p)
{
	arquivo << endl << p.getNome() << endl;
	arquivo << p.getCPF() << endl;
	arquivo << p.getIdade() << endl;
	arquivo << p.getPeso();
	
	return arquivo;
}

// Sobrecarregando o operador de entrada >> para que possa ler um objeto inteiro de um arquivo.
ifstream& operator >> (ifstream& arquivo, Pessoa& p)
{
	string nome, cpf;
	short idade;
	float peso;
	
	getline(arquivo, nome);
	p.setNome(nome);
	getline(arquivo, cpf);
	p.setCPF(cpf);
	arquivo >> idade;
	p.setIdade(idade);
	arquivo >> peso;
	p.setPeso(peso);
	
	return arquivo;
}
