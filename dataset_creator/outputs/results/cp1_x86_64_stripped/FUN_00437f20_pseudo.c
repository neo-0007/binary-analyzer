
undefined8 FUN_00437f20(undefined8 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((param_2 & 0x1000) == 0) {
    lVar4 = 0;
    if (param_4 == -1) {
      uVar1 = 0;
    }
    else {
      lVar4 = FUN_004a2180(param_2);
      if ((lVar4 == 0) || (iVar2 = FUN_004a1fa0(lVar4,param_3,param_4), uVar1 = param_2, iVar2 == 0)
         ) {
        lVar5 = 0;
        goto LAB_00437fe7;
      }
    }
    if (param_2 == 0) {
      FUN_004a2270(lVar4);
      return 1;
    }
    lVar5 = FUN_004a7f10();
    if (lVar5 == 0) goto LAB_00437fe7;
    if (param_4 != -1) goto LAB_0043807f;
    iVar2 = FUN_004a1130(lVar5,param_2,param_3);
    if (iVar2 == 0) goto LAB_00437fe7;
  }
  else {
    uVar3 = FUN_00423da0(*param_1);
    lVar4 = FUN_004a0da0(0,param_3,param_4,param_2,uVar3);
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_att.c",0x113,"X509_ATTRIBUTE_set1_data");
      FUN_0051f8f0(0xb,0x8000d,0);
      return 0;
    }
    uVar1 = *(uint *)(lVar4 + 4);
    lVar5 = FUN_004a7f10();
    if (lVar5 == 0) goto LAB_00437fe7;
LAB_0043807f:
    FUN_004a10c0(lVar5,uVar1,lVar4);
    lVar4 = 0;
  }
  iVar2 = FUN_00435f80(param_1[1],lVar5);
  if (iVar2 != 0) {
    return 1;
  }
LAB_00437fe7:
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_att.c",0x134,"X509_ATTRIBUTE_set1_data");
  FUN_0051f8f0(0xb,0xc0100,0);
  FUN_004a7f30(lVar5);
  FUN_004a2270(lVar4);
  return 0;
}

