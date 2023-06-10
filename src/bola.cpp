/*
 * bola.cpp
 *
 *  Created on: 5 de jun de 2023
 *      Author: joaos
 */

#include "bola.h"

bola::bola()
{
    pos_x = 200;
    pos_y = 200;
    vel_x = 0;
    vel_y = -1;
    // TODO Auto-generated constructor stub

}

bola::~bola()
{
    // TODO Auto-generated destructor stub
}

void bola::update_pos(){
    pos_x += vel_x;
    pos_y += vel_y;
}
