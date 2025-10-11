
ulong FUN_004bcc70(long *param_1,ulong param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  
  if (param_2 != 0) {
    iVar2 = FUN_004b7ba0();
    if (iVar2 != 0) {
      uVar5 = FUN_004b8190(param_1,param_2);
      return uVar5;
    }
    uVar3 = *(uint *)(param_1 + 2);
    if (uVar3 != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar3 = FUN_004bcb60(param_1,param_2);
      iVar2 = FUN_004b7ba0(param_1);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
        return (ulong)uVar3;
      }
      return (ulong)uVar3;
    }
    iVar2 = (int)param_1[1];
    lVar4 = 0;
    do {
      if (iVar2 <= (int)lVar4) {
        if (iVar2 != (int)lVar4) {
          return 1;
        }
        lVar4 = FUN_004b8240(param_1,iVar2 + 1);
        if (lVar4 != 0) {
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          *(ulong *)(*param_1 + (long)iVar2 * 8) = param_2;
          return 1;
        }
        return (ulong)uVar3;
      }
      puVar1 = (ulong *)(*param_1 + lVar4 * 8);
      bVar6 = CARRY8(param_2,*puVar1);
      *puVar1 = param_2 + *puVar1;
      lVar4 = lVar4 + 1;
      param_2 = 1;
    } while (bVar6);
  }
  return 1;
}

