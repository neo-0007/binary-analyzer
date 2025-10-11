
long * FUN_0053d380(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x78));
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      plVar2 = (long *)FUN_004364a0(*(undefined8 *)(param_1 + 0x78),iVar3);
      if (*plVar2 == param_2) {
        return plVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  return (long *)0x0;
}

