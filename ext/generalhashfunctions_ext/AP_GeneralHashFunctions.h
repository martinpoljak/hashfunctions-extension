/*
 **************************************************************************
 *                                                                        *
 *          General Purpose Hash Function Algorithms Library              *
 *                                                                        *
 * Author: Arash Partow - 2002                                            *
 * URL: http://www.partow.net                                             *
 * URL: http://www.partow.net/programming/hashfunctions/index.html        *
 *                                                                        *
 * Copyright notice:                                                      *
 * Free use of the General Purpose Hash Function Algorithms Library is    *
 * permitted under the guidelines and in accordance with the most current *
 * version of the Common Public License.                                  *
 * http://www.opensource.org/licenses/cpl1.0.php                          *
 *                                                                        *
 **************************************************************************
*/



#ifndef INCLUDE_GENERALHASHFUNCTION_C_H
#define INCLUDE_GENERALHASHFUNCTION_C_H


#include <stdio.h>


typedef unsigned int (*hash_function)(unsigned char*, unsigned int len);


unsigned int RSHash  (unsigned char* str, unsigned int len);
unsigned int JSHash  (unsigned char* str, unsigned int len);
unsigned int PJWHash (unsigned char* str, unsigned int len);
unsigned int ELFHash (unsigned char* str, unsigned int len);
unsigned int BKDRHash(unsigned char* str, unsigned int len);
unsigned int SDBMHash(unsigned char* str, unsigned int len);
unsigned int DJBHash (unsigned char* str, unsigned int len);
unsigned int DEKHash (unsigned char* str, unsigned int len);
unsigned int BPHash  (unsigned char* str, unsigned int len);
unsigned int FNVHash (unsigned char* str, unsigned int len);
unsigned int APHash  (unsigned char* str, unsigned int len);


#endif
