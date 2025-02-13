#ifndef _DISPLAY_TARGET_COLOR
#define _DISPLAY_TARGET_COLOR

#include "cross_lib.h"

#include "display_target_geometry.h"


#if defined(__GAL__) || defined(__GAMATE__) \
    || (defined(__PC6001__) && !(FORCE_SCREEN_MODE==2)) \
    || (defined(__ATARI5200__) && !defined(ATARI_MODE_1_COLOR)) \
    || (defined(__CREATIVISION__) && !defined(CREATIVISION_COLOR)) \
    || defined(__WINCMOC__) || defined(__COCO__) || defined(__DRAGON__) || defined(__OSIC1P__) || defined(__MC1000__) \
    || defined(__LAMBDA__) || (defined(__MSX__) && defined(MEMORY_MAPPED)) \
    || defined(__VZ__) \
    || (defined(__ATARI__) && !defined(ATARI_MODE_1_COLOR)) \
    || defined(__PET__) || defined(__CBM610__) || defined(__APPLE2__) || defined(__APPLE2ENH__) \
    || defined(__ZX81__) || defined(__ZX80__) || defined(__ACE__) \
    || defined(__TRS80__) || defined(__CPM_80X24__) || defined(__PX8__) || defined(__PX4__) \
    || defined(__ABC80__) || defined(__ABC800__) || defined(__SRR__) \
    || defined(__KC__) || (defined(__ATMOS__) && !defined(ORIC_COLOR))|| defined(__SUPERVISION__) \
    || defined(__VECTREX__) || defined(__GB__) \
    || defined(__NC100__) || defined(__NC200__)
    #if !defined(NO_COLOR)
        #define NO_COLOR 
    #endif
#else
	#define COLOR
#endif


#if defined(NO_COLOR) || defined(__NES__) || defined(__COMX__) || defined(__PECOM__) || defined(__MO5__) || defined(__TO7__) \
    || defined(__CIDELSA__) || defined(__MICRO__) \
    || defined(__CREATIVISION__)
    #define NO_TEXT_COLOR
#else
#endif

#define BACKGROUND_COLOR _XL_BLACK

#define BORDER_COLOR _XL_BLACK


#endif // _DISPLAY_TARGET_COLOR
