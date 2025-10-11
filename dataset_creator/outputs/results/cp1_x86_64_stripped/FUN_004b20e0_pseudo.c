
undefined8 FUN_004b20e0(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_blind.c",0x8d,"BN_BLINDING_convert_ex");
    FUN_0051f8f0(3,0x6b,0);
    return 0;
  }
  if ((int)param_3[5] == -1) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  else {
    iVar1 = FUN_004b1f60(param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((param_2 != 0) && (lVar2 = FUN_004b8260(param_2,param_3[1]), lVar2 == 0)) {
    return 0;
  }
  if (param_3[7] == 0) {
    uVar3 = FUN_004b8fe0(param_1,param_1,*param_3,param_3[3],param_4);
    return uVar3;
  }
  uVar3 = FUN_004b9650(param_1,param_1,*param_3,param_3[7],param_4);
  return uVar3;
}

