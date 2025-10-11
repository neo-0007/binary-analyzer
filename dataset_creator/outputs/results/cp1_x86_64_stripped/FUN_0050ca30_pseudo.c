
ulong FUN_0050ca30(long param_1,undefined8 param_2,uint param_3,char *param_4,ulong param_5,
                  char *param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char *local_60;
  
  if ((param_3 != 4) && ((param_3 & 0xfffffffb) != 2)) {
    FUN_0051f420();
    pcVar7 = (char *)0x0;
    FUN_0051f540("../crypto/ec/ecp_oct.c",0xac,"ossl_ec_GFp_simple_point2oct");
    FUN_0051f8f0(0x10,0x68,0);
    goto LAB_0050cae3;
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
    FUN_0051f540("../crypto/ec/ecp_oct.c",0xb4,"ossl_ec_GFp_simple_point2oct");
    FUN_0051f8f0(0x10,100,0);
    return 0;
  }
  iVar3 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x40));
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
  pcVar7 = param_4;
  if (param_4 == (char *)0x0) goto LAB_0050cc38;
  if (param_5 < uVar4) {
    FUN_0051f420();
    pcVar7 = (char *)0x0;
    FUN_0051f540("../crypto/ec/ecp_oct.c",0xc5,"ossl_ec_GFp_simple_point2oct");
    FUN_0051f8f0(0x10,100,0);
    goto LAB_0050cae3;
  }
  pcVar7 = (char *)0x0;
  local_60 = param_6;
  if ((param_6 == (char *)0x0) &&
     (pcVar7 = (char *)FUN_004b2a70(*(undefined8 *)(param_1 + 0xa8)), local_60 = pcVar7,
     pcVar7 == (char *)0x0)) {
    return 0;
  }
  FUN_004b2c00(local_60);
  uVar5 = FUN_004b2df0(local_60);
  lVar6 = FUN_004b2df0(local_60);
  if ((lVar6 != 0) && (iVar2 = FUN_004f0d70(param_1,param_2,uVar5,lVar6,local_60), iVar2 != 0)) {
    cVar8 = (char)param_3;
    if ((param_3 & 0xfffffffb) == 2) {
      iVar2 = FUN_004b7d40(lVar6);
      if (iVar2 != 0) {
        cVar8 = cVar8 + '\x01';
      }
    }
    *param_4 = cVar8;
    iVar3 = FUN_004b7bb0(uVar5);
    iVar2 = iVar3 + 7;
    if (iVar3 + 7 < 0) {
      iVar2 = iVar3 + 0xe;
    }
    lVar10 = uVar9 - (long)(iVar2 >> 3);
    if (uVar9 < (ulong)(long)(iVar2 >> 3)) {
      FUN_0051f420();
      uVar5 = 0xe3;
    }
    else {
      if (lVar10 == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = lVar10 + 1;
        thunk_FUN_00713720(param_4 + 1,0,lVar10);
      }
      iVar2 = FUN_004b87d0(uVar5,param_4 + lVar11);
      uVar12 = lVar11 + iVar2;
      if (uVar9 + 1 == uVar12) {
        if ((param_3 & 0xfffffffd) == 4) {
          iVar3 = FUN_004b7bb0(lVar6);
          iVar2 = iVar3 + 7;
          if (iVar3 + 7 < 0) {
            iVar2 = iVar3 + 0xe;
          }
          lVar10 = uVar9 - (long)(iVar2 >> 3);
          if (uVar9 < (ulong)(long)(iVar2 >> 3)) {
            FUN_0051f420();
            uVar5 = 0xf5;
            goto LAB_0050cca1;
          }
          if (lVar10 != 0) {
            pcVar1 = param_4 + uVar12;
            uVar12 = uVar12 + lVar10;
            thunk_FUN_00713720(pcVar1,0,lVar10);
          }
          iVar2 = FUN_004b87d0(lVar6,param_4 + uVar12);
          uVar12 = uVar12 + (long)iVar2;
        }
        if (uVar12 == uVar4) {
          FUN_004b2d50(local_60);
LAB_0050cc38:
          FUN_004b2b50(pcVar7);
          return uVar4;
        }
        FUN_0051f420();
        uVar5 = 0x101;
      }
      else {
        FUN_0051f420();
        uVar5 = 0xed;
      }
    }
LAB_0050cca1:
    FUN_0051f540("../crypto/ec/ecp_oct.c",uVar5,"ossl_ec_GFp_simple_point2oct");
    FUN_0051f8f0(0x10,0xc0103,0);
  }
  FUN_004b2d50(local_60);
LAB_0050cae3:
  FUN_004b2b50(pcVar7);
  return 0;
}

