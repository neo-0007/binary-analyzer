
ulong FUN_005ce5b0(long *param_1,undefined8 param_2,byte *param_3,long param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  byte bVar13;
  long local_60;
  
  if (param_4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec2_oct.c",0x10e,"ossl_ec_GF2m_simple_oct2point");
    FUN_0051f8f0(0x10,100,0);
    return 0;
  }
  bVar1 = *param_3;
  bVar10 = bVar1 & 1;
  bVar13 = bVar1 & 0xfe;
  if ((bVar1 & 0xfc) == 0) {
    if (((bVar1 & 0xfa) == 0) && (bVar10 != 0)) {
LAB_005ce810:
      FUN_0051f420();
      uVar5 = 0x127;
      goto LAB_005ce790;
    }
    if ((bVar1 & 0xfe) == 0) {
      if (param_4 == 1) {
        uVar9 = FUN_004f0830(param_1,param_2);
        return uVar9;
      }
      FUN_0051f420();
      uVar5 = 0x12e;
      goto LAB_005ce790;
    }
  }
  else {
    if ((bVar1 & 0xfc) != 4) {
      FUN_0051f420();
      uVar5 = 0x123;
      goto LAB_005ce790;
    }
    if (((bVar1 & 0xfa) == 0) && (bVar10 != 0)) goto LAB_005ce810;
  }
  iVar2 = FUN_004efad0(param_1);
  iVar11 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar11 = iVar2 + 7;
  }
  iVar11 = iVar11 >> 3;
  lVar12 = (long)iVar11;
  lVar7 = lVar12 * 2;
  if (bVar13 == 2) {
    lVar7 = lVar12;
  }
  if (lVar7 + 1 != param_4) {
    FUN_0051f420();
    uVar5 = 0x13c;
LAB_005ce790:
    FUN_0051f540("../crypto/ec/ec2_oct.c",uVar5,"ossl_ec_GF2m_simple_oct2point");
    FUN_0051f8f0(0x10,0x66,0);
    return 0;
  }
  local_60 = 0;
  if ((param_5 == 0) && (param_5 = FUN_004b2b10(), local_60 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_004b2c00(param_5);
  uVar5 = FUN_004b2df0(param_5);
  uVar6 = FUN_004b2df0(param_5);
  lVar7 = FUN_004b2df0(param_5);
  if ((lVar7 != 0) && (lVar8 = FUN_004b84d0(param_3 + 1,iVar11,uVar5), lVar8 != 0)) {
    iVar3 = FUN_004b7bb0(uVar5);
    if (iVar2 < iVar3) {
      FUN_0051f420();
      uVar5 = 0x152;
    }
    else {
      if (bVar13 == 2) {
        iVar11 = FUN_004f4b40(param_1,param_2,uVar5,(uint)bVar10,param_5);
        uVar9 = (ulong)(iVar11 != 0);
        goto LAB_005ce8a3;
      }
      lVar12 = FUN_004b84d0(param_3 + lVar12 + 1,iVar11,uVar6);
      if (lVar12 == 0) goto LAB_005ce8a0;
      iVar11 = FUN_004b7bb0(uVar6);
      if (iVar11 <= iVar2) {
        if (bVar13 == 6) {
          uVar4 = FUN_004b7ba0(uVar5);
          uVar9 = (ulong)uVar4;
          if (uVar4 == 0) {
            iVar11 = (**(code **)(*param_1 + 0x108))(param_1,lVar7,uVar6,uVar5,param_5);
            if (iVar11 == 0) goto LAB_005ce8a0;
            uVar4 = FUN_004b7d40(lVar7);
            if (uVar4 != bVar10) {
              FUN_0051f420();
              FUN_0051f540("../crypto/ec/ec2_oct.c",0x16f,"ossl_ec_GF2m_simple_oct2point");
              FUN_0051f8f0(0x10,0x66,0);
              goto LAB_005ce8a3;
            }
          }
          else if (bVar10 != 0) {
            FUN_0051f420();
            uVar5 = 0x168;
            goto LAB_005ce881;
          }
        }
        iVar11 = FUN_004f0f80(param_1,param_2,uVar5,uVar6,param_5);
        uVar9 = (ulong)(iVar11 != 0);
        goto LAB_005ce8a3;
      }
      FUN_0051f420();
      uVar5 = 0x15d;
    }
LAB_005ce881:
    FUN_0051f540("../crypto/ec/ec2_oct.c",uVar5,"ossl_ec_GF2m_simple_oct2point");
    FUN_0051f8f0(0x10,0x66,0);
  }
LAB_005ce8a0:
  uVar9 = 0;
LAB_005ce8a3:
  FUN_004b2d50(param_5);
  FUN_004b2b50(local_60);
  return uVar9;
}

