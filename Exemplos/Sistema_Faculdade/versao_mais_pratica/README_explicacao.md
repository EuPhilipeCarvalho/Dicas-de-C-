# 📘  Conceitos Utilizados no Código
Porucrei formas mais praticas de realizar o mesmo ```sistema_faculdade```, que eh um bom exemplo do uso de Programação Orientada a Objetos em C++.

### Conceitos abordados:

#### ✅ 1. Inicialização de atributos com : (lista de inicialização)
```cpp
Pessoa(string n, int i) : nome(n), idade(i) {}
```
Forma mais eficiente de inicializar atributos no construtor.

Boa prática para evitar inicialização dupla e garantir desempenho.

#### ✅ 2. Métodos virtual e uso de override
```cpp
virtual void exibirDados() const;
void exibirDados() const override;
```
Permitem sobrescrever métodos da classe base nas derivadas.
O ```virtual``` habilita polimorfismo e o ```override``` garante que estamos de fato sobrescrevendo corretamente.

#### ✅ 3. Destrutor virtual
```cpp
virtual ~Pessoa() {}
```
Garante que objetos derivados sejam destruídos corretamente quando usados via ponteiro para a classe base e evita vazamento de memória.

#### ✅ 4. Uso de ClasseBase::metodo()
```cpp
Pessoa::exibirDados();
```
Permite reutilizar comportamentos da classe base em métodos sobrescritos.

#### ✅ 5. Polimorfismo com ponteiro para a classe base
```cpp
Pessoa* pessoa = nullptr;
pessoa = new Aluno(...);
```
Permite que o programa trate diferentes tipos de forma genérica. O ```delete pessoa;``` é necessário para liberar memória alocada com new.