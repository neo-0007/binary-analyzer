
ulong FUN_005ce180(long *param_1,undefined8 param_2,uint param_3,char *param_4,ulong param_5,
                  char *param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *local_60;
  
  if (((param_3 & 0xfffffffb) != 2) && (param_3 != 4)) {
    FUN_0051f420();
    local_60 = (char *)0x0;
    FUN_0051f540("../crypto/ec/ec2_oct.c",0x8d,"ossl_ec_GF2m_simple_point2oct");
    FUN_0051f8f0(0x10,0x68,0);
    goto LAB_005ce233;
  }
  iVar2 = FUN_004f0cc0(param_1);
  if (iVar2 != 0) {
    if (param_4 == (char *)0x0) {
      return 1;
    }
    if (param_5 != 0) {
      *param_4 = '\0';
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec2_oct.c",0x95,"ossl_ec_GF2m_simple_point2oct");
    FUN_0051f8f0(0x10,100,0);
    return 0;
  }
  iVar3 = FUN_004efad0(param_1);
  iVar2 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar2 = iVar3 + 7;
  }
  uVar9 = (ulong)(iVar2 >> 3);
  uVar4 = uVar9;
  if (param_3 != 2) {
    uVar4 = uVar9 * 2;
  }
  uVar4 = uVar4 + 1;
  local_60 = param_4;
  if (param_4 == (char *)0x0) goto LAB_005ce402;
  if (param_5 < uVar4) {
    FUN_0051f420();
    local_60 = (char *)0x0;
    FUN_0051f540("../crypto/ec/ec2_oct.c",0xa6,"ossl_ec_GF2m_simple_point2oct");
    FUN_0051f8f0(0x10,100,0);
    goto LAB_005ce233;
  }
  local_60 = (char *)0x0;
  if ((param_6 == (char *)0x0) &&
     (param_6 = (char *)FUN_004b2b10(), local_60 = param_6, param_6 == (char *)0x0)) {
    return 0;
  }
  FUN_004b2c00(param_6);
  uVar5 = FUN_004b2df0(param_6);
  uVar6 = FUN_004b2df0(param_6);
  lVar7 = FUN_004b2df0(param_6);
  if ((lVar7 != 0) && (iVar2 = FUN_004f0d70(param_1,param_2,uVar5,uVar6,param_6), iVar2 != 0)) {
    *param_4 = (char)param_3;
    if ((param_3 != 4) && (iVar2 = FUN_004b7ba0(uVar5), iVar2 == 0)) {
      iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar7,uVar6,uVar5,param_6);
      if (iVar2 == 0) goto LAB_005ce490;
      iVar2 = FUN_004b7d40(lVar7);
      if (iVar2 != 0) {
        *param_4 = *param_4 + '\x01';
      }
    }
    iVar3 = FUN_004b7bb0(uVar5);
    iVar2 = iVar3 + 0xe;
    if (-1 < iVar3 + 7) {
      iVar2 = iVar3 + 7;
    }
    lVar7 = uVar9 - (long)(iVar2 >> 3);
    if (uVar9 < (ulong)(long)(iVar2 >> 3)) {
      FUN_0051f420();
      uVar5 = 0xc9;
    }
    else {
      if (lVar7 == 0) {
        lVar7 = 1;
      }
      else {
        thunk_FUN_00713720(param_4 + 1,0,lVar7);
        lVar7 = lVar7 + 1;
      }
      iVar2 = FUN_004b87d0(uVar5,param_4 + lVar7);
      uVar8 = iVar2 + lVar7;
      if (uVar9 + 1 == uVar8) {
        if ((param_3 & 0xfffffffd) == 4) {
          iVar3 = FUN_004b7bb0(uVar6);
          iVar2 = iVar3 + 7;
          if (iVar3 + 7 < 0) {
            iVar2 = iVar3 + 0xe;
          }
          lVar7 = uVar9 - (long)(iVar2 >> 3);
          if (uVar9 < (ulong)(long)(iVar2 >> 3)) {
            FUN_0051f420();
            uVar5 = 0xdb;
            goto LAB_005ce471;
          }
          if (lVar7 != 0) {
            pcVar1 = param_4 + uVar8;
            uVar8 = uVar8 + lVar7;
            thunk_FUN_00713720(pcVar1,0,lVar7);
          }
          iVar2 = FUN_004b87d0(uVar6,param_4 + uVar8);
          uVar8 = uVar8 + (long)iVar2;
        }
        if (uVar8 == uVar4) {
          FUN_004b2d50(param_6);
LAB_005ce402:
          FUN_004b2b50(local_60);
          return uVar4;
        }
        FUN_0051f420();
        uVar5 = 0xe7;
      }
      else {
        FUN_0051f420();
        uVar5 = 0xd3;
      }
    }
LAB_005ce471:
    FUN_0051f540("../crypto/ec/ec2_oct.c",uVar5,"ossl_ec_GF2m_simple_point2oct");
    FUN_0051f8f0(0x10,0xc0103,0);
  }
LAB_005ce490:
  FUN_004b2d50(param_6);
LAB_005ce233:
  FUN_004b2b50(local_60);
  return 0;
}

