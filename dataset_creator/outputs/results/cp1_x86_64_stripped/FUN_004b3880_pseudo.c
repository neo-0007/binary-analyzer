
bool FUN_004b3880(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  iVar1 = FUN_004b7e80(param_3,4);
  if ((iVar1 != 0) || (iVar1 = FUN_004b7e80(param_2,4), iVar1 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_exp.c",0x30,"BN_exp");
    FUN_0051f8f0(3,0xc0101,0);
    return false;
  }
  FUN_004b2c00(param_4);
  if ((param_2 == param_1) || (lVar6 = param_1, param_3 == param_1)) {
    lVar6 = FUN_004b2df0(param_4);
  }
  lVar4 = FUN_004b2df0(param_4);
  bVar7 = false;
  if (((lVar6 != 0) && (lVar4 != 0)) && (lVar5 = FUN_004b8260(lVar4,param_2), lVar5 != 0)) {
    iVar1 = FUN_004b7bb0(param_3);
    iVar2 = FUN_004b7d40(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_004b8190(lVar6,1);
      if (iVar2 == 0) goto LAB_004b39e8;
    }
    else {
      lVar5 = FUN_004b8260(lVar6,param_2);
      if (lVar5 == 0) goto LAB_004b39e8;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      do {
        iVar3 = FUN_004bc940(lVar4,lVar4,param_4);
        if ((iVar3 == 0) ||
           ((iVar3 = FUN_004b78f0(param_3,iVar2), iVar3 != 0 &&
            (iVar3 = FUN_004bacf0(lVar6,lVar6,lVar4,param_4), iVar3 == 0)))) goto LAB_004b39e8;
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    bVar7 = true;
    if (lVar6 != param_1) {
      lVar6 = FUN_004b8260(param_1,lVar6);
      bVar7 = lVar6 != 0;
    }
  }
LAB_004b39e8:
  FUN_004b2d50(param_4);
  return bVar7;
}

