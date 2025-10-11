
undefined8 FUN_00435810(long param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (param_3 == 0) {
    return 1;
  }
  lVar3 = param_1 + 0x50;
  uVar1 = *(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x40) = param_3 * 8 + *(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x48) =
       (param_3 >> 0x3d) + ((*(long *)(param_1 + 0x48) + 1) - (ulong)!CARRY8(param_3 * 8,uVar1));
  if (*(uint *)(param_1 + 0xd0) == 0) {
    if (param_3 < 0x80) goto LAB_00435926;
LAB_004358e8:
    uVar1 = param_3 >> 7;
    uVar5 = param_3 & 0xffffffffffffff80;
    param_3 = (ulong)((uint)param_3 & 0x7f);
    FUN_00589980(param_1,param_2,uVar1);
    param_2 = (undefined8 *)((long)param_2 + uVar5);
  }
  else {
    uVar5 = (ulong)*(uint *)(param_1 + 0xd0);
    lVar8 = -uVar5;
    uVar1 = lVar8 + 0x80;
    puVar6 = (undefined8 *)(lVar3 + uVar5);
    if (param_3 < uVar1) {
      thunk_FUN_00713a50(puVar6,param_2,param_3);
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)param_3;
      return 1;
    }
    if (uVar1 < 8) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 != 0) && (*(undefined1 *)puVar6 = *(undefined1 *)param_2, (uVar1 & 2) != 0)) {
          *(undefined2 *)((long)puVar6 + lVar8 + 0x7e) =
               *(undefined2 *)((long)param_2 + lVar8 + 0x7e);
        }
      }
      else {
        *(undefined4 *)puVar6 = *(undefined4 *)param_2;
        *(undefined4 *)((long)puVar6 + lVar8 + 0x7c) = *(undefined4 *)((long)param_2 + lVar8 + 0x7c)
        ;
      }
    }
    else {
      *puVar6 = *param_2;
      *(undefined8 *)((long)puVar6 + lVar8 + 0x78) = *(undefined8 *)((long)param_2 + lVar8 + 0x78);
      lVar8 = (long)puVar6 - (long)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
      puVar7 = (undefined8 *)((long)param_2 - lVar8);
      puVar6 = (undefined8 *)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
      for (uVar2 = uVar1 + lVar8 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    param_3 = (uVar5 - 0x80) + param_3;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    param_2 = (undefined8 *)((long)param_2 + uVar1);
    FUN_00589980(param_1,lVar3,1);
    if (0x7f < param_3) goto LAB_004358e8;
  }
  if (param_3 == 0) {
    return 1;
  }
LAB_00435926:
  uVar4 = (uint)param_3;
  uVar1 = param_3 & 0xffffffff;
  if (uVar4 < 8) {
    if ((param_3 & 4) == 0) {
      if ((uVar4 != 0) &&
         (*(undefined1 *)(param_1 + 0x50) = *(undefined1 *)param_2, (param_3 & 2) != 0)) {
        *(undefined2 *)(param_1 + 0x4e + uVar1) = *(undefined2 *)((long)param_2 + (uVar1 - 2));
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0x4c + uVar1) = *(undefined4 *)((long)param_2 + (uVar1 - 4));
    }
  }
  else {
    puVar7 = (undefined8 *)(param_1 + 0x58U & 0xfffffffffffffff8);
    *(undefined8 *)(param_1 + 0x50) = *param_2;
    lVar3 = lVar3 - (long)puVar7;
    *(undefined8 *)(param_1 + 0x48 + (param_3 & 0xffffffff)) =
         *(undefined8 *)((long)param_2 + ((param_3 & 0xffffffff) - 8));
    puVar6 = (undefined8 *)((long)param_2 - lVar3);
    for (uVar1 = (ulong)((int)lVar3 + uVar4 >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
      puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
    }
  }
  *(uint *)(param_1 + 0xd0) = uVar4;
  return 1;
}

