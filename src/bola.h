/*
 * bola.h
 *
 *  Created on: 5 de jun de 2023
 *      Author: joaos
 */

#ifndef BOLA_H_
#define BOLA_H_

class bola
{
public:
    bola();
    virtual ~bola();
    void update_pos();
private:
    int pos_x, pos_y;
    int vel_x, vel_y;
    int radius;
};

#endif /* BOLA_H_ */
