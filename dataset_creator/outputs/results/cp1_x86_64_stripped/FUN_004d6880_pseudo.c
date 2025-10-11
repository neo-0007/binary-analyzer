
undefined8 FUN_004d6880(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x20);
  if (*(long *)(param_1 + 0x88) == 0) {
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_pmeth.c",0x17e,"pkey_dh_keygen");
      FUN_0051f8f0(5,0x6b,0);
      return 0;
    }
  }
  else if (iVar1 == 0) {
    lVar2 = FUN_004d5e70();
    goto joined_r0x004d6907;
  }
  lVar2 = FUN_004d4a70();
joined_r0x004d6907:
  if ((lVar2 != 0) &&
     ((FUN_0040f1c0(param_2,**(undefined4 **)(param_1 + 0x78)), *(long *)(param_1 + 0x88) == 0 ||
      (iVar1 = FUN_00410570(param_2), iVar1 != 0)))) {
    uVar3 = thunk_FUN_00410bd0(param_2);
    uVar3 = FUN_004d5370(uVar3);
    return uVar3;
  }
  return 0;
}

