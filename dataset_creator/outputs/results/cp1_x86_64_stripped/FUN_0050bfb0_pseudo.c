
void FUN_0050bfb0(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x20);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x18),"../crypto/ec/ecp_nistz256.c",0x4f3);
  FUN_00422300(*(undefined8 *)(param_1 + 0x28));
  FUN_0041ad60(param_1,"../crypto/ec/ecp_nistz256.c",0x4f5);
  return;
}

