/*
 * cenario.cpp
 *
 *  Created on: 5 de jun de 2023
 *      Author: joaos
 */

#include "cenario.h"

cenario::cenario()
{
    // TODO Auto-generated constructor stub

}

cenario::~cenario()
{
    // TODO Auto-generated destructor stub
}

void cenario::create_new_blocos(){

    for(int i = 0; i < 5; i++){
        for(int i=0; i<5; i++){
            vecBlocos.push_back(new bloco());
        }
    }
}
