
ulong FUN_00523150(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  
  uVar2 = FUN_00521cc0();
  if ((int)uVar2 < 1) {
    return (ulong)uVar2;
  }
  if (*(int *)(param_3 + 8) != 2) {
    return 0;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 0x1c) == 0) {
      pcVar4 = "explicit";
LAB_00523267:
      *(char **)(param_3 + 0x20) = pcVar4;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      uVar5 = FUN_00521e40(1,param_2,param_3);
      return uVar5;
    }
    if (*(int *)(param_3 + 0x1c) == 1) {
      pcVar4 = "named_curve";
      goto LAB_00523267;
    }
LAB_005231aa:
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x466,"fix_ec_param_enc");
    uVar5 = 0xfffffffe;
    FUN_0051f8f0(6,0x93,0);
  }
  else {
    uVar2 = FUN_00521e40(param_1,param_2,param_3);
    uVar5 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      return uVar5;
    }
    if (param_1 != 7) {
      return uVar5;
    }
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    iVar3 = thunk_FUN_00712780(uVar1,"explicit");
    if (iVar3 != 0) {
      iVar3 = thunk_FUN_00712780(uVar1,"named_curve");
      if (iVar3 != 0) {
        *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
        *(undefined8 *)(param_3 + 0x20) = 0;
        goto LAB_005231aa;
      }
      iVar3 = 1;
    }
    *(int *)(param_3 + 0x1c) = iVar3;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  return uVar5;
}

