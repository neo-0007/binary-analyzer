
long * FUN_00768af0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  
  piVar1 = param_1 + 1;
  uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  LOCK();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
    FUN_00709590(piVar1);
  }
  uVar8 = *(ulong *)(param_1 + 6);
  uVar6 = *(ulong *)(param_1 + 4);
  do {
    lVar7 = uVar8 + 0x30;
    if (uVar6 <= uVar8) {
      uVar6 = FUN_007aaf90(*param_1,param_1 + 0xc,*(undefined8 *)(param_1 + 2));
      if ((long)uVar6 < 1) {
        if ((uVar6 == 0) || (plVar5 = (long *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 2)) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar3;
          plVar5 = (long *)0x0;
        }
        break;
      }
      *(ulong *)(param_1 + 4) = uVar6;
      uVar8 = 0;
      lVar7 = 0x30;
    }
    plVar5 = (long *)(lVar7 + (long)param_1);
    uVar8 = uVar8 + *(ushort *)(plVar5 + 2);
    lVar7 = plVar5[1];
    lVar4 = *plVar5;
    *(ulong *)(param_1 + 6) = uVar8;
    *(long *)(param_1 + 8) = lVar7;
  } while (lVar4 == 0);
  LOCK();
  iVar2 = param_1[1];
  param_1[1] = 0;
  UNLOCK();
  if (1 < iVar2) {
    FUN_00709660(piVar1);
    return plVar5;
  }
  return plVar5;
}

