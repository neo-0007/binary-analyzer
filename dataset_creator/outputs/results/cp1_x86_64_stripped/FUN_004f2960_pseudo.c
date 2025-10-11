
void FUN_004f2960(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x30);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar3 != 1) && (0 < iVar3 + -1)) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    if (*plVar4 != 0) {
      do {
        FUN_004efcc0();
        plVar2 = plVar4 + 1;
        plVar4 = plVar4 + 1;
      } while (*plVar2 != 0);
      plVar4 = *(long **)(param_1 + 0x20);
    }
    FUN_0041ad60(plVar4,"../crypto/ec/ec_mult.c",0x68);
  }
  FUN_00422300(*(undefined8 *)(param_1 + 0x38));
  FUN_0041ad60(param_1,"../crypto/ec/ec_mult.c",0x6b);
  return;
}

