#ifndef _BASE_COMMENTS_H_INCLUDED
#define _BASE_COMMENTS_H_INCLUDED

#include "base/all/lfn/lfn.h"

#define BASE_COMMENTS_HASHFUNC(A, B)    (A + B)

typedef struct
{
  USHORT  CompressedSize;
  CHAR    Comment[32768];
} tBASE_COMMENTS;

tBASE_COMMENTS BASE_COMMENTS;

void    BASE_COMMENTS_ReadComment(void);
void    BASE_COMMENTS_EXTERN_Output(void);
void    BASE_COMMENTS_EXTERN_ReadCommentEnd(void);

#endif
