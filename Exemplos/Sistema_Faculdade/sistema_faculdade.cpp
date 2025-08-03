#include <iostream>

//Classe principal Pessoa
class Pessoa {
public:
    std::string nome;
    int idade;

    //Metodo Construtor que define o comportamento ao atribuir valores
    Pessoa(std::string n, int i) {
        nome = n;
        idade = i;
    }

    //Metodo especial para exibir os dados
    void exibirDados() {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Idade: " << idade << std::endl;
    }
};

//Classe Aluno herdeira da Pessoa
class Aluno : public Pessoa {
public:
    int matricula;
    std::string curso;

    //Construtor de comportamento ao atribuir valores
    Aluno(std::string n, int i, int m, std::string c) : Pessoa(n, i) {
        matricula = m;
        curso = c;
    }

    //Metodo para exibir os dados
    void exibirDadosAlunos() {
        exibirDados();
        std::cout << "Matricula: " << matricula << std::endl;
        std::cout << "Curso: " << curso << std::endl;
    }
};

//Classe Professor herdeira da Pessoa
class Professores : public Pessoa {
public:
    std::string disciplina;

    //Construtor de comportamento ao atribuir valores
    Professores(std::string n, int i, std::string d) : Pessoa(n, i) {
        disciplina = d;
    }

    //Metodo para exibir os dados
    void exibirDadosProfessor() {
        exibirDados();
        std::cout << "Disciplina: " << disciplina << std::endl;
    }
};

int main() {
    int opcao;
    // Escolhendo se o usuario quer criar um aluno ou professor
    std::cout << "Escolha uma opcao: 1.Aluno | 2.Professor " << std::endl;
    std::cin >> opcao;

    if(opcao == 1) {
        std::string nome, curso;
        int idade, matricula;

        //Menu interativo
        std::cout << "== CADASTRO Alunos == " << std::endl;

        std::cout << "Digite o nome do aluno(a): " << std::endl;
        std::cin.ignore(); //limpar o buffer
        std::getline(std::cin, nome);

        std::cout << "Digite a idade de " << nome << " : " << std::endl;
        std::cin >> idade;

        std::cout << "Digite a matricula de " << nome << " : " << std::endl;
        std::cin >> matricula;

        std::cout << "Digite o curso de " << nome << " : " << std::endl;
        std::cin.ignore(); //limpar o buffer
        std::getline(std::cin, curso);

        // criando objeto aluno e exibindo seus dados
        Aluno aluno(nome, idade, matricula, curso);
        aluno.exibirDadosAlunos();

    } else if (opcao == 2) {
        std::string nome, disciplina;
        int idade;

        //Menu interativo
        std::cout << "== CADASTRO PROFESSORES == " << std::endl;

        std::cout << "Digite o nome do professor(a): " << std::endl;
        std::cin.ignore(); //limpar o buffer
        std::getline(std::cin, nome);

        std::cout << "Digite a idade de " << nome << " : " << std::endl;
        std::cin >> idade;

        std::cout << "Digite a disciplina de " << nome << " : " << std::endl;
        std::cin.ignore(); //limpar o buffer
        std::getline(std::cin, disciplina);

        //criando objeto professor e exibindo seus dados
        Professores professor(nome, idade, disciplina);
        professor.exibirDadosProfessor();

    } else {
        std::cout << "Opcao Invalida! "<< std::endl;
    }
    return 0;
}
