
ulong FUN_0069d050(long *param_1)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  
  if ((byte *)param_1[2] < (byte *)param_1[3]) {
    pbVar3 = (byte *)param_1[2] + 1;
    param_1[2] = (long)pbVar3;
    if (pbVar3 < (byte *)param_1[3]) {
      return (ulong)*pbVar3;
    }
    if (*(code **)(*param_1 + 0x48) == FUN_0069c950) {
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x0069d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x48))();
    return uVar4;
  }
  pcVar1 = *(code **)(*param_1 + 0x50);
  if (pcVar1 == FUN_0069cb50) {
    pcVar1 = *(code **)(*param_1 + 0x48);
    if (pcVar1 == FUN_0069c950) {
      return 0xffffffff;
    }
    iVar2 = (*pcVar1)();
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    pbVar5 = (byte *)param_1[3];
    pbVar3 = (byte *)(param_1[2] + 1);
    param_1[2] = (long)pbVar3;
  }
  else {
    iVar2 = (*pcVar1)();
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    pbVar3 = (byte *)param_1[2];
    pbVar5 = (byte *)param_1[3];
  }
  if (pbVar3 < pbVar5) {
    return (ulong)*pbVar3;
  }
  if (*(code **)(*param_1 + 0x48) == FUN_0069c950) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0069d133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*param_1 + 0x48))();
  return uVar4;
}

