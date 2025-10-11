
undefined4
FUN_004f6420(long param_1,long param_2,long *param_3,long *param_4,long param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long local_48;
  
  if ((param_1 == 0) || (lVar3 = FUN_004ee2d0(), lVar3 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x58,"ecdsa_sign_setup");
    FUN_0051f8f0(0x10,0xc0102,0);
    return 0;
  }
  lVar4 = FUN_004ee2e0(param_1);
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x5c,"ecdsa_sign_setup");
    FUN_0051f8f0(0x10,0x7d,0);
    return 0;
  }
  iVar1 = FUN_004eed80(param_1);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x61,"ecdsa_sign_setup");
    FUN_0051f8f0(0x10,0x9f,0);
    return 0;
  }
  lVar9 = param_2;
  if ((param_2 == 0) && (lVar9 = FUN_004b2a70(*(undefined8 *)(param_1 + 0x58)), lVar9 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x67,"ecdsa_sign_setup");
    FUN_0051f8f0(0x10,0xc0100,0);
    return 0;
  }
  lVar5 = FUN_004b7700();
  lVar6 = FUN_004b7690();
  lVar7 = FUN_004b7690();
  if ((lVar5 == 0 || lVar6 == 0) || (lVar7 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecdsa_ossl.c",0x70,"ecdsa_sign_setup");
    FUN_0051f8f0(0x10,0xc0100,0);
    local_48 = 0;
  }
  else {
    local_48 = FUN_004efb90(lVar3);
    if (local_48 == 0) {
      FUN_0051f420();
      uVar8 = 0x74;
LAB_004f6761:
      FUN_0051f540("../crypto/ec/ecdsa_ossl.c",uVar8,"ecdsa_sign_setup");
      FUN_0051f8f0(0x10,0x80010,0);
    }
    else {
      uVar8 = FUN_004ef7e0(lVar3);
      uVar2 = FUN_004b7bb0(uVar8);
      iVar1 = FUN_004b8360(lVar5,uVar2);
      if (((iVar1 != 0) && (iVar1 = FUN_004b8360(lVar6,uVar2), iVar1 != 0)) &&
         (iVar1 = FUN_004b8360(lVar7,uVar2), iVar1 != 0)) {
        do {
          do {
            if (param_5 == 0) {
              iVar1 = FUN_004bb5a0(lVar5,uVar8,0,lVar9);
              if (iVar1 == 0) {
                FUN_0051f420();
                uVar8 = 0x8b;
LAB_004f65ac:
                FUN_0051f540("../crypto/ec/ecdsa_ossl.c",uVar8,"ecdsa_sign_setup");
                FUN_0051f8f0(0x10,0x9e,0);
                goto LAB_004f6689;
              }
            }
            else {
              iVar1 = FUN_004bb600(lVar5,uVar8,lVar4,param_5,(long)param_6,lVar9);
              if (iVar1 == 0) {
                FUN_0051f420();
                uVar8 = 0x86;
                goto LAB_004f65ac;
              }
            }
            iVar1 = FUN_004b7ba0(lVar5);
          } while (iVar1 != 0);
          iVar1 = FUN_004f1750(lVar3,local_48,lVar5,0,0,lVar9);
          if (iVar1 == 0) {
            FUN_0051f420();
            uVar8 = 0x93;
            goto LAB_004f6761;
          }
          iVar1 = FUN_004f0d70(lVar3,local_48,lVar7,0);
          if (iVar1 == 0) {
            FUN_0051f420();
            uVar8 = 0x98;
            goto LAB_004f6761;
          }
          iVar1 = FUN_004b8a20(lVar6,lVar7,uVar8,lVar9);
          if (iVar1 == 0) {
            FUN_0051f420();
            uVar8 = 0x9d;
            goto LAB_004f689b;
          }
          iVar1 = FUN_004b7ba0(lVar6);
        } while (iVar1 != 0);
        iVar1 = FUN_004f19a0(lVar3,lVar5,lVar5,lVar9);
        if (iVar1 != 0) {
          FUN_004b7f20(*param_4);
          FUN_004b7f20(*param_3);
          *param_4 = lVar6;
          *param_3 = lVar5;
          uVar2 = 1;
          goto LAB_004f669e;
        }
        FUN_0051f420();
        uVar8 = 0xa4;
LAB_004f689b:
        FUN_0051f540("../crypto/ec/ecdsa_ossl.c",uVar8,"ecdsa_sign_setup");
        FUN_0051f8f0(0x10,0x80003,0);
      }
    }
  }
LAB_004f6689:
  uVar2 = 0;
  FUN_004b7f20(lVar5);
  FUN_004b7f20(lVar6);
LAB_004f669e:
  if (lVar9 != param_2) {
    FUN_004b2b50(lVar9);
  }
  FUN_004efcc0(local_48);
  FUN_004b7f20(lVar7);
  return uVar2;
}

