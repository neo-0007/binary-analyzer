
undefined8 FUN_00471e60(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = FUN_004ee2d0();
  iVar1 = FUN_004f1ca0(uVar2,param_2);
  if (iVar1 != 0) {
    lVar3 = thunk_FUN_0041cdd0(param_2,"encoded-pub-key");
    if (lVar3 == 0) {
LAB_00471f05:
      uVar2 = FUN_004ec060(param_1,param_2);
      return uVar2;
    }
    uVar2 = FUN_004ee2a0(param_1);
    lVar4 = FUN_004b2a70(uVar2);
    if (lVar4 == 0) {
      FUN_004b2b50(0);
    }
    else {
      if (*(int *)(lVar3 + 8) != 5) {
        FUN_004b2b50(lVar4);
        return 0;
      }
      iVar1 = FUN_004ee9a0(param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),lVar4
                          );
      if (iVar1 != 0) {
        FUN_004b2b50(lVar4);
        goto LAB_00471f05;
      }
      FUN_004b2b50(lVar4);
    }
  }
  return 0;
}

