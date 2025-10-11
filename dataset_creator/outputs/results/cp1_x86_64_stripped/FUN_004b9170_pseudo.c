
undefined8 FUN_004b9170(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((param_1 != param_2) && (lVar3 = FUN_004b8260(), lVar3 == 0)) {
    return 0;
  }
  do {
    if (param_3 < 1) {
      return 1;
    }
    iVar1 = FUN_004b7bb0(param_4);
    iVar2 = FUN_004b7bb0(param_1);
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_mod.c",0x12a,"BN_mod_lshift_quick");
      FUN_0051f8f0(3,0x6e,0);
      return 0;
    }
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 == 0) {
      iVar1 = FUN_004bbf30(param_1,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
    }
    else {
      iVar2 = FUN_004bc220(param_1,param_1,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 - iVar1;
    }
    iVar1 = FUN_004b7840(param_1,param_4);
  } while ((iVar1 < 0) || (iVar1 = FUN_004b18d0(param_1,param_1,param_4), iVar1 != 0));
  return 0;
}

