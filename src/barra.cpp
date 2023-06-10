/*
 * barra.cpp
 *
 *  Created on: 5 de jun de 2023
 *      Author: joaos
 */

#include "barra.h"

barra::barra()
{
    pos_x = 200;
    // TODO Auto-generated constructor stub

}

barra::~barra()
{
    // TODO Auto-generated destructor stub
}

void barra::update_pos(int px){
    pos_x = px;
}

int barra::get_pos_x(){
    return pos_x;
}
