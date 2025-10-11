
long FUN_00472590(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043b840();
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_004ed610(*param_1,0);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_1[0x10] == 0) {
    iVar1 = FUN_00470e10(param_1);
    if (iVar1 == 0) goto LAB_0047263c;
LAB_00472616:
    if (param_1[0x10] == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/keymgmt/ec_kmgmt.c",0x4c0,"ec_gen_assign_group");
      FUN_0051f8f0(0x39,0xb1,0);
      goto LAB_0047263c;
    }
  }
  else {
    if (param_1[2] != 0) {
      iVar1 = FUN_004eb0d0();
      if (iVar1 < 0) goto LAB_0047263c;
      FUN_004ef8a0(param_1[0x10],iVar1);
      if (param_1[3] != 0) {
        iVar1 = FUN_004eb230();
        goto joined_r0x0047266a;
      }
      goto LAB_00472616;
    }
    if (param_1[3] != 0) {
      iVar1 = FUN_004eb230();
joined_r0x0047266a:
      if (iVar1 < 0) goto LAB_0047263c;
      FUN_004ef8c0(param_1[0x10],iVar1);
      goto LAB_00472616;
    }
  }
  iVar1 = FUN_004ee8b0(lVar2);
  if ((*(byte *)(param_1 + 0xf) & 3) == 0) {
    if (*(int *)((long)param_1 + 0x7c) != -1) {
      if (iVar1 < 1) goto LAB_0047263c;
LAB_00472680:
      iVar1 = FUN_004eb980(lVar2);
      if (iVar1 == 0) goto LAB_0047263c;
      goto LAB_0047268c;
    }
    if (param_1[4] == 0) {
      if (0 < iVar1) {
        return lVar2;
      }
      goto LAB_0047263c;
    }
    if (iVar1 < 1) goto LAB_0047263c;
  }
  else {
    if ((iVar1 < 1) || (iVar1 = FUN_004eda10(lVar2), iVar1 == 0)) goto LAB_0047263c;
    if (*(int *)((long)param_1 + 0x7c) != -1) goto LAB_00472680;
LAB_0047268c:
    if (param_1[4] == 0) {
      return lVar2;
    }
  }
  iVar1 = FUN_004eb160(lVar2);
  if (iVar1 != 0) {
    return lVar2;
  }
LAB_0047263c:
  FUN_004ed620(lVar2);
  return 0;
}

