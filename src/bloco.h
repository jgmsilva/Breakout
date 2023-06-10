/*
 * bloco.h
 *
 *  Created on: 5 de jun de 2023
 *      Author: joaos
 */

#ifndef BLOCO_H_
#define BLOCO_H_

class bloco
{
public:
    bloco();
    virtual ~bloco();
    int get_points();
private:
    int heigth, length;
    int points;
};

#endif /* BLOCO_H_ */
