
long * FUN_006c3d40(long *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  cVar2 = FUN_006c3d30();
  if ((param_2 != 0) && (cVar2 != '\x01')) {
    piVar4 = (int *)FUN_006d2700();
    iVar1 = *piVar4;
    *piVar4 = 0;
    do {
      iVar3 = FUN_006fd670(param_2);
      if (iVar3 == 0) {
        *piVar4 = iVar1;
        *param_1 = param_2;
        *(undefined1 *)(param_1 + 1) = 0;
        return param_1;
      }
    } while (*piVar4 == 4);
    *piVar4 = iVar1;
  }
  return (long *)0x0;
}

