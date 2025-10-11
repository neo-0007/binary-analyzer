
long * FUN_00674010(long *param_1,undefined1 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  if (*(char *)((long)param_1 + lVar1 + 0xe1) == '\0') {
    plVar2 = *(long **)((long)param_1 + lVar1 + 0xf0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403826();
    }
    if ((char)plVar2[7] == '\0') {
      FUN_0063d6f0(plVar2);
      if (*(code **)(*plVar2 + 0x30) != FUN_00405e50) {
        (**(code **)(*plVar2 + 0x30))(plVar2,0x20);
      }
    }
    *(undefined1 *)((long)param_1 + lVar1 + 0xe1) = 1;
  }
  *(undefined1 *)((long)param_1 + lVar1 + 0xe0) = param_2;
  return param_1;
}

