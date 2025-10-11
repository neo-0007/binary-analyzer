
uint FUN_006c32a0(long param_1,long param_2,long *param_3,long param_4,long *param_5)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 == param_5) {
    if (*(char **)(param_1 + 8) == *(char **)(param_4 + 8)) {
      return 6;
    }
    if ((**(char **)(param_1 + 8) != '*') && (iVar3 = thunk_FUN_00712780(), iVar3 == 0)) {
      return 6;
    }
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x14);
  param_1 = param_1 + uVar5 * 0x10;
  do {
    if (uVar5 == 0) {
      return 1;
    }
    uVar1 = *(ulong *)(param_1 + 0x10);
    if ((uVar1 & 2) != 0) {
      lVar4 = (long)uVar1 >> 8;
      if ((uVar1 & 1) != 0) {
        if (param_2 == -3) goto LAB_006c3323;
        lVar4 = *(long *)(*param_3 + lVar4);
      }
      uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x40))
                        (*(long **)(param_1 + 8),param_2,lVar4 + (long)param_3,param_4,param_5);
      if (3 < (int)uVar2) {
        if ((uVar1 & 1) == 0) {
          return uVar2;
        }
        return uVar2 | 1;
      }
    }
LAB_006c3323:
    param_1 = param_1 + -0x10;
    uVar5 = uVar5 - 1;
  } while( true );
}

