/*
 * barra.h
 *
 *  Created on: 5 de jun de 2023
 *      Author: joaos
 */

#ifndef BARRA_H_
#define BARRA_H_

class barra
{
public:
    barra();
    virtual ~barra();
    void update_pos(int pos_x);
    int get_pos_x();
private:
    int pos_x;
    int length, heigth;
};

#endif /* BARRA_H_ */
