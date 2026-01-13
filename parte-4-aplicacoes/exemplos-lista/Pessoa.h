#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
	private:
		string nome;
		string cpf;
		short idade;
		float peso;
	public:
		Pessoa();
		Pessoa(string, string, short, float);
		void setNome(string);
		void setCPF(string);
		void setIdade(short);
		void setPeso(float);
		string getNome() const;
		string getCPF() const;
		short getIdade() const;
		float getPeso() const;
		void imprimeDados() const;
};

#endif
