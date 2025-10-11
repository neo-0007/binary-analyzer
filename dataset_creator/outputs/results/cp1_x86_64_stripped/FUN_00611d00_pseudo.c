
undefined4 FUN_00611d00(uint *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_1 == (uint *)0x0) {
LAB_00611e70:
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x1b1,"copy_email");
    FUN_0051f8f0(0x22,0x7d,0);
  }
  else {
    if ((*param_1 & 1) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 4) == 0) {
      if (*(long *)(param_1 + 6) == 0) goto LAB_00611e70;
      uVar3 = FUN_005a1900();
    }
    else {
      uVar3 = FUN_0059e6d0(*(long *)(param_1 + 4));
    }
    iVar2 = -1;
    do {
      iVar2 = FUN_005a9a30(uVar3,0x30,iVar2);
      if (iVar2 < 0) {
        return 1;
      }
      uVar5 = FUN_005a9a70(uVar3,iVar2);
      uVar6 = FUN_005aa210(uVar5);
      lVar7 = FUN_004a22a0(uVar6);
      if (param_3 == 0) {
        if (lVar7 != 0) goto LAB_00611d59;
LAB_00611df0:
        FUN_0051f420();
        puVar4 = (undefined4 *)0x0;
        FUN_0051f540("../crypto/x509/v3_san.c",0x1c4,"copy_email");
        FUN_0051f8f0(0x22,0xc0100,0);
        goto LAB_00611e22;
      }
      FUN_005a9ac0(uVar3,iVar2);
      FUN_005acaf0(uVar5);
      iVar2 = iVar2 + -1;
      if (lVar7 == 0) goto LAB_00611df0;
LAB_00611d59:
      puVar4 = (undefined4 *)FUN_0060e6d0();
      if (puVar4 == (undefined4 *)0x0) goto LAB_00611df0;
      *(long *)(puVar4 + 2) = lVar7;
      *puVar4 = 1;
      iVar1 = FUN_00435f80(param_2,puVar4);
    } while (iVar1 != 0);
    FUN_0051f420();
    lVar7 = 0;
    FUN_0051f540("../crypto/x509/v3_san.c",0x1cb,"copy_email");
    FUN_0051f8f0(0x22,0xc0100,0);
LAB_00611e22:
    FUN_0060e6f0(puVar4);
    thunk_FUN_004a2270(lVar7);
  }
  return 0;
}

