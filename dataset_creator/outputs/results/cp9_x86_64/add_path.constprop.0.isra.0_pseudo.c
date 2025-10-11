
void add_path_constprop_0_isra_0(char *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  char *__dest;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  if (param_2 == (long *)0xffffffffffffffff) {
    return;
  }
  lVar5 = *param_2;
  do {
    param_2 = param_2 + 1;
    plVar2 = *(long **)(param_1 + 8);
    uVar6 = *(ulong *)(lVar5 + 0x20);
    if (*param_1 != '\0') {
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      if (uVar6 < 2) {
        uVar6 = 2;
      }
      *plVar2 = *plVar2 + uVar6;
      lVar5 = *param_2;
      if (lVar5 == 0) {
        return;
      }
      iVar7 = (int)plVar2[1];
      lVar4 = *plVar2;
      do {
        uVar6 = *(ulong *)(lVar5 + 0x20);
        param_2 = param_2 + 1;
        iVar7 = iVar7 + 1;
        if (uVar6 < 2) {
          uVar6 = 2;
        }
        lVar4 = lVar4 + uVar6;
        lVar5 = *param_2;
      } while (lVar5 != 0);
      *(int *)(plVar2 + 1) = iVar7;
      *plVar2 = lVar4;
      return;
    }
    uVar1 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar1 + 1;
    __dest = *(char **)(param_1 + 0x10);
    plVar2[(ulong)uVar1 * 2 + 2] = (long)__dest;
    if (uVar6 < 2) {
      *(char **)(param_1 + 0x10) = __dest + 1;
      *__dest = '/' - (uVar6 == 0);
      puVar3 = *(undefined1 **)(param_1 + 0x10);
    }
    else {
      puVar3 = (undefined1 *)mempcpy(__dest,*(void **)(lVar5 + 0x18),uVar6 - 1);
    }
    *(undefined1 **)(param_1 + 0x10) = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = *param_2;
    *(undefined4 *)(plVar2 + (ulong)uVar1 * 2 + 3) = 0;
  } while (lVar5 != 0);
  return;
}

