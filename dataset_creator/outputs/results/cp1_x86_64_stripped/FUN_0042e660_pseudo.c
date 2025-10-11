
undefined4
FUN_0042e660(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long local_68;
  
  iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x56,"rsa_ossl_public_encrypt");
    FUN_0051f8f0(4,0x69,0);
    return 0xffffffff;
  }
  iVar1 = FUN_004b77f0(*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
  if (iVar1 < 1) {
    FUN_0051f420();
    uVar5 = 0x5b;
  }
  else {
    iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x28));
    if ((iVar1 < 0xc01) || (iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x30)), iVar1 < 0x41)) {
      lVar4 = FUN_004b2a70(*(undefined8 *)(param_4 + 8));
      if (lVar4 == 0) {
        local_68 = 0;
        lVar7 = 0;
        uVar3 = 0xffffffff;
      }
      else {
        FUN_004b2c00(lVar4);
        uVar5 = FUN_004b2df0(lVar4);
        lVar6 = FUN_004b2df0(lVar4);
        iVar2 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x28));
        iVar1 = iVar2 + 0xe;
        if (-1 < iVar2 + 7) {
          iVar1 = iVar2 + 7;
        }
        iVar1 = iVar1 >> 3;
        local_68 = (long)iVar1;
        lVar7 = FUN_0041ad90(local_68,"../crypto/rsa/rsa_ossl.c",0x6d);
        if ((lVar6 == 0) || (lVar7 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x6f,"rsa_ossl_public_encrypt");
          uVar3 = 0xffffffff;
          FUN_0051f8f0(4,0xc0100,0);
        }
        else {
          if (param_5 == 3) {
            iVar2 = FUN_0056bfa0(lVar7,iVar1,param_2,param_1);
          }
          else if (param_5 == 4) {
            iVar2 = FUN_0056c270(*(undefined8 *)(param_4 + 8),lVar7,iVar1,param_2,param_1,0,0,0,0);
          }
          else {
            if (param_5 != 1) {
              FUN_0051f420();
              FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x81,"rsa_ossl_public_encrypt");
              uVar3 = 0xffffffff;
              FUN_0051f8f0(4,0x76,0);
              goto LAB_0042e807;
            }
            iVar2 = FUN_00430070(*(undefined8 *)(param_4 + 8),lVar7,iVar1,param_2,param_1);
          }
          uVar3 = 0xffffffff;
          if ((0 < iVar2) && (lVar8 = FUN_004b84d0(lVar7,iVar1,uVar5), lVar8 != 0)) {
            iVar2 = FUN_004b77f0(uVar5,*(undefined8 *)(param_4 + 0x28));
            if (iVar2 < 0) {
              uVar9 = *(undefined8 *)(param_4 + 0x28);
              if ((*(byte *)(param_4 + 0xa4) & 2) != 0) {
                lVar8 = FUN_004b9bc0(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),uVar9,lVar4);
                if (lVar8 == 0) goto LAB_0042e807;
                uVar9 = *(undefined8 *)(param_4 + 0x28);
              }
              uVar3 = 0xffffffff;
              iVar2 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                                (lVar6,uVar5,*(undefined8 *)(param_4 + 0x30),uVar9,lVar4,
                                 *(undefined8 *)(param_4 + 0xa8));
              if (iVar2 != 0) {
                uVar3 = FUN_004b87b0(lVar6,param_3,iVar1);
              }
            }
            else {
              FUN_0051f420();
              FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x8c,"rsa_ossl_public_encrypt");
              FUN_0051f8f0(4,0x84,0);
            }
          }
        }
      }
LAB_0042e807:
      FUN_004b2d50(lVar4);
      FUN_004b2b50(lVar4);
      FUN_0041aef0(lVar7,local_68,"../crypto/rsa/rsa_ossl.c",0xa1);
      return uVar3;
    }
    FUN_0051f420();
    uVar5 = 0x62;
  }
  FUN_0051f540("../crypto/rsa/rsa_ossl.c",uVar5,"rsa_ossl_public_encrypt");
  FUN_0051f8f0(4,0x65,0);
  return 0xffffffff;
}

