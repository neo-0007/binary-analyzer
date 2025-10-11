
long * __new_exitfn(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (__exit_funcs_done != '\0') {
    return (long *)0x0;
  }
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("l != NULL","cxa_atexit.c",0x70,"__new_exitfn");
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
            plVar5 = (long *)calloc(1,0x410);
            if (plVar5 == (long *)0x0) {
              return (long *)0x0;
            }
            *plVar5 = (long)plVar1;
            *param_1 = plVar5;
          }
          goto LAB_006df8a0;
        }
        plVar6[1] = lVar4 + 1;
        plVar6 = plVar6 + lVar4 * 4 + 2;
        goto LAB_006df862;
      }
    }
    plVar6[1] = 0;
    plVar5 = plVar6;
    plVar3 = (long *)*plVar6;
  } while ((long *)*plVar6 != (long *)0x0);
LAB_006df8a0:
  plVar5[1] = 1;
  plVar6 = plVar5 + 2;
LAB_006df862:
  *plVar6 = 1;
  __new_exitfn_called = __new_exitfn_called + 1;
  return plVar6;
}

