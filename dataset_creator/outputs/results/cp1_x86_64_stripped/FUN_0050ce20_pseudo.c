
ulong FUN_0050ce20(long param_1,undefined8 param_2,byte *param_3,long param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  long local_60;
  
  if (param_4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecp_oct.c",0x11e,"ossl_ec_GFp_simple_oct2point");
    FUN_0051f8f0(0x10,100,0);
    return 0;
  }
  bVar1 = *param_3;
  bVar10 = bVar1 & 0xfe;
  if ((bVar1 & 0xfc) == 0) {
    if (((bVar1 & 0xfa) == 0) && ((bVar1 & 1) != 0)) {
LAB_0050d090:
      FUN_0051f420();
      uVar4 = 299;
      goto LAB_0050d008;
    }
    if ((bVar1 & 0xfe) == 0) {
      if (param_4 == 1) {
        uVar7 = FUN_004f0830(param_1,param_2);
        return uVar7;
      }
      FUN_0051f420();
      uVar4 = 0x131;
      goto LAB_0050d008;
    }
  }
  else {
    if ((bVar1 & 0xfc) != 4) {
      FUN_0051f420();
      uVar4 = 0x127;
      goto LAB_0050d008;
    }
    if (((bVar1 & 0xfa) == 0) && ((bVar1 & 1) != 0)) goto LAB_0050d090;
  }
  iVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x40));
  iVar8 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar8 = iVar2 + 7;
  }
  iVar8 = iVar8 >> 3;
  lVar9 = (long)iVar8;
  lVar5 = lVar9 * 2;
  if (bVar10 == 2) {
    lVar5 = lVar9;
  }
  if (lVar5 + 1 != param_4) {
    FUN_0051f420();
    uVar4 = 0x13e;
LAB_0050d008:
    FUN_0051f540("../crypto/ec/ecp_oct.c",uVar4,"ossl_ec_GFp_simple_oct2point");
    FUN_0051f8f0(0x10,0x66,0);
    return 0;
  }
  local_60 = 0;
  if ((param_5 == 0) &&
     (param_5 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xa8)), local_60 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_004b2c00(param_5);
  uVar4 = FUN_004b2df0(param_5);
  lVar5 = FUN_004b2df0(param_5);
  if ((lVar5 != 0) && (lVar6 = FUN_004b84d0(param_3 + 1,iVar8,uVar4), lVar6 != 0)) {
    iVar2 = FUN_004b77f0(uVar4,*(undefined8 *)(param_1 + 0x40));
    if (iVar2 < 0) {
      if (bVar10 == 2) {
        iVar8 = FUN_004f4b40(param_1,param_2,uVar4,bVar1 & 1,param_5);
        uVar3 = (uint)(iVar8 != 0);
        goto LAB_0050d122;
      }
      lVar9 = FUN_004b84d0(param_3 + lVar9 + 1,iVar8,lVar5);
      if (lVar9 == 0) goto LAB_0050d120;
      iVar8 = FUN_004b77f0(lVar5,*(undefined8 *)(param_1 + 0x40));
      if (iVar8 < 0) {
        if ((bVar10 != 6) || (uVar3 = FUN_004b7d40(lVar5), uVar3 == (bVar1 & 1))) {
          iVar8 = FUN_004f0f80(param_1,param_2,uVar4,lVar5,param_5);
          uVar3 = (uint)(iVar8 != 0);
          goto LAB_0050d122;
        }
        FUN_0051f420();
        uVar4 = 0x161;
      }
      else {
        FUN_0051f420();
        uVar4 = 0x15c;
      }
    }
    else {
      FUN_0051f420();
      uVar4 = 0x151;
    }
    FUN_0051f540("../crypto/ec/ecp_oct.c",uVar4,"ossl_ec_GFp_simple_oct2point");
    FUN_0051f8f0(0x10,0x66,0);
  }
LAB_0050d120:
  uVar3 = 0;
LAB_0050d122:
  FUN_004b2d50(param_5);
  FUN_004b2b50(local_60);
  return (ulong)uVar3;
}

