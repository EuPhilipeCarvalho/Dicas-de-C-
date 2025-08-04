#include <iostream>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    // Construtor
    Pessoa(string n, int i) {
        nome = n;
        idade = i;
    }

    // metodo especial
    void exibirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }
};

// Classe herderia Alunos de Pessoa
class Aluno : public Pessoa {
public:
    int matricula;
    string curso;

    //Construtor
    Aluno(string n, int i, int m, string c) : Pessoa(n, i) {
        matricula = m;
        curso = c;
    }

    // Metodo especial para exibicao
    void exibirDadosAluno() {
        exibirDados();
        cout << "Matricula: " << matricula << endl;
        cout << "Curso :" << curso << endl;
    }
};

class Professor : public Pessoa {
public:
    int identificacao;
    string disciplina;

    //Construtor
    Professor(string n, int i, int id, string d = "") : Pessoa(n, i) {
        identificacao = id;
        disciplina = d;
    }

    //Metodo especial de exibicao
    void exibirDadosProfessor() {
        exibirDados();
        cout << "Identificacao: " << identificacao << endl;
        cout << "Disciplina: " << disciplina << endl;
    }
};

class Direcao : public Professor {
public:
    string cargo;

    //Construtor
    Direcao(string n, int i, int id, string cg) : Professor(n, i, id) {
        cargo = cg;
    }

    //Metodo especial de exibicao
    void exibirDadosDirecao() {
        exibirDados();
        cout << "Identificacao: " << identificacao << endl;
        cout << "Cargo: " << cargo << endl;
    }
};

//Funcao para criar um aluno
Aluno criarAluno() {
    string nome, curso;
    int idade, matricula;

    cout << "== CADASTRO ALUNOS == " << endl;

    cout << "Digite o nome do aluno(a): " << endl;
    cin.ignore(); // limpar buffer
    getline(cin, nome);

    cout << "Digite a idade de: " << nome << endl;
    cin >> idade;

    cout << "Digite a matricula de: " << nome << endl;
    cin >> matricula;

    cout << "Digite o curso de: " << nome << endl;
    cin.ignore();
    getline(cin, curso);

    return Aluno(nome,idade, matricula, curso);

}

//Funcao para criar um professor
Professor criarProfessor() {
    string nome, disciplina;
    int idade, identificacao;

    cout << "Digite o nome do professor(a): " << endl;
    cin.ignore(); // limpar buffer
    getline(cin, nome);

    cout << "Digite a idade de: " << nome << endl;
    cin >> idade;

    cout << "Digite a identificacao de: " << nome << endl;
    cin >> identificacao;

    cout << "Digite a disciplina de: " << nome << endl;
    cin.ignore(); //limpar buffer
    getline(cin, disciplina);

    return Professor(nome, idade, identificacao, disciplina);
}
//Funcao para criar um diretor
Direcao criarDiretor() {
    string nome, cargo;
    int idade, identificacao;

    cout << "Digite o nome do profissional: " << endl;
    cin.ignore(); // limpar buffer
    getline(cin, nome);

    cout << "Digite a idade de: " << nome << endl;
    cin >> idade;

    cout << "Digite a identificacao de: " << nome << endl;
    cin >> identificacao;

    cout << "Digite o cargo de: " << nome << endl;
    cin.ignore(); // limpar buffer
    getline(cin, cargo);

    return Direcao(nome, idade, identificacao, cargo);
}

// funcao para exibir os dados de um aluno
void exibir_Aluno(Aluno &aluno) {
    aluno.exibirDadosAluno();
}

// funcao para exibir os dados de um professor
void exibir_Professor(Professor &professor) {
    professor.exibirDadosProfessor();
}

// funcao para exibir os dados de um diretor
void exibir_Diretor(Direcao &direcao) {
    direcao.exibirDadosDirecao();
}

int main() {
    int opcao;

    cout << "Escolha uma opcao para cadastrar: " << endl;
    cout << "1.Alunos | 2.Professores | 3.Direcao " << endl;
    cin >> opcao;

    if (opcao == 1) {
        cout << "== CADASTRO ALUNOS == " << endl;
        Aluno aluno = criarAluno(); //Chama a funcao criar aluno
        cout << "--------------------- " << endl;
        exibir_Aluno(aluno); // Chama a funcao de exibir os dados do aluno

    } else if (opcao == 2) {
        cout << "== CADASTRO PROFESSORES == " << endl;
        Professor professor = criarProfessor(); //Chama a funcao criar professor
        cout << "--------------------- " << endl;
        exibir_Professor(professor); // Chama a funcao exibir dados do professor

    } else if (opcao == 3) {
        Direcao direcao = criarDiretor(); // Chama a funcao de criar diretor
        cout << "--------------------- " << endl;
        exibir_Diretor(direcao); // Chama a funco de exibir dados de um diretor

    } else {
        cout << "Opcao invalida! " << endl;
    }

    return 0;
}
