
uint * FUN_006bc6e0(long param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  
  puVar2 = (uint *)FUN_006bc230();
  if (puVar2 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    while( true ) {
      uVar1 = *puVar2 - 0x1c;
      if (0x35 < uVar1) {
        if (*puVar2 != 2) {
          return puVar2;
        }
        piVar3 = *(int **)(puVar2 + 6);
        while( true ) {
          if (piVar3 == (int *)0x0) {
            return (uint *)0x0;
          }
          if (0x35 < *piVar3 - 0x1cU) break;
          if ((0x3400000000001fU >> ((ulong)(*piVar3 - 0x1cU) & 0x3f) & 1) == 0) {
            return puVar2;
          }
          piVar3 = *(int **)(piVar3 + 4);
          *(int **)(puVar2 + 6) = piVar3;
        }
        return puVar2;
      }
      if ((0x3400000000001fU >> ((ulong)uVar1 & 0x3f) & 1) == 0) break;
      puVar2 = *(uint **)(puVar2 + 4);
    }
    return puVar2;
  }
  if ((**(char **)(param_1 + 0x18) == '\0') || (puVar4 = puVar2, **(char **)(param_1 + 0x18) == 'E')
     ) {
    return puVar2;
  }
  do {
    uVar1 = *puVar4;
    if (uVar1 == 4) {
      puVar4 = *(uint **)(puVar4 + 4);
      goto joined_r0x006bc827;
    }
    if (uVar1 < 5) {
      if (uVar1 != 2) break;
      puVar4 = *(uint **)(puVar4 + 6);
    }
    else {
      if ((0x35 < uVar1 - 0x1c) || ((0x3400000000001fU >> ((ulong)(uVar1 - 0x1c) & 0x3f) & 1) == 0))
      break;
      puVar4 = *(uint **)(puVar4 + 4);
    }
  } while (puVar4 != (uint *)0x0);
LAB_006bc767:
  bVar5 = false;
LAB_006bc769:
  piVar3 = (int *)FUN_006ba470(param_1,bVar5);
  if (piVar3 != (int *)0x0) {
    if (((param_2 == 0) && (*puVar2 == 2)) && (*piVar3 == 0x29)) {
      piVar3[4] = 0;
      piVar3[5] = 0;
    }
    puVar2 = (uint *)FUN_006b8b90(param_1,3,puVar2,piVar3);
    return puVar2;
  }
  return (uint *)0x0;
joined_r0x006bc827:
  if (puVar4 == (uint *)0x0) goto LAB_006bc850;
  uVar1 = *puVar4;
  if (8 < uVar1) {
    bVar5 = uVar1 != 0x35;
    goto LAB_006bc769;
  }
  if (6 < uVar1) goto LAB_006bc767;
  if (1 < uVar1 - 1) goto LAB_006bc850;
  puVar4 = *(uint **)(puVar4 + 6);
  goto joined_r0x006bc827;
LAB_006bc850:
  bVar5 = true;
  goto LAB_006bc769;
}

