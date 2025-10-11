
void FUN_00511590(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 100);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../crypto/ec/ecx_key.c",0x46);
  FUN_0041c0b0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
               "../crypto/ec/ecx_key.c",0x47);
  FUN_00422300(*(undefined8 *)(param_1 + 0x68));
  FUN_0041ad60(param_1,"../crypto/ec/ecx_key.c",0x49);
  return;
}

