/*
 * cenario.h
 *
 *  Created on: 5 de jun de 2023
 *      Author: joaos
 */

#ifndef CENARIO_H_
#define CENARIO_H_
#include <vector>
#include "barra.h"
#include "bloco.h"
#include "bola.h"

class cenario
{
public:
    cenario();
    virtual ~cenario();
    void create_new_blocos();

private:
    barra objBarra;
    std::vector<bloco*> vecBlocos;
    bola  objBola;
};

#endif /* CENARIO_H_ */
