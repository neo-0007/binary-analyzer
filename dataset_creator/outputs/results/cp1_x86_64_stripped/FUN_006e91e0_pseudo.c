
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_006e91e0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (DAT_009464d4 != '\0') {
    return (long *)0x0;
  }
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("l != NULL","cxa_atexit.c",0x70,"__new_exitfn");
  }
  plVar3 = plVar1;
  plVar5 = (long *)0x0;
  do {
    plVar6 = plVar3;
    lVar2 = plVar6[1];
    while (lVar4 = lVar2, lVar4 != 0) {
      lVar2 = lVar4 + -1;
      if (plVar6[(lVar4 + -1) * 4 + 2] != 0) {
        if (lVar4 == 0x20) {
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)FUN_00711600(1,0x410);
            if (plVar5 == (long *)0x0) {
              return (long *)0x0;
            }
            *plVar5 = (long)plVar1;
            *param_1 = plVar5;
          }
          goto LAB_006e92b0;
        }
        plVar6[1] = lVar4 + 1;
        plVar6 = plVar6 + lVar4 * 4 + 2;
        goto LAB_006e9272;
      }
    }
    plVar6[1] = 0;
    plVar5 = plVar6;
    plVar3 = (long *)*plVar6;
  } while ((long *)*plVar6 != (long *)0x0);
LAB_006e92b0:
  plVar5[1] = 1;
  plVar6 = plVar5 + 2;
LAB_006e9272:
  *plVar6 = 1;
  _DAT_009464e0 = _DAT_009464e0 + 1;
  return plVar6;
}

