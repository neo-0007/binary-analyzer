
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0041de70(double param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x20) = 0;
    if (iVar1 == 3) {
      *(undefined8 *)(param_2 + 0x20) = 8;
      if (*(double **)(param_2 + 0x10) == (double *)0x0) {
        return 1;
      }
      if (*(long *)(param_2 + 0x18) == 8) {
        **(double **)(param_2 + 0x10) = param_1;
        return 1;
      }
    }
    else {
      if (iVar1 == 2) {
        if (DAT_007cf6e8 <= param_1) {
          uVar6 = (long)(param_1 - DAT_007cf6e8) ^ 0x8000000000000000;
        }
        else {
          uVar6 = (ulong)param_1;
        }
        if ((double)uVar6 != param_1) {
          return 0;
        }
        puVar2 = *(ulong **)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x20) = 8;
        if (puVar2 == (ulong *)0x0) {
          return 1;
        }
        lVar3 = *(long *)(param_2 + 0x18);
        dVar4 = _DAT_007cf6d0;
        dVar5 = _DAT_007cf6f0;
        if (lVar3 == 4) {
          if (param_1 < _DAT_007cf6d0) {
            return 0;
          }
          if (DAT_007cf6d8 < param_1) {
            return 0;
          }
          *(undefined8 *)(param_2 + 0x20) = 4;
          *(int *)puVar2 = (int)(long)param_1;
          return 1;
        }
      }
      else {
        if (iVar1 != 1) {
          return 0;
        }
        uVar6 = (ulong)param_1;
        if ((double)(long)uVar6 != param_1) {
          return 0;
        }
        puVar2 = *(ulong **)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x20) = 8;
        if (puVar2 == (ulong *)0x0) {
          return 1;
        }
        lVar3 = *(long *)(param_2 + 0x18);
        dVar4 = _DAT_007cf6e0;
        dVar5 = DAT_007cf6e8;
        if (lVar3 == 4) {
          if (param_1 < _DAT_007cf6c0) {
            return 0;
          }
          if (DAT_007cf6c8 < param_1) {
            return 0;
          }
          *(undefined8 *)(param_2 + 0x20) = 4;
          *(int *)puVar2 = (int)param_1;
          return 1;
        }
      }
      if (((lVar3 == 8) && (dVar4 <= param_1)) && (param_1 < dVar5)) {
        *puVar2 = uVar6;
        return 1;
      }
    }
  }
  return 0;
}

