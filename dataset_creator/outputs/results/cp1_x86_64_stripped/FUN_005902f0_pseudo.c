
long FUN_005902f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long local_60;
  
  uVar2 = FUN_004ee2e0();
  uVar3 = FUN_004ee2d0(param_1);
  uVar4 = FUN_004ef7e0(uVar3);
  uVar5 = FUN_004ee2a0(param_1);
  lVar6 = FUN_004efb90(uVar3);
  lVar7 = FUN_004b2a70(uVar5);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    FUN_0051f420();
    uVar2 = 0xd8;
LAB_005905b1:
    lVar11 = 0;
    FUN_0051f540("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_gen");
    FUN_0051f8f0(0x35,0xc0100,0);
    local_60 = 0;
  }
  else {
    FUN_004b2c00(lVar7);
    uVar5 = FUN_004b2df0(lVar7);
    uVar8 = FUN_004b2df0(lVar7);
    uVar9 = FUN_004b2df0(lVar7);
    lVar10 = FUN_004b2df0(lVar7);
    if (lVar10 == 0) {
      FUN_0051f420();
      uVar2 = 0xe2;
      goto LAB_005905b1;
    }
    lVar11 = FUN_004b7690();
    local_60 = FUN_004b7690();
    if ((lVar11 == 0) || (local_60 == 0)) {
      FUN_0051f420();
      uVar2 = 0xee;
    }
    else {
      do {
        do {
          do {
            iVar1 = FUN_004bb5a0(uVar5,uVar4,0,lVar7);
            if (iVar1 == 0) {
              FUN_0051f420();
              uVar2 = 0xfd;
LAB_00590569:
              FUN_0051f540("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_gen");
              FUN_0051f8f0(0x35,0xc0103,0);
              goto LAB_00590588;
            }
            iVar1 = FUN_004f1750(uVar3,lVar6,uVar5,0,0,lVar7);
            if (iVar1 == 0) {
LAB_00590558:
              FUN_0051f420();
              uVar2 = 0x105;
              goto LAB_00590569;
            }
            iVar1 = FUN_004f0d70(uVar3,lVar6,uVar9,0,lVar7);
            if (iVar1 == 0) goto LAB_00590558;
            iVar1 = FUN_004b8aa0(lVar11,param_2,uVar9,uVar4);
            if (iVar1 == 0) goto LAB_00590558;
            iVar1 = FUN_004b7ba0(lVar11);
          } while (iVar1 != 0);
          iVar1 = FUN_004b1810(uVar8,lVar11,uVar5);
          if (iVar1 == 0) {
            FUN_0051f420();
            uVar2 = 0x10e;
            goto LAB_00590569;
          }
          iVar1 = FUN_004b7840(uVar8,uVar4);
        } while (iVar1 == 0);
        uVar12 = FUN_004b75a0();
        iVar1 = FUN_004b1810(local_60,uVar2,uVar12);
        if (iVar1 == 0) {
LAB_00590618:
          FUN_0051f420();
          FUN_0051f540("../crypto/sm2/sm2_sign.c",0x11a,"sm2_sig_gen");
          FUN_0051f8f0(0x35,0x80003,0);
          goto LAB_00590588;
        }
        iVar1 = FUN_004f19a0(uVar3,local_60,local_60,lVar7);
        if (iVar1 == 0) goto LAB_00590618;
        iVar1 = FUN_004b8fe0(lVar10,uVar2,lVar11,uVar4,lVar7);
        if (iVar1 == 0) goto LAB_00590618;
        iVar1 = FUN_004b18d0(lVar10,uVar5,lVar10);
        if (iVar1 == 0) goto LAB_00590618;
        iVar1 = FUN_004b8fe0(local_60,local_60,lVar10,uVar4);
        if (iVar1 == 0) goto LAB_00590618;
        iVar1 = FUN_004b7ba0(local_60);
      } while (iVar1 != 0);
      lVar10 = FUN_004eac60();
      if (lVar10 != 0) {
        FUN_004eb000(lVar10,lVar11,local_60);
        goto LAB_00590531;
      }
      FUN_0051f420();
      uVar2 = 0x124;
    }
    FUN_0051f540("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_gen");
    FUN_0051f8f0(0x35,0xc0100,0);
  }
LAB_00590588:
  lVar10 = 0;
  FUN_004b7fa0(lVar11);
  FUN_004b7fa0(local_60);
LAB_00590531:
  FUN_004b2b50(lVar7);
  FUN_004efcc0(lVar6);
  return lVar10;
}

