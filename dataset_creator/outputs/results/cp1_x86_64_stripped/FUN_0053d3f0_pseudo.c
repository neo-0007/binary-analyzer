
bool FUN_0053d3f0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return true;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    lVar3 = FUN_00436410();
    *(long *)(param_1 + 0x78) = lVar3;
    if (lVar3 == 0) {
      return false;
    }
  }
  puVar2 = (undefined8 *)FUN_0041ad90(0x10,"../crypto/evp/keymgmt_lib.c",0x108);
  if (puVar2 == (undefined8 *)0x0) {
    return false;
  }
  puVar2[1] = param_3;
  *puVar2 = param_2;
  iVar1 = FUN_0053e0e0(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00435f80(*(undefined8 *)(param_1 + 0x78),puVar2);
    if (iVar1 == 0) {
      FUN_0053e0f0(param_2);
      FUN_0041ad60(puVar2,"../crypto/evp/keymgmt_lib.c",0x115);
    }
    return iVar1 != 0;
  }
  FUN_0041ad60(puVar2,"../crypto/evp/keymgmt_lib.c",0x10f);
  return false;
}

