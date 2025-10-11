
long FUN_0056b110(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = param_2;
  if ((param_2 == 0) && (lVar6 = FUN_004b2a70(*(undefined8 *)(param_1 + 8)), lVar6 == 0)) {
    return 0;
  }
  FUN_004b2c00(lVar6);
  lVar3 = FUN_004b2df0(lVar6);
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar10 = 0x84;
    lVar3 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar3 = lVar4;
    if (lVar4 == 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      lVar5 = *(long *)(param_1 + 0x40);
      lVar1 = *(long *)(param_1 + 0x48);
      if ((lVar3 != 0 && lVar5 != 0) && (lVar1 != 0)) {
        FUN_004b2c00(lVar6);
        uVar10 = FUN_004b2df0(lVar6);
        uVar7 = FUN_004b2df0(lVar6);
        lVar8 = FUN_004b2df0(lVar6);
        if (lVar8 != 0) {
          uVar9 = FUN_004b75a0();
          iVar2 = FUN_004b18d0(uVar7,lVar5,uVar9);
          if (iVar2 != 0) {
            uVar9 = FUN_004b75a0();
            iVar2 = FUN_004b18d0(lVar8,lVar1,uVar9);
            if ((iVar2 != 0) && (iVar2 = FUN_004bacf0(uVar10,uVar7,lVar8,lVar6), iVar2 != 0)) {
              lVar3 = FUN_004b6c40(0,lVar3,uVar10,lVar6);
              FUN_004b2d50(lVar6);
              if (lVar3 != 0) goto LAB_0056b15d;
              goto LAB_0056b2c0;
            }
          }
        }
        FUN_004b2d50(lVar6);
      }
LAB_0056b2c0:
      FUN_0051f420();
      lVar5 = 0;
      FUN_0051f540("../crypto/rsa/rsa_crpt.c",0x8b,"RSA_setup_blinding");
      FUN_0051f8f0(4,0x8c,0);
      goto LAB_0056b1ba;
    }
LAB_0056b15d:
    lVar4 = FUN_004b7690();
    if (lVar4 != 0) {
      FUN_004b7d90(lVar4,*(undefined8 *)(param_1 + 0x28),4);
      lVar5 = FUN_004b1d00(0,lVar3,lVar4,lVar6,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                           *(undefined8 *)(param_1 + 0xa8));
      FUN_004b7fa0(lVar4);
      lVar4 = lVar3;
      if (lVar5 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/rsa/rsa_crpt.c",0xa1,"RSA_setup_blinding");
        FUN_0051f8f0(4,0x80003,0);
      }
      else {
        FUN_004b1b30(lVar5);
      }
      goto LAB_0056b1ba;
    }
    FUN_0051f420();
    uVar10 = 0x96;
  }
  lVar5 = 0;
  FUN_0051f540("../crypto/rsa/rsa_crpt.c",uVar10,"RSA_setup_blinding");
  FUN_0051f8f0(4,0xc0100,0);
  lVar4 = lVar3;
LAB_0056b1ba:
  FUN_004b2d50(lVar6);
  if (lVar6 != param_2) {
    FUN_004b2b50(lVar6);
  }
  if (*(long *)(param_1 + 0x30) != lVar4) {
    FUN_004b7fa0(lVar4);
  }
  return lVar5;
}

