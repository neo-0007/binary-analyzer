
undefined4 FUN_004f03b0(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (param_2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x170,"EC_GROUP_set_generator");
    FUN_0051f8f0(0x10,0xc0102,0);
    return 0;
  }
  if (((param_1[8] == 0) || (iVar1 = FUN_004b7ba0(), iVar1 != 0)) ||
     (iVar1 = FUN_004b7d60(param_1[8]), iVar1 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x177,"EC_GROUP_set_generator");
    FUN_0051f8f0(0x10,0x67,0);
    return 0;
  }
  if (((param_3 == 0) || (iVar1 = FUN_004b7ba0(param_3), iVar1 != 0)) ||
     (iVar1 = FUN_004b7d60(param_3), iVar1 != 0)) {
LAB_004f045d:
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x182,"EC_GROUP_set_generator");
    FUN_0051f8f0(0x10,0x7a,0);
    return 0;
  }
  iVar1 = FUN_004b7bb0(param_3);
  iVar2 = FUN_004b7bb0(param_1[8]);
  if (iVar2 + 1 < iVar1) goto LAB_004f045d;
  if ((param_4 != 0) && (iVar1 = FUN_004b7d60(param_4), iVar1 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x18c,"EC_GROUP_set_generator");
    FUN_0051f8f0(0x10,0xa4,0);
    return 0;
  }
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    lVar3 = FUN_004efb90(param_1);
    param_1[1] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_004efec0(lVar3,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  lVar3 = FUN_004b8260(param_1[2],param_3);
  if (lVar3 == 0) {
    return 0;
  }
  if ((param_4 == 0) || (iVar1 = FUN_004b7ba0(param_4), iVar1 != 0)) {
    iVar1 = FUN_004b7bb0(param_1[2]);
    iVar2 = FUN_004b7bb0(param_1[8]);
    if ((iVar2 + 1) / 2 + 3 < iVar1) {
      lVar3 = FUN_004b2a70(param_1[0x15]);
      if (lVar3 == 0) goto LAB_004f06a8;
      FUN_004b2c00(lVar3);
      lVar4 = FUN_004b2df0(lVar3);
      if (lVar4 != 0) {
        if (*(int *)(*param_1 + 4) == 0x197) {
          FUN_004b7b50(lVar4);
          iVar1 = FUN_004b7bb0(param_1[8]);
          iVar1 = FUN_004b8360(lVar4,iVar1 + -1);
          if (iVar1 != 0) goto LAB_004f05d0;
        }
        else {
          lVar5 = FUN_004b8260(lVar4,param_1[8]);
          if (lVar5 != 0) {
LAB_004f05d0:
            iVar1 = FUN_004bbff0(param_1[3],param_1[2]);
            if ((iVar1 != 0) && (iVar1 = FUN_004b1810(param_1[3],param_1[3],lVar4), iVar1 != 0)) {
              uVar6 = FUN_004b75a0();
              iVar1 = FUN_004b1810(param_1[3],param_1[3],uVar6);
              if ((iVar1 != 0) &&
                 (iVar1 = FUN_004b34a0(param_1[3],0,param_1[3],param_1[2],lVar3), iVar1 != 0)) {
                FUN_004b2d50(lVar3);
                FUN_004b2b50(lVar3);
                goto LAB_004f0641;
              }
            }
          }
        }
      }
      FUN_004b2d50(lVar3);
      FUN_004b2b50(lVar3);
LAB_004f06a8:
      FUN_004b7b50(param_1[3]);
      return 0;
    }
    FUN_004b7b50(param_1[3]);
  }
  else {
    lVar3 = FUN_004b8260(param_1[3],param_4);
    if (lVar3 == 0) {
      return 0;
    }
  }
LAB_004f0641:
  iVar1 = FUN_004b7d40(param_1[2]);
  if (iVar1 == 0) {
    FUN_004b9810(param_1[0x12]);
    param_1[0x12] = 0;
    return 1;
  }
  lVar3 = FUN_004b2a70(param_1[0x15]);
  FUN_004b9810(param_1[0x12]);
  param_1[0x12] = 0;
  if (lVar3 != 0) {
    lVar4 = FUN_004b9790();
    param_1[0x12] = lVar4;
    if (lVar4 != 0) {
      iVar1 = FUN_004b9860(lVar4,param_1[2],lVar3);
      if (iVar1 == 0) {
        FUN_004b9810(param_1[0x12]);
        param_1[0x12] = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      goto LAB_004f076a;
    }
  }
  uVar7 = 0;
LAB_004f076a:
  FUN_004b2b50(lVar3);
  return uVar7;
}

