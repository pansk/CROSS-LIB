#ifndef _CONIO_GRAPHICS
#define _CONIO_GRAPHICS


#define _XL_DRAW(x,y,tile,color) \
do \
{ \
    gotoxy((x),(y)); \
    cputc(tile+color); \
} \
while(0)

#define __DRAW(x,y,image) \
do \
{ \
    gotoxy((x),(y)); \
    cputc(((image)->_imageData) + ((image)->_color)); \
} \
while(0)


#define _XL_DELETE(x,y) \
do \
{ \
    gotoxy((x),(y)); \
    cputc(_SPACE); \
} \
while(0)

#endif // _CONIO_GRAPHICS



