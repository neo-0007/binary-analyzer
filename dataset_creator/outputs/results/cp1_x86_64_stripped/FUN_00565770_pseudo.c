
void FUN_00565770(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  lVar3 = *(long *)(param_1 + 0xe0);
  pcVar2 = *(code **)(param_1 + 0xe8);
  puVar8 = param_2;
  if (lVar3 != 0) {
    uVar9 = 0x10 - lVar3;
    lVar1 = param_1 + 0xd0 + lVar3;
    if (param_3 < uVar9) {
      thunk_FUN_00713a50(lVar1);
      uVar9 = lVar3 + param_3;
      goto LAB_005657fb;
    }
    puVar8 = (undefined8 *)((long)param_2 + uVar9);
    param_3 = lVar3 + -0x10 + param_3;
    thunk_FUN_00713a50(lVar1,param_2,uVar9);
    (*pcVar2)(param_1,param_1 + 0xd0,0x10,1);
  }
  uVar5 = param_3 & 0xfffffffffffffff0;
  uVar7 = (uint)param_3 & 0xf;
  uVar9 = (ulong)uVar7;
  if (0xf < uVar5) {
    (*pcVar2)(param_1,puVar8,uVar5,1);
    puVar8 = (undefined8 *)((long)puVar8 + uVar5);
  }
  if (uVar9 != 0) {
    if (uVar7 < 8) {
      if ((param_3 & 4) == 0) {
        if (((param_3 & 0xf) != 0) &&
           (*(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)puVar8, (param_3 & 2) != 0)) {
          *(undefined2 *)(param_1 + 0xce + uVar9) = *(undefined2 *)((long)puVar8 + (uVar9 - 2));
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)puVar8;
        *(undefined4 *)(param_1 + 0xcc + uVar9) = *(undefined4 *)((long)puVar8 + (uVar9 - 4));
      }
    }
    else {
      uVar5 = param_1 + 0xd8U & 0xfffffffffffffff8;
      *(undefined8 *)(param_1 + 0xd0) = *puVar8;
      *(undefined8 *)(param_1 + 200 + uVar9) = *(undefined8 *)((long)puVar8 + (uVar9 - 8));
      lVar3 = (param_1 + 0xd0) - uVar5;
      uVar7 = (int)lVar3 + uVar7 & 0xfffffff8;
      if (7 < uVar7) {
        uVar4 = 0;
        do {
          uVar6 = (ulong)uVar4;
          uVar4 = uVar4 + 8;
          *(undefined8 *)(uVar5 + uVar6) = *(undefined8 *)((long)puVar8 + (uVar6 - lVar3));
        } while (uVar4 < uVar7);
      }
    }
  }
LAB_005657fb:
  *(ulong *)(param_1 + 0xe0) = uVar9;
  return;
}

