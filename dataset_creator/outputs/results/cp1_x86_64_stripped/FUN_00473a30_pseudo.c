
void FUN_00473a30(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  FUN_00422300(*(undefined8 *)(param_1 + 0x10));
  FUN_0041ad60(param_1,"../providers/implementations/keymgmt/kdf_legacy_kmgmt.c",0x3f);
  return;
}

