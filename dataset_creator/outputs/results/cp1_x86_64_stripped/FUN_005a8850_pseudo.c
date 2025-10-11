
undefined4 FUN_005a8850(long param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((param_4 == 0) || (param_3 == 0)) {
    if ((param_3 == 0) || (param_4 = thunk_FUN_007129d0(param_3), param_4 == 0)) {
      if (param_2 != 0) {
        return 1;
      }
      FUN_00436430(*(undefined8 *)(param_1 + 0x38),&LAB_005a8810);
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 1;
    }
  }
  else {
    lVar3 = param_4 + -1;
    if (param_4 == 1) {
      lVar3 = 1;
    }
    lVar3 = thunk_FUN_007134f0(param_3,0,lVar3);
    if (lVar3 != 0) {
      return 0;
    }
  }
  param_4 = param_4 - (ulong)(*(char *)(param_3 + -1 + param_4) == '\0');
  if (param_2 == 0) {
    FUN_00436430(*(undefined8 *)(param_1 + 0x38),&LAB_005a8810);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (param_3 == 0 || param_4 == 0) {
    return 1;
  }
  lVar3 = FUN_0041c400(param_3,param_4,"../crypto/x509/x509_vpm.c",0x3b);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 == 0) {
      lVar2 = FUN_00436410();
      *(long *)(param_1 + 0x38) = lVar2;
      if (lVar2 == 0) {
        FUN_0041ad60(lVar3,"../crypto/x509/x509_vpm.c",0x41);
        return 0;
      }
    }
    iVar1 = FUN_00435f80(lVar2,lVar3);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_0041ad60(lVar3,"../crypto/x509/x509_vpm.c",0x46);
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x38));
    if (iVar1 == 0) {
      FUN_004360b0(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return 0;
}

