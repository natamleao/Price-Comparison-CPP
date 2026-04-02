# *Price Comparison – Easter Eggs* 

![Language](https://img.shields.io/badge/language-C++-blue)
![Standard](https://img.shields.io/badge/standard-C++20-orange)
![Build](https://img.shields.io/badge/build-Makefile-green)
![Data Structure](https://img.shields.io/badge/data_structure-linked_list-yellow)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

---

## Sobre o projeto

> [!NOTE]
> Este projeto implementa um sistema simples para **comparação de preços de ovos de Páscoa**, utilizando **lista encadeada em C++** como estrutura de dados principal.

O programa permite registrar diferentes produtos, armazenando:

* identificador
* preço

A partir desses dados, o sistema analisa os valores cadastrados e informa **se vale a pena realizar a compra**, ajudando na tomada de decisão.

O objetivo do projeto é praticar **conceitos fundamentais de programação em C++ e estruturas de dados**.

---

> [!IMPORTANT]
> ## Tecnologias utilizadas
>
> * **C++ (padrão C++20)**
> * **GNU Make** para automação da compilação
> * Estrutura de dados: **lista encadeada**

---

## Conceitos aplicados

Este projeto utiliza diversos conceitos importantes da linguagem C++:

* Manipulação de ponteiros
* Estrutura de dados: **lista encadeada**
* Encapsulamento com classes
* Modularização do código
* Separação entre **interface e implementação**
* Organização de projetos em múltiplos diretórios
* Automação da compilação com **Makefile**

---

## Funcionalidades

### Adicionar ovos de Páscoa

Permite adicionar novos itens à lista informando:

* identificador
* preço

### Atualizar dados

Permite modificar os dados de um item já cadastrado:

* atualizar apenas o identificador
* atualizar apenas o preço
* atualizar ambos

### Remover item

Remove um ovo de Páscoa da lista através do **identificador**.

### Exibir lista

Mostra todos os itens cadastrados contendo:

* identificador
* preço

### Verificar resultado

Analisa os preços cadastrados e informa se **vale a pena ou não realizar a compra**, com base nos valores presentes na lista, respondendo:

```
+ OVO DE PÁSCOA %d: TALVEZ DÊ PARA COMPRAR
+ OVO DE PÁSCOA %d: ACHO QUE É MELHOR COMPRAR O VALOR EM BARRA DE CHOCOLATE
+ OVO DE PÁSCOA %d: MELHOR COMPRAR UMA BARRA DE OURO COM ESSE DINEHIRO
```

Onde `%d` é o identificador do ovo.

---

## Representação da estrutura de dados

A lista encadeada pode ser representada da seguinte forma:

```
HEAD
 ↓
[ID:1 | 45.90] → [ID:2 | 39.50] → [ID:3 | 52.00] → NULL
```

Cada nó da lista possui a seguinte estrutura:

```cpp
class Egg{
    private:
        int _identifier;   ///< Identificador único do ovo
        float _price;      ///< Preço do ovo
        Egg *_next;       ///< Ponteiro para o próximo nó da lista
};
```

---

## Estrutura do projeto

```
Price-Comparison-CPP/
│
├── app/       # Arquivo principal da aplicação (main)
├── bin/       # Executáveis gerados após a compilação
├── include/   # Arquivos de cabeçalho (.h)
├── build/     # Arquivos objeto (.o)
├── src/       # Código-fonte da aplicação (.cpp)
│
├── Makefile   # Regras de compilação
├── README.md  # Documentação do projeto
└── LICENSE    # Licença do projeto
```

---

## Exemplo de execução

```
+--------------------------------------------------------------------------+
+-------------------------------- BEM-VINDO -------------------------------+
+--------------------------------------------------------------------------+
+---------------------------- PÁGINA PRINCIPAL ----------------------------+
+--------------------------------------------------------------------------+
+ 1 - ADICIONAR OVO DA PÁSCOA A LISTA -------------------------------------+
+--------------------------------------------------------------------------+
+ 2 - ATUALIZAR DADOS DE UM OVO DA PÁSCOA ---------------------------------+
+--------------------------------------------------------------------------+
+ 3 - REMOVER UM OVO DA PÁSCOA DA LISTA -----------------------------------+
+--------------------------------------------------------------------------+
+ 4 - IMPRIMIR A LISTA  ---------------------------------------------------+
+--------------------------------------------------------------------------+
+ 5 - VERIFICAR RESULTADO (COMPRAR OU NÃO) --------------------------------+
+--------------------------------------------------------------------------+
+ 0 - SAIR ----------------------------------------------------------------+
+--------------------------------------------------------------------------+
+ INFORME A OPÇÃO DESEJADA: 
```

---

> [!IMPORTANT]
> ## Requisitos
>
> Para compilar e executar o projeto é necessário:
>
> * **GCC ou Clang com suporte a C++20**
> * **GNU Make**
> * Sistema **Linux ou macOS**

---

## Instalação

Clone o repositório:

```bash
git clone git@github.com:natamleao/Price-Comparison-CPP.git
cd Price-Comparison-CPP
```

---

## Compilação

Compile o projeto com:

```bash
make
```

---

## Execução

Execute o programa com:

```bash
make run
```

---

## Limpeza do projeto

Remover arquivos compilados:

```bash
make clean
make cleanapp
```

---

> [!WARNING]
> ## Licença
> 
> Este projeto está licenciado sob a **MIT License**.

---

## Autor

**Natam Leão Ferreira**

Conclusão: **2026**

---
