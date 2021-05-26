/*
 * Bit_Math.h
 *
 *  Created on: Oct 8, 2019
 *      Author: Ramy Oraby
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define Set_Bit(Var,BitNo)       Var |= (1<<BitNo)
#define Clr_Bit(Var,BitNo)       Var &= ~(1<<BitNo)
#define Toggle_Bit(Var,BitNo)    Var ^= (1<<BitNo)
#define Get_Bit(Var,BitNo)       ((Var >> BitNo) & 0b00000001)


#endif /* BIT_MATH_H_ */
