/*************************************************************** PUBLIC INTERFACE *****************************************************************/

#ifndef EGG_H
#define EGG_H

/**
 * @class Egg
 * @brief Nó de uma lista encadeada que armazena informações de ovos
 *
 * Cada objeto Egg representa um elemento da lista contendo:
 * - um identificador único
 * - o preço do ovo
 * - um ponteiro para o próximo elemento da lista
 *
 * Invariantes da estrutura:
 * - next aponta para outro objeto Egg ou nullptr (fim da lista)
 * - identifier representa um identificador válido do item
 */
class Egg{
    private:
        int _identifier;   ///< Identificador único do ovo
        float _price;      ///< Preço do ovo
        Egg *_next;       ///< Ponteiro para o próximo nó da lista

    public:

        /**
         * @brief Constrói um novo nó da lista
         *
         * @param identifier Identificador do ovo
         * @param price Preço associado ao ovo
         *
         * POST:
         * - next é inicializado como nullptr
         */
        Egg(int identifier, float price);

        /**
         * @brief Retorna o identificador do ovo
         *
         * @return Identificador armazenado no nó
         */
        int getIdentifier();

        /**
         * @brief Retorna o preço do ovo
         *
         * @return Valor do preço armazenado
         */
        float getPrice();

        /**
         * @brief Retorna o próximo elemento da lista
         *
         * @return Ponteiro para o próximo nó ou nullptr se for o último
         */
        Egg *getNext();

        /**
         * @brief Define um novo identificador para o ovo
         *
         * @param identifier Novo identificador
         */
        void setIdentifier(int identifier);

        /**
         * @brief Define um novo preço para o ovo
         *
         * @param price Novo preço do ovo
         */
        void setPrice(float price);

        /**
         * @brief Define o próximo elemento da lista
         *
         * @param next Ponteiro para o próximo nó
         *
         * POST:
         * - this->next passa a apontar para o nó informado
         */
        void setNext(Egg *next);
};

#endif

/**************************************************************************************************************************************************/