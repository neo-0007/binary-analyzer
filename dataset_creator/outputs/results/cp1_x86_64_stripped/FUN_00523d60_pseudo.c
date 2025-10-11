
undefined8 FUN_00523d60(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  iVar1 = FUN_0040e590(uVar3);
  if (iVar1 == 0x1c) {
    uVar3 = thunk_FUN_00410bd0(uVar3);
    iVar1 = FUN_004d4b10(uVar3);
    if (iVar1 != 0) {
      uVar3 = FUN_00541930(iVar1);
      lVar4 = FUN_00541a40(uVar3);
      *(long *)(param_3 + 0x20) = lVar4;
      goto LAB_00523df9;
    }
  }
  else {
    if (iVar1 != 0x198) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x5f8,"get_payload_group_name");
      FUN_0051f8f0(6,0xe0,0);
      return 0;
    }
    uVar3 = thunk_FUN_00541030(uVar3);
    lVar4 = FUN_004ee2d0(uVar3);
    if (lVar4 != 0) {
      iVar1 = FUN_004ef870(lVar4);
      if (iVar1 != 0) {
        lVar4 = FUN_005356e0(iVar1);
        *(long *)(param_3 + 0x20) = lVar4;
        goto LAB_00523df9;
      }
    }
  }
  lVar4 = *(long *)(param_3 + 0x20);
LAB_00523df9:
  if (lVar4 != 0) {
    uVar2 = thunk_FUN_007129d0();
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    uVar3 = FUN_00521e40(param_1,param_2,param_3);
    return uVar3;
  }
  return 1;
}

