
undefined8 FUN_00524a20(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = FUN_0040e590(uVar2);
  if (iVar1 == 0x1c) {
    uVar2 = thunk_FUN_00410bd0(uVar2);
    lVar3 = FUN_004d60b0(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x68b,"get_dh_dsa_payload_p");
      FUN_0051f8f0(6,0xe0,0);
      return 0;
    }
    uVar2 = FUN_00410c70(uVar2);
    lVar3 = FUN_004d8d30(uVar2);
  }
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = FUN_00521e40(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

