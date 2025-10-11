
long * FUN_006906c0(long *param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  if (*(char *)((long)param_1 + lVar1 + 0xe4) != '\0') {
    *(undefined4 *)((long)param_1 + lVar1 + 0xe0) = param_2;
    return param_1;
  }
  plVar2 = *(long **)((long)param_1 + lVar1 + 0xf0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,0x20);
    *(undefined1 *)((long)param_1 + lVar1 + 0xe4) = 1;
    *(undefined4 *)((long)param_1 + lVar1 + 0xe0) = param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

