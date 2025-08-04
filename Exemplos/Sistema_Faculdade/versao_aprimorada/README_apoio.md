# Explicacoes sobre o codigo

### Por que o uso de valor "nulo" no parâmetro disciplina em Direcao ?

A classe ```Direcao``` herda de ```Professor```, que por sua vez herda de ```Pessoa```. O construtor de ```Professor``` exige o parâmetro **disciplina**, mas no caso de um objeto ```Direcao```, esse parâmetro não é necessário. Para contornar isso, foi passado uma string vazia ```""``` para o parâmetro ```disciplina```.

``` cpp 
Direcao(string n, int i, int id, string c) : Professor(n,   i, id, "") {

    cargo = c;
}
```

### Por que usar "" ?
O valor "" (string vazia) foi utilizado para preencher o parâmetro disciplina sem atribuir um valor real, já que ele não é necessário para a classe Direcao. Isso permitiu que o construtor de Professor fosse chamado corretamente.

### Melhor abordagem
Uma alternativa mais clara seria fornecer um valor padrão para disciplina no construtor de Professor. Dessa forma, a classe Direcao poderia omitir disciplina sem a necessidade de passar uma string vazia.

``` cpp
class Professor : public Pessoa {
public:
    Professor(string n, int i, int id, string d = "") : Pessoa(n, i) {
        disciplina = d;
    }
};
```


Embora o uso de "" tenha resolvido o problema, a solução com valor padrão para disciplina é mais clara e flexível, além de ser mais fácil de manter e entender.