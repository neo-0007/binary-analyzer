
undefined8 ecx_get_priv_key(long param_1,undefined8 *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (ulong)(iVar1 != 0x40b) + 0x38;
    }
    *param_3 = uVar3;
    return 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x50), puVar4 != (undefined8 *)0x0)) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar3 = 0x20;
      if (*param_3 < 0x20) {
        return 0;
      }
    }
    else {
      uVar3 = (ulong)(iVar1 != 0x40b) + 0x38;
      if (*param_3 < uVar3) {
        return 0;
      }
    }
    *param_3 = uVar3;
    *param_2 = *puVar4;
    *(undefined8 *)((long)param_2 + (uVar3 - 8)) = *(undefined8 *)((long)puVar4 + (uVar3 - 8));
    lVar2 = (long)param_2 - (long)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)puVar4 - lVar2);
    puVar5 = (undefined8 *)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
    for (uVar3 = (ulong)((uint)((int)uVar3 + (int)lVar2) >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return 1;
  }
  return 0;
}

