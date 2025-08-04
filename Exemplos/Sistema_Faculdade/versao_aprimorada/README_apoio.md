# Explicações sobre o código
### Por que foi utilizado "" (string vazia) como valor no parâmetro ```disciplina``` para objetos da classe **Direcao**?

A classe Direcao herda de Professor, que por sua vez herda de Pessoa. O construtor da classe Professor exige um parâmetro disciplina, mas no caso de um objeto da classe Direcao, esse campo não é relevante. Para contornar isso, foi passada uma string vazia ("") como valor padrão no momento da chamada do construtor de Professor.

```cpp
Direcao(string n, int i, int id, string c) : Professor(n, i, id, "") {
    cargo = c;
}
```

### Por que usar ""?
A string vazia foi utilizada para satisfazer o requisito do construtor de Professor, sem atribuir um valor real para a disciplina, já que essa informação não é necessária para objetos da classe Direcao.

### Abordagem recomendada
Uma alternativa mais 'bonita' e flexível é definir um valor padrão diretamente no parâmetro do construtor de Professor. Assim, a classe Direcao pode omitir completamente o argumento disciplina ao invocar o construtor da classe-base.

```cpp
class Professor : public Pessoa {
public:
    Professor(string n, int i, int id, string d = "") : Pessoa(n, i) {
        identificacao = id;
        disciplina = d;
    }
};
```

Com isso, o construtor de Direcao se torna mais limpo e sem a necessidade de passar uma string vazia explicitamente.

### Melhorias realizadas posteriormente

Foi adotada uma estrutura modular para organizar melhor o código. Em vez de centralizar tudo na função main(), foram criadas funções auxiliares responsáveis pela criação e exibição de objetos (Aluno, Professor e Direcao). O que deixou o código mais limpo, legível e de fácil manutenção.

Além disso, foi utilizada passagem por referência ```&``` nas funções de exibição. Em C++, passar objetos por referência evita cópias desnecessárias, o que melhora o desempenho, especialmente quando se trabalha com objetos complexos ou grandes.

#### Exemplo de passagem por referência:

```cpp

void exibir_Aluno(const Aluno &aluno) {
    aluno.exibirDadosAluno();
}
```

Neste exemplo, ```const Aluno &aluno``` significa que a função recebe uma referência constante ao objeto aluno. Isso evita a cópia do objeto e garante que ele não será modificado dentro da função. Essa prática torna o código mais eficiente e seguro.