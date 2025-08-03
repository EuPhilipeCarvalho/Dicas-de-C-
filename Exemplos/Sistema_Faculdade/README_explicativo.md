# 🎓 Sistema Faculdade 

Este código é um exemplo simples de aplicação de Programação Orientada a Objetos (POO) em C++, simulando um simples sistema de cadastro para alunos e professores.

## 🔍 O que o código faz
* Pergunta ao usuário se ele quer cadastrar um aluno ou professor;
* Solicita os dados pelo terminal (nome, idade, matrícula/curso ou disciplina);
* Cria um objeto (Aluno ou Professor) com base nos dados informados;
* Exibe os dados organizados na tela.

## 🧠 Conceitos utilizados

### 🔸 Classes e Herança

O código define três classes:

* Pessoa: classe base com nome e idade.
* Aluno: herda de Pessoa e adiciona matricula e curso.
* Professores: herda de Pessoa e adiciona disciplina.

### 🔸 Métodos
Cada classe possui métodos para exibir os dados no terminal, como ```exibirDados()```.

### 🛠️ Comandos importantes usados

| Comando                |              Explicação |
-------------------------|--------------------------
|```std::``` | Indica uso da biblioteca padrão do C++ (ex.: std::cout, std::string).|
|```std::cout```  |Imprime algo no terminal (saída de dados). Funciona como o print(), printf() em Python e C respectivamente. |
|```std::cin ```|Lê dados digitados pelo usuário (entrada padrão).|
|```std::getline(std::cin, variavel)```	| Lê uma linha completa com espaços (ex: nomes ou frases). Muito útil quando o cin não basta.|
|```std::cin.ignore()``` | Limpa o "enter" deixado na entrada anterior, para evitar problemas com getline().|
|```public``` | Membros "public" de uma classe podem ser acessados de qualquer lugar, ou seja, fora da classe, por outros objetos ou funções.|
| ```private``` | Membros "private" de uma classe só podem ser acessados dentro da própria classe ou por seus métodos e amigos (funções ou classes amigas). Eles são ocultos para o mundo externo.
|```protected``` | Membros "protected" são acessíveis dentro da própria classe e por classes que herdam dela, mas não fora dessas classes.

Obs: **namespace** em C++ refere-se a um mecanismo que permite organizar o código em blocos para evitar conflitos de nomes. "Namespace" é uma forma de encapsular identificadores (nomes de variáveis, funções, classes, etc.) dentro de um espaço nomeado, assim podemos ter múltiplos itens com o mesmo nome, mas que pertencem a "namespaces" diferentes.


### ✅ Exemplo de uso no terminal

``` yaml

Escolha uma opcao: 1.Aluno | 2.Professor 
1
== CADASTRO Alunos == 
Digite o nome do aluno(a): João da Silva
Digite a idade de João da Silva : 
21
Digite a matricula de João da Silva : 
12345
Digite o curso de João da Silva : 
Engenharia de Software

Nome: João da Silva
Idade: 21
Matricula: 12345
Curso: Engenharia de Software
```

### 📁 Organização da pasta
Este arquivo está na pasta exemplos/sistema_faculdade/. Outros exemplos também terão seus próprios diretórios e README explicativos como esse.