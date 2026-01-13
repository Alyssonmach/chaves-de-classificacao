#ifndef LISTA_H
#define LISTA_H

#include "Pessoa.h"

class Lista
{
	private:
		vector<Pessoa> lista_p;
	public:
		Lista();
		~Lista();
		bool inserirPessoa(Pessoa);
		bool salvarLista();
		bool pesquisarPorNome(string) const;
		bool pesquisarPorPosicao(unsigned) const;
		bool removerPorCPF(string);
		void imprimirLista() const;
		void ordenaNome(void);
		void ordenaCPF(void);
		void ordenaIdade(void);
		void ordenaPeso(void);
		
};

#endif
