#pragma once
#include <bits/stdc++.h>
#include "Endereco.h"
#include "DataNascimento.h"

using namespace std;

class Pessoa {
protected:
    int id;
    string nome;
    string sobrenome;
    Endereco endereco;
    DataNascimento data_nascimento;
    int idade;
    int altura;
    int peso;

public:
    //criar um construtor
    //criar métodos como apresentar
    //criar getters e setters

    Pessoa(int Id, string Nome, string Sobrenome, Endereco &e, DataNascimento &d, int Idade, int Altura, int Peso);
    ~Pessoa();
    void MostrarDadosPessoais();
    string NomeCompleto();
    void AlterarIdade(int IdadeN);
    void AlterarAltura(int AlturaN);
    void AlterarPeso(int PesoN);

};
};