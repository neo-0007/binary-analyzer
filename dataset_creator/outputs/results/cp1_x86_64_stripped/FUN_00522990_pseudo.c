
undefined8 FUN_00522990(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = FUN_0040e590(uVar2);
  if (iVar1 == 0x198) {
    uVar2 = thunk_FUN_00541030(uVar2);
    iVar1 = FUN_004ee940(uVar2);
    if (iVar1 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x6d6,
                   "get_ec_decoded_from_explicit_params");
      FUN_0051f8f0(6,0xa3,0);
    }
    else if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 1) {
      *(int *)(param_3 + 0x1c) = iVar1;
      *(undefined8 *)(param_3 + 0x20) = 0;
      uVar2 = FUN_00521e40(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x6dc,"get_ec_decoded_from_explicit_params"
                );
    FUN_0051f8f0(6,0xe0,0);
  }
  return 0;
}

