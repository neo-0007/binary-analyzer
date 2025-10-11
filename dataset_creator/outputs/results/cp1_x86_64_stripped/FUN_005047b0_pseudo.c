
void FUN_005047b0(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xc00);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  FUN_00422300(*(undefined8 *)(param_1 + 0xc08));
  FUN_0041ad60(param_1,"../crypto/ec/ecp_nistp256.c",0x762);
  return;
}

