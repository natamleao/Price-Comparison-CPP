/*************************************************************** PUBLIC INTERFACE *****************************************************************/

#ifndef LIST_H
#define LIST_H

#include "egg.h"
#include <stddef.h>

/**
 * @class List
 * @brief Implementa uma lista encadeada de objetos Egg
 *
 * A estrutura mantém:
 * - um ponteiro para o primeiro elemento da lista
 * - o número total de elementos armazenados
 *
 * Invariantes da estrutura:
 * - begin aponta para o primeiro nó da lista ou nullptr se a lista estiver vazia
 * - size representa corretamente a quantidade de elementos na lista
 */
class List{
    private:
        size_t _size;   ///< Número de elementos armazenados na lista
        Egg *_begin;    ///< Ponteiro para o primeiro nó da lista

        /**
         * @brief Incrementa o tamanho da lista
         *
         */
        void incrementSize(); 

        /**
         * @brief Decrementa o tamanho da lista
         *
         */
        void decrementSize(); 

    public:

        /**
         * @brief Construtor da lista
         *
         * POST:
         * - size é inicializado como 0
         * - begin é inicializado como nullptr
         */
        List();

        /**
         * @brief Retorna a quantidade de elementos da lista
         *
         * @return Número de elementos armazenados
         */
        size_t getSize();

        /**
         * @brief Retorna o primeiro elemento da lista
         *
         * @return Ponteiro para o primeiro nó ou nullptr se a lista estiver vazia
         */
        Egg *getBegin();

        /**
         * @brief Define explicitamente o tamanho da lista
         *
         * @param size Novo valor para o tamanho da lista
         */
        void setSize(size_t size);

        /**
         * @brief Define o primeiro elemento da lista
         *
         * @param egg Ponteiro para o novo primeiro nó
         */
        void setBegin(Egg *egg);

        /**
         * @brief Busca um item na lista
         * 
         * @param identifier Identificador do ovo
         * @param f Flag para informar se o item pertence ou não a lista
         */
        Egg *searchItem(int identifier, int *f);
        
        /**
         * @brief Adiciona um novo elemento à lista
         *
         * Cria um novo objeto Egg com o identificador e preço informados
         * e o insere na lista
         *
         * @param identifier Identificador do ovo
         * @param price Preço do ovo
         */
        void add(int identifier, float price);

        /**
         * @brief Atualiza o identificador de um ovo da páscoa
         * 
         * @param list Lista de ovos
         * @param identifier Identificador do ovo
         * @param newIdentifier O novo identificador do ovo
         */
        void updateItemIdentifier(Egg *egg, int newIdentifier);

        /**
         * @brief Atualiza o preço de um ovo da páscoa
         * 
         * @param list Lista de ovos
         * @param identifier Identificador do ovo
         * @param newPrice O novo preço do ovo
         */
        void updateItemPrice(Egg *egg, float newPrice);

        /**
         * @brief Atualiza o identificador e o preço de um ovo da páscoa
         * 
         * @param list Lista de ovos
         * @param identifier Identificador do ovo
         * @param newIdentifier O novo identificador do ovo
         * @param newPrice O novo preço do ovo
         */
        void updateItem(Egg *egg, int newIdentifier, int newPrice);

        /**
         * @brief Remove um item da lista de ovos
         * 
         * @param identifier Identificador do ovo
         */
        void removeItem(int identifier, int *f);

        /**
         * @brief Imprime a lista de ovos mostrando o identificador e o preço
         * 
         */
        void print();

        /**
         * @brief Calcula o preço médio dos ovos da lista
         *
         * @return Média dos preços armazenados
         */
        float averagePrice();

        /**
         * @brief Busca ovos com determinado preço
         *
         * A implementação pode percorrer a lista e identificar
         * elementos que atendam ao critério de preço definido
         */
        void searchPrice();

        /**
         * @brief Destrutor da lista
         *
         * Libera todos os nós alocados dinamicamente
         * para evitar vazamento de memória
         */
        ~List();
};

#endif

/**************************************************************************************************************************************************/