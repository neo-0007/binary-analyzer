
undefined8 FUN_00523730(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00521cc0();
  if (0 < (int)uVar1) {
    if (*(int *)(param_3 + 8) == 2) {
      if (param_1 == 1) {
        uVar1 = FUN_00541930(*(undefined4 *)(param_3 + 0x1c));
        lVar2 = FUN_00541a40(uVar1);
        *(long *)(param_3 + 0x20) = lVar2;
        if (lVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x3ef,"fix_dh_nid");
          FUN_0051f8f0(6,0xde,0);
          return 0;
        }
        *(undefined4 *)(param_3 + 0x1c) = 0;
      }
      uVar1 = FUN_00521e40(param_1,param_2,param_3);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

