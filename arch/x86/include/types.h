/**
 * $Id: types.h,v 1.3 2005/04/20 21:35:32 nomenquis Exp $
 *
 * $Log: types.h,v $
 * Revision 1.2  2005/04/20 15:26:35  nomenquis
 * more and more stuff actually works
 *
 * Revision 1.1  2005/04/12 17:46:43  nomenquis
 * added lots of files
 *
 *
 */

#ifndef _TYPES_H_
#define _TYPES_H_

typedef char int8;
typedef unsigned char uint8;

typedef short int16;
typedef unsigned short uint16;

typedef int int32;
typedef unsigned int uint32;

typedef unsigned int pointer;

typedef unsigned int size_t;

#pragma poison int
#pragma poison short


#endif