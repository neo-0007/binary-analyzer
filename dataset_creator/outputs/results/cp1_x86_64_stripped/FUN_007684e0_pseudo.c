
long FUN_007684e0(uint param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (99 < param_1) {
    return 0;
  }
  if (**(int **)(param_2 + 0x350) == 0) {
    return 0;
  }
  FUN_0070b2d0(&DAT_00946120);
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 == 0) {
    lVar1 = FUN_00711600(0x30,1);
    *(long *)(param_2 + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(code **)(param_2 + 0x20) = FUN_00768700;
      goto LAB_00768584;
    }
LAB_007685e0:
    lVar1 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x2c) == 0) {
LAB_00768584:
      lVar3 = *(long *)(param_2 + 0x350);
      *(undefined4 *)(lVar1 + 0x2c) = 1;
      if (lVar3 == 0) goto LAB_00768532;
      plVar2 = (long *)FUN_007101b0(800);
      *(long **)(lVar1 + 0x20) = plVar2;
      if (plVar2 == (long *)0x0) goto LAB_007685e0;
      plVar4 = plVar2;
      do {
        *plVar4 = lVar3;
        plVar4 = plVar4 + 1;
        lVar3 = thunk_FUN_007a9080(lVar3,0);
        lVar3 = lVar3 + 4;
      } while (plVar2 + 100 != plVar4);
    }
    else {
LAB_00768532:
      plVar2 = *(long **)(lVar1 + 0x20);
      if (plVar2 == (long *)0x0) goto LAB_007685e0;
    }
    lVar1 = plVar2[param_1];
  }
  FUN_0070b100(&DAT_00946120);
  return lVar1;
}

