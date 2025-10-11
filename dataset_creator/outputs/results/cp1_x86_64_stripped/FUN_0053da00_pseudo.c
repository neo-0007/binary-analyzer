
ulong FUN_0053da00(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  
  bVar10 = param_1 == 0 || param_2 == 0;
  if (param_1 == 0 || param_2 == 0) {
    return (ulong)(param_2 == 0 && param_1 == 0);
  }
  lVar8 = *(long *)(param_1 + 0x60);
  lVar1 = *(long *)(param_2 + 0x60);
  uVar6 = *(ulong *)(param_1 + 0x68);
  uVar3 = *(ulong *)(param_2 + 0x68);
  if (lVar8 == lVar1) {
    bVar10 = uVar6 == 0;
    bVar9 = uVar3 == 0;
    uVar7 = uVar6 | uVar3;
    lVar8 = lVar1;
  }
  else if (lVar8 == 0) {
    if (lVar1 == 0) goto LAB_0053da6f;
    if (*(long *)(lVar1 + 0xb0) == 0) {
      return 0xfffffffe;
    }
LAB_0053db04:
    if (uVar6 == 0) {
      bVar10 = true;
      uVar7 = uVar3;
    }
    else {
      uVar5 = FUN_0053d4f0(param_1,lVar1);
      if (uVar5 == 0) goto LAB_0053da6f;
      uVar7 = uVar3 | uVar5;
      uVar6 = uVar5;
    }
    bVar9 = uVar3 == 0;
    lVar8 = lVar1;
  }
  else {
    if (lVar1 == 0) {
LAB_0053da6f:
      if (lVar8 == 0) {
        return 0xfffffffe;
      }
    }
    else {
      uVar4 = FUN_0053e710(lVar1);
      iVar2 = FUN_0053e720(lVar8,uVar4);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/keymgmt_lib.c",0x17b,"evp_keymgmt_util_match");
        FUN_0051f8f0(6,0x65,0);
        return 0xffffffff;
      }
      if (*(long *)(lVar1 + 0xb0) != 0) goto LAB_0053db04;
    }
    if (*(long *)(lVar8 + 0xb0) == 0) {
      return 0xfffffffe;
    }
    if (uVar3 != 0) {
      uVar3 = FUN_0053d4f0(param_2,lVar8);
      if (uVar3 == 0) {
        return 0xfffffffe;
      }
      if (uVar6 == 0) {
        return 0;
      }
      goto LAB_0053db8f;
    }
    bVar10 = uVar6 == 0;
    bVar9 = true;
    uVar7 = uVar6;
  }
  if (uVar7 == 0) {
    return 1;
  }
  if ((bVar10) || (bVar9)) {
    return 0;
  }
LAB_0053db8f:
  uVar6 = FUN_0053eaa0(lVar8,uVar6,uVar3,param_3);
  return uVar6;
}

