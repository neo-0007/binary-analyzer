
void FUN_007683a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    lVar3 = FUN_00711600(0x30,1);
    *(long *)(param_1 + 0x28) = lVar3;
    if (lVar3 == 0) {
      return;
    }
    *(code **)(param_1 + 0x20) = FUN_00768700;
  }
  else if (*(int *)(lVar3 + 0x28) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x1b8);
  *(undefined4 *)(lVar3 + 0x28) = 1;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_007101b0(800);
    *(long **)(lVar3 + 0x18) = plVar2;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 100;
      do {
        *plVar2 = lVar4;
        plVar2 = plVar2 + 1;
        lVar3 = thunk_FUN_007129d0(lVar4);
        lVar4 = lVar4 + 1 + lVar3;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}

