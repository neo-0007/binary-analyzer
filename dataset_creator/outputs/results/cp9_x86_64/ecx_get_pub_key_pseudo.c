
undefined8 ecx_get_pub_key(long param_1,undefined8 *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar4 = 0x20;
    }
    else {
      uVar4 = (ulong)(iVar1 != 0x40b) + 0x38;
    }
    *param_3 = uVar4;
    return 1;
  }
  if (lVar2 != 0) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar4 = 0x20;
    }
    else {
      uVar4 = (ulong)(iVar1 != 0x40b) + 0x38;
    }
    uVar7 = 0;
    if (uVar4 <= *param_3) {
      *param_3 = uVar4;
      uVar7 = 1;
      *param_2 = *(undefined8 *)(lVar2 + 0x11);
      *(undefined8 *)((long)param_2 + (uVar4 - 8)) = *(undefined8 *)(lVar2 + 9 + uVar4);
      lVar3 = (long)param_2 - (long)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
      puVar5 = (undefined8 *)((lVar2 + 0x11) - lVar3);
      puVar6 = (undefined8 *)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
      for (uVar4 = (ulong)((uint)((int)uVar4 + (int)lVar3) >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    return uVar7;
  }
  return 0;
}

