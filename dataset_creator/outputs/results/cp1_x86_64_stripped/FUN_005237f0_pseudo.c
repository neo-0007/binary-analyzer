
undefined8 FUN_005237f0(int param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00521cc0();
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if (*(int *)(param_3 + 8) != 2) {
    return 0;
  }
  if (param_1 == 1) {
    uVar2 = FUN_00541930(*(undefined4 *)(param_3 + 0x1c));
    lVar3 = FUN_00541a40(uVar2);
    *(long *)(param_3 + 0x20) = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar2 = 0x40a;
LAB_005238ad:
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",uVar2,"fix_dh_nid5114");
      FUN_0051f8f0(6,0xde,0);
      return 0;
    }
  }
  else {
    if (param_1 != 4) goto LAB_00523858;
    if (*(long *)(param_3 + 0x20) == 0) {
      return 0;
    }
    uVar1 = FUN_006e94d0(*(long *)(param_3 + 0x20),0,10);
    uVar2 = FUN_00541930(uVar1);
    lVar3 = FUN_00541a40(uVar2);
    *(long *)(param_3 + 0x20) = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar2 = 0x416;
      goto LAB_005238ad;
    }
  }
  *(undefined4 *)(param_3 + 0x1c) = 0;
LAB_00523858:
  uVar2 = FUN_00521e40(param_1,param_2,param_3);
  return uVar2;
}

