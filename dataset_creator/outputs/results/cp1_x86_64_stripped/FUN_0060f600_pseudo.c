
undefined8
FUN_0060f600(long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)(param_5 & 0xf);
  if (uVar5 != 1) {
    iVar1 = FUN_005a25b0(*param_1,param_2,0xffffffff);
    if (-1 < iVar1) {
      if (uVar5 == 4) {
        return 1;
      }
      if (uVar5 == 0) {
        uVar3 = 0x91;
        goto LAB_0060f727;
      }
      if (uVar5 == 5) {
        lVar2 = FUN_00435ec0(*param_1,iVar1);
joined_r0x0060f6fa:
        if (lVar2 == 0) {
          return 0xffffffff;
        }
        return 1;
      }
      lVar2 = FUN_0061d9d0(param_2 & 0xffffffff,param_4,param_3);
      if (lVar2 != 0) {
        uVar3 = FUN_004364a0(*param_1,iVar1);
        FUN_005aca30(uVar3);
        lVar2 = FUN_004364d0(*param_1,iVar1,lVar2);
        goto joined_r0x0060f6fa;
      }
      goto LAB_0060f770;
    }
    if ((uVar5 - 3 & 0xfffffffffffffffd) == 0) {
      uVar3 = 0x66;
LAB_0060f727:
      if ((param_5 & 0x10) == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_lib.c",300,"X509V3_add1_i2d");
        FUN_0051f8f0(0x22,uVar3,0);
        return 0;
      }
      return 0;
    }
  }
  lVar2 = FUN_0061d9d0(param_2 & 0xffffffff,param_4,param_3);
  if (lVar2 != 0) {
    lVar4 = *param_1;
    if (((lVar4 != 0) || (lVar4 = FUN_00436410(), lVar4 != 0)) &&
       (iVar1 = FUN_00435f80(lVar4,lVar2), iVar1 != 0)) {
      *param_1 = lVar4;
      return 1;
    }
    if (*param_1 != lVar4) {
      FUN_004360b0(lVar4);
    }
    FUN_005aca30(lVar2);
    return 0xffffffff;
  }
LAB_0060f770:
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_lib.c",0x10c,"X509V3_add1_i2d");
  FUN_0051f8f0(0x22,0x90,0);
  return 0;
}

