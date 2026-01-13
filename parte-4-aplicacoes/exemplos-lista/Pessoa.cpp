#include "Pessoa.h"

Pessoa::Pessoa()
{
	this->nome = " ";
	this->cpf = " ";
	this->idade = 0;
	this->peso = 0.0;
}

Pessoa::Pessoa(string nome, string cpf, short idade, float peso)
{
	this->nome = nome;
	this->cpf = cpf;
	this->idade = idade;
	this->peso = peso;
}

void Pessoa::setNome(string nome)
{
	this->nome  = nome;
}

void Pessoa::setCPF(string cpf)
{
	this->cpf  = cpf;
}

void Pessoa::setIdade(short idade)
{
	this->idade = idade;
}

void Pessoa::setPeso(float peso)
{
	this->peso = peso;
}

string Pessoa::getNome() const
{
	return nome;
}

string Pessoa::getCPF() const
{
	return cpf;
}

short Pessoa::getIdade() const
{
	return idade;
}

float Pessoa::getPeso() const
{
	return peso;
}

void Pessoa::imprimeDados() const
{
	cout << "Nome: " << getNome()
		<< "\nCPF: " << getCPF()
		<< "\nIdade: " << getIdade()
		<< "\nPeso: " << getPeso() << endl;
}
