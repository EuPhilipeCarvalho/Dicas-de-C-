# 🧱 Introdução à Programação Orientada a Objetos em C++

Comecei minha introdução a POO e agora estou entendendo um pouco mais, já tinha visto algumas coisas em ***Python***, mas de forma breve. Essa foi a forma que eu tentei explicar pra mim mesmo o que é POO

#### " é um jeito de programar pensando em objetos que existem no mundo real. Cada objeto tem características (atributos) e pode fazer algumas coisas (métodos). Usar POO ajuda a organizar melhor o código, reaproveitar partes dele e deixar tudo mais fácil de entender."

Sendo assim, decidi criar este repositório que apresenta exemplos simples e comentados sobre conceitos fundamentais da Programação Orientada a Objetos (POO) em ***C++***, ideais para iniciantes (assim como eu kk) que desejam entender sobre como classes, atributos, métodos e herança funcionam na prática. 

# 📚 O que você vai encontrar aqui
### 🔹 Classes
Uma classe é como um molde para criar objetos. Ela define as características (atributos) e ações (métodos) que os objetos terão.

``` cpp
class Pessoa {
public:
    std::string nome;
    int idade;

    void exibirDados();
};
```

### 🔹 Atributos
São as variáveis internas da classe, que armazenam dados dos objetos. No exemplo acima, nome e idade são atributos.

### 🔹 Métodos
São as funções dentro da classe, que definem o comportamento do objeto. Por exemplo:

``` cpp
void exibirDados() {
    std::cout << "Nome: " << nome << std::endl;
}
```

### 🔹 Construtores
Funções especiais usadas para inicializar os atributos quando o objeto é criado.

### 🔹 Herança
Permite que uma classe herde atributos e métodos de outra, evitando repetição de código. Exemplo:

``` cpp
class Aluno : public Pessoa {
public:
    int matricula;
    std::string curso;
};
```

### 🧪 Exemplos práticos
* Criar objetos a partir de classes
* Inicializar com construtores
* Usar métodos para exibir dados
* Aplicar herança entre classes (ex.: Pessoa e Aluno) 


# 🚀 Em breve...
Tenho como objetivo atualizar este repositório com novos conteúdos conforme avanço nos estudos: encapsulamento, polimorfismo, composição e mais!


# 📌 Autor
### Philipe Carvalho
Estudante de Análise e Desenvolvimento de Sistemas (2º semestre)
