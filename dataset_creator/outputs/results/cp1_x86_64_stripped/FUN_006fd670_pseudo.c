
ulong FUN_006fd670(uint *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if (param_1 == (uint *)0x0) {
    uVar4 = FUN_00707c40();
    return uVar4;
  }
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar5 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar5 + 2) != lVar2) {
      LOCK();
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
                    /* try { // try from 006fd750 to 006fd754 has its CatchHandler @ 006fd75a */
        FUN_00709590();
      }
      piVar5 = *(int **)(param_1 + 0x22);
      *(long *)(piVar5 + 2) = lVar2;
    }
    piVar5[1] = piVar5[1] + 1;
  }
  lVar2 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar2 - 0x93f160U) {
                    /* try { // try from 006fd730 to 006fd734 has its CatchHandler @ 006fd75a */
    FUN_00703130();
  }
                    /* try { // try from 006fd6e8 to 006fd6ea has its CatchHandler @ 006fd75a */
  iVar3 = (**(code **)(lVar2 + 0x60))(param_1);
  if ((*param_1 & 0x8000) == 0) {
    piVar5 = *(int **)(param_1 + 0x22);
    iVar1 = piVar5[1];
    piVar5[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar5[2] = 0;
      piVar5[3] = 0;
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
      }
    }
  }
  return (ulong)-(uint)(iVar3 != 0);
}

