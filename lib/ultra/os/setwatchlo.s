#include "PR/R4300.h"
#include "sys/asm.h"
#include "sys/regdef.h"

.text
LEAF(__osSetWatchLo)
    STAY2(mtc0 a0, C0_WATCHLO)
    STAY1(nop)
    jr ra
END(__osSetWatchLo)
