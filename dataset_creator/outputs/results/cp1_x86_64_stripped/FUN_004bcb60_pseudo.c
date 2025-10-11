
ulong FUN_004bcb60(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar2 = FUN_004b7ba0();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 2) == 0) {
      puVar4 = (ulong *)*param_1;
      uVar1 = *(uint *)(param_1 + 1);
      uVar5 = *puVar4;
      iVar2 = 0;
      if (uVar1 == 1) {
        if (uVar5 < param_2) {
          *puVar4 = param_2 - uVar5;
          *(undefined4 *)(param_1 + 2) = 1;
          return (ulong)uVar1;
        }
      }
      else {
        puVar3 = puVar4;
        iVar6 = 0;
        if (uVar5 < param_2) {
          do {
            uVar5 = uVar5 - param_2;
            puVar4 = puVar3 + 1;
            iVar2 = iVar6 + 1;
            param_2 = 1;
            *puVar3 = uVar5;
            uVar5 = *puVar4;
            puVar3 = puVar4;
            iVar6 = iVar2;
          } while (uVar5 == 0);
        }
      }
      *puVar4 = uVar5 - param_2;
      if ((uVar5 - param_2 == 0) && (uVar1 - 1 == iVar2)) {
        *(int *)(param_1 + 1) = iVar2;
      }
      uVar5 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar5 = FUN_004bcc70(param_1,param_2);
      *(undefined4 *)(param_1 + 2) = 1;
    }
  }
  else {
    uVar5 = FUN_004b8190(param_1,param_2);
    if ((int)uVar5 != 0) {
      FUN_004b7c90(param_1,1);
      uVar5 = uVar5 & 0xffffffff;
    }
  }
  return uVar5;
}

