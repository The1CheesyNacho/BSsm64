#include "PR/R4300.h"
#include "sys/asm.h"
#include "sys/regdef.h"

.text

#ifndef BBPLAYER

LEAF(__osSetCompare)
    STAY2(mtc0 a0, C0_COMPARE)
    jr ra
END(__osSetCompare)

#endif
