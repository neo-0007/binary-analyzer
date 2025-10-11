
ulong FUN_0069d810(long *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 < (int *)param_1[3]) {
    iVar3 = *piVar1;
    param_1[2] = (long)(piVar1 + 1);
    if (iVar3 != -1) {
      if ((uint *)param_1[2] < (uint *)param_1[3]) {
        return (ulong)*(uint *)param_1[2];
      }
      if (*(code **)(*param_1 + 0x48) != FUN_0069c9e0) {
                    /* WARNING: Could not recover jumptable at 0x0069d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*param_1 + 0x48))();
        return uVar4;
      }
    }
    return 0xffffffff;
  }
  pcVar2 = *(code **)(*param_1 + 0x50);
  if (pcVar2 == FUN_0069cba0) {
    pcVar2 = *(code **)(*param_1 + 0x48);
    if (pcVar2 == FUN_0069c9e0) {
      return 0xffffffff;
    }
    iVar3 = (*pcVar2)();
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    iVar3 = *(int *)param_1[2];
    param_1[2] = (long)((int *)param_1[2] + 1);
  }
  else {
    iVar3 = (*pcVar2)();
  }
  if (iVar3 != -1) {
    if ((uint *)param_1[2] < (uint *)param_1[3]) {
      return (ulong)*(uint *)param_1[2];
    }
    if (*(code **)(*param_1 + 0x48) != FUN_0069c9e0) {
                    /* WARNING: Could not recover jumptable at 0x0069d8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x48))();
      return uVar4;
    }
  }
  return 0xffffffff;
}

