
uint * FUN_006b8b90(long param_1,uint param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (param_2 < 0x32) {
    if (0x28 < param_2) {
      switch(param_2) {
      case 0x29:
      case 0x2e:
      case 0x2f:
        goto switchD_006b8c36_caseD_29;
      case 0x2a:
      case 0x31:
        goto switchD_006b8c36_caseD_2a;
      case 0x2b:
      case 0x2d:
        goto switchD_006b8c36_caseD_2b;
      default:
        return (uint *)0x0;
      case 0x30:
        goto switchD_006b8c36_caseD_30;
      }
    }
    uVar2 = 1L << ((byte)param_2 & 0x3f);
    if ((uVar2 & 0x17c00fff600) != 0) {
switchD_006b8c36_caseD_30:
      if (param_3 == 0) {
        return (uint *)0x0;
      }
      goto switchD_006b8c36_caseD_29;
    }
    if ((uVar2 & 0x1fe000000) != 0) goto switchD_006b8c36_caseD_29;
    if ((uVar2 & 0x20000081e) == 0) {
      return (uint *)0x0;
    }
  }
  else {
    if (0x1d < param_2 - 0x34) {
      return (uint *)0x0;
    }
    uVar2 = 1L << ((byte)(param_2 - 0x34) & 0x3f);
    if ((uVar2 & 0x1c71107) != 0) goto switchD_006b8c36_caseD_30;
    if ((uVar2 & 0xa002ef8) == 0) {
      if ((uVar2 & 0x34000000) == 0) {
        return (uint *)0x0;
      }
      goto switchD_006b8c36_caseD_29;
    }
  }
switchD_006b8c36_caseD_2b:
  if (param_3 == 0) {
    return (uint *)0x0;
  }
switchD_006b8c36_caseD_2a:
  if (param_4 == 0) {
    return (uint *)0x0;
  }
switchD_006b8c36_caseD_29:
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) <= iVar1) {
    return (uint *)0x0;
  }
  puVar3 = (uint *)((long)iVar1 * 0x20 + *(long *)(param_1 + 0x20));
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  *puVar3 = param_2;
  *(long *)(puVar3 + 4) = param_3;
  *(long *)(puVar3 + 6) = param_4;
  return puVar3;
}

