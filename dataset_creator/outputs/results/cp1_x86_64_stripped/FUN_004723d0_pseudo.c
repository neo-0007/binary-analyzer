
long FUN_004723d0(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar4 = FUN_004ed610(*param_1,0);
  if (lVar4 == 0) {
    return 0;
  }
  if (param_1[0x10] == 0) {
    iVar3 = FUN_00470e10(param_1);
    if (iVar3 == 0) goto LAB_00472480;
    lVar2 = param_1[0x10];
joined_r0x004724e6:
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/keymgmt/ec_kmgmt.c",0x4c0,"ec_gen_assign_group");
      FUN_0051f8f0(0x39,0xb1,0);
      FUN_004ed620(lVar4);
      return 0;
    }
    iVar3 = FUN_004ee8b0(lVar4);
    bVar1 = *(byte *)(param_1 + 0xf);
  }
  else {
    if (param_1[2] != 0) {
      iVar3 = FUN_004eb0d0();
      if (iVar3 < 0) goto LAB_00472480;
      FUN_004ef8a0(param_1[0x10],iVar3);
      if (param_1[3] != 0) goto LAB_0047243a;
LAB_00472451:
      lVar2 = param_1[0x10];
      goto joined_r0x004724e6;
    }
    if (param_1[3] != 0) {
LAB_0047243a:
      iVar3 = FUN_004eb230();
      if (iVar3 < 0) goto LAB_00472480;
      FUN_004ef8c0(param_1[0x10],iVar3);
      goto LAB_00472451;
    }
    iVar3 = FUN_004ee8b0(lVar4);
    bVar1 = *(byte *)(param_1 + 0xf);
  }
  if ((bVar1 & 3) == 0) {
    if (0 < iVar3) {
      return lVar4;
    }
  }
  else if ((0 < iVar3) && (iVar3 = FUN_004eda10(lVar4), iVar3 != 0)) {
    return lVar4;
  }
LAB_00472480:
  FUN_004ed620(lVar4);
  return 0;
}

