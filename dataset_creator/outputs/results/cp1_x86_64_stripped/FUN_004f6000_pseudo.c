
undefined4 FUN_004f6000(long *param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar5 = FUN_004b2a70(*(undefined8 *)(param_4 + 0x58));
  if (lVar5 == 0) {
    lVar7 = 0;
    lVar6 = 0;
    lVar10 = 0;
    uVar4 = 0;
    goto LAB_004f61d2;
  }
  FUN_004b2c00(lVar5);
  lVar6 = FUN_004b2df0(lVar5);
  if (lVar6 == 0) {
    lVar7 = 0;
    lVar10 = 0;
    uVar4 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdh_ossl.c",0x42,"ossl_ecdh_simple_compute_key");
    FUN_0051f8f0(0x10,0xc0100,0);
    goto LAB_004f61d2;
  }
  lVar7 = FUN_004ee2e0(param_4);
  if (lVar7 == 0) {
    lVar10 = 0;
    uVar4 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdh_ossl.c",0x48,"ossl_ecdh_simple_compute_key");
    FUN_0051f8f0(0x10,0x7d,0);
    lVar7 = 0;
    goto LAB_004f61d2;
  }
  uVar8 = FUN_004ee2d0(param_4);
  uVar9 = FUN_004ee6c0(param_4);
  if (((uVar9 & 0x1000) != 0) &&
     ((iVar1 = FUN_004ef800(uVar8,lVar6,0), iVar1 == 0 ||
      (iVar1 = FUN_004bacf0(lVar6,lVar6,lVar7,lVar5), lVar7 = lVar6, iVar1 == 0)))) {
    lVar7 = 0;
    uVar4 = 0;
    lVar10 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdh_ossl.c",0x55,"ossl_ecdh_simple_compute_key");
    FUN_0051f8f0(0x10,0xc0100,0);
    goto LAB_004f61d2;
  }
  lVar10 = FUN_004efb90(uVar8);
  if (lVar10 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdh_ossl.c",0x5c,"ossl_ecdh_simple_compute_key");
    uVar8 = 0xc0100;
LAB_004f6367:
    lVar7 = 0;
    uVar4 = 0;
    FUN_0051f8f0(0x10,uVar8,0);
  }
  else {
    iVar1 = FUN_004f1750(uVar8,lVar10,0,param_3,lVar7,lVar5);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar8 = 0x61;
    }
    else {
      iVar1 = FUN_004f0d70(uVar8,lVar10,lVar6,0,lVar5);
      if (iVar1 != 0) {
        iVar2 = FUN_004efad0(uVar8);
        iVar1 = iVar2 + 0xe;
        if (-1 < iVar2 + 7) {
          iVar1 = iVar2 + 7;
        }
        iVar3 = FUN_004b7bb0(lVar6);
        iVar2 = iVar3 + 7;
        if (iVar3 + 7 < 0) {
          iVar2 = iVar3 + 0xe;
        }
        uVar9 = (ulong)(iVar1 >> 3);
        iVar2 = iVar2 >> 3;
        if ((ulong)(long)iVar2 <= uVar9) {
          lVar7 = FUN_0041ad90(uVar9,"../crypto/ec/ecdh_ossl.c",0x79);
          if (lVar7 == 0) {
            FUN_0051f420();
            uVar4 = 0;
            FUN_0051f540("../crypto/ec/ecdh_ossl.c",0x7a,"ossl_ecdh_simple_compute_key");
            FUN_0051f8f0(0x10,0xc0100,0);
          }
          else {
            thunk_FUN_00713720(lVar7,0);
            iVar1 = FUN_004b87d0(lVar6,lVar7 + (uVar9 - (long)iVar2));
            if (iVar2 == iVar1) {
              *param_1 = lVar7;
              lVar7 = 0;
              *param_2 = uVar9;
              uVar4 = 1;
            }
            else {
              FUN_0051f420();
              uVar4 = 0;
              FUN_0051f540("../crypto/ec/ecdh_ossl.c",0x80,"ossl_ecdh_simple_compute_key");
              FUN_0051f8f0(0x10,0x80003,0);
            }
          }
          goto LAB_004f61d2;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ecdh_ossl.c",0x76,"ossl_ecdh_simple_compute_key");
        uVar8 = 0xc0103;
        goto LAB_004f6367;
      }
      FUN_0051f420();
      uVar8 = 0x6b;
    }
    uVar4 = 0;
    lVar7 = 0;
    FUN_0051f540("../crypto/ec/ecdh_ossl.c",uVar8,"ossl_ecdh_simple_compute_key");
    FUN_0051f8f0(0x10,0x9b,0);
  }
LAB_004f61d2:
  FUN_004b7780(lVar6);
  FUN_004efdb0(lVar10);
  FUN_004b2d50(lVar5);
  FUN_004b2b50(lVar5);
  FUN_0041ad60(lVar7,"../crypto/ec/ecdh_ossl.c",0x90);
  return uVar4;
}

