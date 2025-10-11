
int FUN_0042e1b0(int param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x26b,"rsa_ossl_public_decrypt");
    FUN_0051f8f0(4,0x69,0);
    return -1;
  }
  iVar1 = FUN_004b77f0(*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
  if (iVar1 < 1) {
    FUN_0051f420();
    uVar5 = 0x270;
  }
  else {
    iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x28));
    if ((iVar1 < 0xc01) || (iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x30)), iVar1 < 0x41)) {
      lVar4 = FUN_004b2a70(*(undefined8 *)(param_4 + 8));
      if (lVar4 == 0) {
        lVar7 = 0;
        lVar10 = 0;
        iVar1 = -1;
      }
      else {
        FUN_004b2c00(lVar4);
        uVar5 = FUN_004b2df0(lVar4);
        lVar6 = FUN_004b2df0(lVar4);
        iVar1 = FUN_004b7bb0(*(undefined8 *)(param_4 + 0x28));
        iVar2 = iVar1 + 7;
        if (iVar1 + 7 < 0) {
          iVar2 = iVar1 + 0xe;
        }
        iVar2 = iVar2 >> 3;
        lVar10 = (long)iVar2;
        lVar7 = FUN_0041ad90(lVar10,"../crypto/rsa/rsa_ossl.c",0x282);
        if ((lVar6 == 0) || (lVar7 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x284,"rsa_ossl_public_decrypt");
          iVar1 = -1;
          FUN_0051f8f0(4,0xc0100,0);
        }
        else if (iVar2 < param_1) {
          FUN_0051f420();
          FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x28d,"rsa_ossl_public_decrypt");
          iVar1 = -1;
          FUN_0051f8f0(4,0x6c,0);
        }
        else {
          iVar1 = -1;
          lVar8 = FUN_004b84d0(param_2,param_1,uVar5);
          if (lVar8 != 0) {
            iVar3 = FUN_004b77f0(uVar5,*(undefined8 *)(param_4 + 0x28));
            if (iVar3 < 0) {
              uVar11 = *(undefined8 *)(param_4 + 0x28);
              if ((*(byte *)(param_4 + 0xa4) & 2) != 0) {
                lVar8 = FUN_004b9bc0(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),uVar11,lVar4);
                if (lVar8 == 0) goto LAB_0042e3a8;
                uVar11 = *(undefined8 *)(param_4 + 0x28);
              }
              iVar1 = -1;
              iVar3 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                                (lVar6,uVar5,*(undefined8 *)(param_4 + 0x30),uVar11,lVar4,
                                 *(undefined8 *)(param_4 + 0xa8));
              if (iVar3 != 0) {
                if (param_5 == 5) {
                  puVar9 = (undefined8 *)FUN_004b7440(lVar6);
                  if ((((uint)*puVar9 & 0xf) != 0xc) &&
                     (iVar3 = FUN_004b18d0(lVar6,*(undefined8 *)(param_4 + 0x28)), iVar3 == 0))
                  goto LAB_0042e3a8;
                  iVar1 = -1;
                  iVar3 = FUN_004b87b0(lVar6,lVar7,iVar2);
                  if (iVar3 < 0) goto LAB_0042e3a8;
                  iVar1 = FUN_004343b0(param_3,iVar2,lVar7,iVar3,iVar2);
                }
                else {
                  iVar1 = FUN_004b87b0(lVar6,lVar7,iVar2);
                  if (iVar1 < 0) {
                    iVar1 = -1;
                    goto LAB_0042e3a8;
                  }
                  if (param_5 == 3) {
                    thunk_FUN_00713a50(param_3,lVar7,(long)iVar1);
                    goto LAB_0042e3a8;
                  }
                  if (param_5 != 1) {
                    FUN_0051f420();
                    FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x2b5,"rsa_ossl_public_decrypt");
                    iVar1 = -1;
                    FUN_0051f8f0(4,0x76,0);
                    goto LAB_0042e3a8;
                  }
                  iVar1 = FUN_0042fe40(param_3,iVar2,lVar7,iVar1,iVar2);
                }
                if (iVar1 < 0) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x2b9,"rsa_ossl_public_decrypt");
                  FUN_0051f8f0(4,0x72,0);
                }
              }
            }
            else {
              FUN_0051f420();
              FUN_0051f540("../crypto/rsa/rsa_ossl.c",0x295,"rsa_ossl_public_decrypt");
              FUN_0051f8f0(4,0x84,0);
            }
          }
        }
      }
LAB_0042e3a8:
      FUN_004b2d50(lVar4);
      FUN_004b2b50(lVar4);
      FUN_0041aef0(lVar7,lVar10,"../crypto/rsa/rsa_ossl.c",0x2be);
      return iVar1;
    }
    FUN_0051f420();
    uVar5 = 0x277;
  }
  FUN_0051f540("../crypto/rsa/rsa_ossl.c",uVar5,"rsa_ossl_public_decrypt");
  FUN_0051f8f0(4,0x65,0);
  return -1;
}

