
undefined8 FUN_004bbc00(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_004b2c00(param_5);
  if (param_1 == 0) {
    param_1 = FUN_004b2df0(param_5);
  }
  if (param_2 == 0) {
    param_2 = FUN_004b2df0(param_5);
  }
  uVar4 = FUN_004b2df0(param_5);
  lVar5 = FUN_004b2df0(param_5);
  if (lVar5 != 0) {
    iVar1 = FUN_004b77f0(param_3,param_4);
    if (iVar1 < 0) {
      FUN_004b7b50(param_1);
      lVar5 = FUN_004b8260(param_2,param_3);
      if (lVar5 != 0) {
        FUN_004b2d50(param_5);
        return 1;
      }
      FUN_004b2d50(param_5);
      return 0;
    }
    iVar2 = FUN_004b7bb0(param_3);
    iVar1 = *(int *)(param_4 + 0x30) * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar2 = iVar1;
    if (*(int *)(param_4 + 0x34) != iVar1) {
      iVar2 = FUN_004bbb80(param_4 + 0x18,param_4,iVar1,param_5);
      *(int *)(param_4 + 0x34) = iVar2;
    }
    if ((((iVar2 != -1) &&
         (iVar2 = FUN_004bc3b0(uVar4,param_3,*(undefined4 *)(param_4 + 0x30)), iVar2 != 0)) &&
        (iVar2 = FUN_004bacf0(lVar5,uVar4,param_4 + 0x18,param_5), iVar2 != 0)) &&
       (iVar1 = FUN_004bc3b0(param_1,lVar5,iVar1 - *(int *)(param_4 + 0x30)), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar1 = FUN_004bacf0(lVar5,param_4,param_1,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_004b16e0(param_2,param_3,lVar5), iVar1 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        iVar1 = 4;
        while( true ) {
          iVar2 = FUN_004b77f0(param_2,param_4);
          if (iVar2 < 0) {
            iVar1 = FUN_004b7ba0(param_2);
            uVar3 = 0;
            if (iVar1 == 0) {
              uVar3 = *(undefined4 *)(param_3 + 0x10);
            }
            *(undefined4 *)(param_2 + 0x10) = uVar3;
            *(uint *)(param_1 + 0x10) = *(uint *)(param_3 + 0x10) ^ *(uint *)(param_4 + 0x10);
            uVar4 = 1;
            goto LAB_004bbccb;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) break;
          iVar2 = FUN_004b16e0(param_2,param_2,param_4);
          if ((iVar2 == 0) || (iVar2 = FUN_004bcc70(param_1,1), iVar2 == 0)) goto LAB_004bbcc8;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/bn/bn_recp.c",0x95,"BN_div_recp");
        FUN_0051f8f0(3,0x65,0);
      }
    }
  }
LAB_004bbcc8:
  uVar4 = 0;
LAB_004bbccb:
  FUN_004b2d50(param_5);
  return uVar4;
}

