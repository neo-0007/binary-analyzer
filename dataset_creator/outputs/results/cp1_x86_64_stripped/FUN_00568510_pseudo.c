
undefined8 FUN_00568510(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  if (param_3 == 0) {
    return 1;
  }
  iVar8 = (int)param_3;
  uVar2 = *(uint *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) = iVar8 * 8 + *(uint *)(param_1 + 0x14);
  uVar3 = (ulong)*(uint *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x18) =
       ((*(int *)(param_1 + 0x18) + 1) - (uint)!CARRY4(iVar8 * 8,uVar2)) + (int)(param_3 >> 0x1d);
  if (uVar3 == 0) {
    if (param_3 < 0x40) goto LAB_00568570;
LAB_00568628:
    FUN_00567150(param_1,param_2,param_3 >> 6);
    param_2 = (undefined8 *)((long)param_2 + (param_3 & 0xffffffffffffffc0));
    param_3 = param_3 - (param_3 & 0xffffffffffffffc0);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x1c + uVar3);
    if ((param_3 | param_3 + uVar3) < 0x40) {
      thunk_FUN_00713a50(puVar1,param_2,param_3);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar8;
      return 1;
    }
    lVar5 = -uVar3;
    uVar7 = lVar5 + 0x40;
    if (uVar7 < 8) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 != 0) && (*(undefined1 *)puVar1 = *(undefined1 *)param_2, (uVar7 & 2) != 0)) {
          *(undefined2 *)((long)puVar1 + lVar5 + 0x3e) =
               *(undefined2 *)((long)param_2 + lVar5 + 0x3e);
        }
      }
      else {
        *(undefined4 *)puVar1 = *(undefined4 *)param_2;
        *(undefined4 *)((long)puVar1 + lVar5 + 0x3c) = *(undefined4 *)((long)param_2 + lVar5 + 0x3c)
        ;
      }
    }
    else {
      *puVar1 = *param_2;
      *(undefined8 *)((long)puVar1 + lVar5 + 0x38) = *(undefined8 *)((long)param_2 + lVar5 + 0x38);
      lVar5 = (long)puVar1 - ((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
      uVar6 = lVar5 + uVar7 & 0xfffffffffffffff8;
      if (7 < uVar6) {
        uVar4 = 0;
        do {
          *(undefined8 *)(((ulong)(puVar1 + 1) & 0xfffffffffffffff8) + uVar4) =
               *(undefined8 *)((long)param_2 + (uVar4 - lVar5));
          uVar4 = uVar4 + 8;
        } while (uVar4 < uVar6);
      }
    }
    param_2 = (undefined8 *)((long)param_2 + uVar7);
    FUN_00567150(param_1,param_1 + 0x1c,1);
    param_3 = (param_3 + uVar3) - 0x40;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 (*) [16])(param_1 + 0x1c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x2c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x3c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x4c) = (undefined1  [16])0x0;
    if (0x3f < param_3) goto LAB_00568628;
  }
  if (param_3 == 0) {
    return 1;
  }
  iVar8 = (int)param_3;
LAB_00568570:
  *(int *)(param_1 + 0x5c) = iVar8;
  thunk_FUN_00713a50(param_1 + 0x1c,param_2,param_3);
  return 1;
}

