
void FUN_0051f9f0(long param_1)

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
  FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../crypto/evp/asymcipher.c",0x1c2);
  FUN_00420d40(*(undefined8 *)(param_1 + 0x18));
  FUN_00422300(*(undefined8 *)(param_1 + 0x28));
  FUN_0041ad60(param_1,"../crypto/evp/asymcipher.c",0x1c5);
  return;
}

