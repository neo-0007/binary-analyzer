
void FUN_007b3c70(char *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  if (param_2 == (long *)0xffffffffffffffff) {
    return;
  }
  lVar6 = *param_2;
  do {
    param_2 = param_2 + 1;
    plVar2 = *(long **)(param_1 + 8);
    uVar7 = *(ulong *)(lVar6 + 0x20);
    if (*param_1 != '\0') {
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      if (uVar7 < 2) {
        uVar7 = 2;
      }
      *plVar2 = *plVar2 + uVar7;
      lVar6 = *param_2;
      if (lVar6 == 0) {
        return;
      }
      iVar8 = (int)plVar2[1];
      lVar5 = *plVar2;
      do {
        uVar7 = *(ulong *)(lVar6 + 0x20);
        param_2 = param_2 + 1;
        iVar8 = iVar8 + 1;
        if (uVar7 < 2) {
          uVar7 = 2;
        }
        lVar5 = lVar5 + uVar7;
        lVar6 = *param_2;
      } while (lVar6 != 0);
      *(int *)(plVar2 + 1) = iVar8;
      *plVar2 = lVar5;
      return;
    }
    uVar1 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar1 + 1;
    pcVar3 = *(char **)(param_1 + 0x10);
    plVar2[(ulong)uVar1 * 2 + 2] = (long)pcVar3;
    if (uVar7 < 2) {
      *(char **)(param_1 + 0x10) = pcVar3 + 1;
      *pcVar3 = '/' - (uVar7 == 0);
      puVar4 = *(undefined1 **)(param_1 + 0x10);
    }
    else {
      puVar4 = (undefined1 *)thunk_FUN_00713820(pcVar3,*(undefined8 *)(lVar6 + 0x18),uVar7 - 1);
    }
    *(undefined1 **)(param_1 + 0x10) = puVar4 + 1;
    *puVar4 = 0;
    lVar6 = *param_2;
    *(undefined4 *)(plVar2 + (ulong)uVar1 * 2 + 3) = 0;
  } while (lVar6 != 0);
  return;
}

