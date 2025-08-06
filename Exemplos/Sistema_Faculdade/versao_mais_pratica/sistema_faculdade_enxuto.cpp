#include <iostream>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    //Construtor Pessoa
    Pessoa(string n, int i) : nome(n), idade(i) {}

    //Metedo de exibicao
    virtual void exibirDados() const {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }

    virtual ~Pessoa() {} // destrutor virtual
};

//Classe Aluno herdeira de Pessoa
class Aluno : public Pessoa {
public:
    int matricula;
    string curso;

    //Construtor
    Aluno(string n, int i, int m, string c) : Pessoa(n, i), matricula(m), curso(c) {}

    //Metodo especial de exibicao
    void exibirDados() const override {
        Pessoa::exibirDados(); // exibir nome e idade
        cout << "Matricula: " << matricula << endl;
        cout << "Curso: " << curso << endl;
    }
};

//Classe Professor herdeira de Pessoa
class Professor : public Pessoa {
public:
    int identificacao;
    string disciplina;

    //Construtor
    Professor(string n, int i, int id, string d = "") : Pessoa(n, i), identificacao(id), disciplina(d) {}

    //Metodo de exibicao
    void exibirDados() const override {
        Pessoa::exibirDados(); // exibe nome e idade
        cout << "Identificacao: " << idade << endl;
        cout << "Disciplina: " << disciplina << endl;
    }
};

//Classe Direcao herdeira de Professor
class Direcao : public Professor {
public:
    string cargo;

    //Construtor
    Direcao(string n, int i, int id, string cg) : Professor(n, i, id), cargo(cg) {}

    //Metodo de exibicao
    void exibirDados() const override {
        Pessoa::exibirDados();
        cout << "Identificacao: " << identificacao << endl;
        cout << "Cargo: " << cargo << endl;
    }
};

//Funcao auxiliar para ler nome e idade
void lerNomeIdade(string &nome, int &idade) {
    cout << "Digite o nome:" << endl;
    cin.ignore(); // limpar buffer
    getline(cin, nome);

    cout << "Digite a idade de " << nome << " : " << endl;
    cin >> idade;
}

//Funcao para criar as instancias
Aluno criarAluno() {
    string nome, curso;
    int idade, matricula;

    cout << "== CADASTRO DE ALUNOS == " << endl;
    lerNomeIdade(nome, idade);

    cout << "Digite a matricula de " << nome << " : " << endl;
    cin >> matricula;

    cout << "Digite o curso de " << nome << " : " << endl;
    cin.ignore(); //limpar o buffer
    getline(cin, curso);

    return Aluno(nome, idade, matricula, curso);
}

Professor criarProfessor() {
    string nome, disciplina;
    int idade, identificacao;

    cout << "== CADASTRO DE PROFESSORES == " << endl;
    lerNomeIdade(nome, idade);

    cout << "Digite a identificacao de " << nome << " : " << endl;
    cin >> identificacao;

    cout << "Digite a disciplina de " << nome << " : " << endl;
    cin.ignore(); // limpar o buffer
    getline(cin, disciplina);

    return Professor(nome, idade, identificacao, disciplina);
}

Direcao criarDirecao() {
    string nome, cargo;
    int idade, identificacao;

    cout << "== CADASTRO DIRECAO == " << endl;
    lerNomeIdade(nome, idade);

    cout << "Digite a identificacao de " << nome << " : " << endl;
    cin >> identificacao;

    cout << "Digite o cargo de " << nome << " : " << endl;
    cin.ignore(); //limpar o buffer
    getline(cin, cargo);

    return Direcao(nome, idade, identificacao, cargo);
}

//Funcao principal
int main() {
    int opcao;

    cout << "Escolha uma opcao para cadastrar:\n1.Aluno\n2.Professor\n3.Direcao " << endl;
    cin >> opcao;
    cout << "-------------------- " << endl;

    Pessoa* pessoa = nullptr; // ponteiro para Pessoa, que nao aponta para nada inicialmente

    switch(opcao) {
        case 1:
            pessoa = new Aluno(criarAluno());
            break;

        case 2:
            pessoa = new Professor(criarProfessor());
            break;

        case 3:
            pessoa = new Direcao(criarDirecao());
            break;

        default:
            cout << "Opcao invalida! " << endl;
            return 1;
    }

    cout << "\n==DADOS CADASTRADOS ==\n " << endl;
    pessoa->exibirDados();
    delete pessoa;

    return 0;
}
