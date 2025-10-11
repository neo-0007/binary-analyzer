
ulong FUN_004bca90(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0xffffffffffffffff;
  }
  if (param_2 < 0x100000001) {
    iVar3 = (int)param_1[1] + -1;
    if (iVar3 < 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = (long)iVar3;
      uVar2 = 0;
      do {
        uVar1 = *(ulong *)(*param_1 + lVar4 * 8);
        lVar4 = lVar4 + -1;
        uVar2 = ((uVar2 << 0x20 | uVar1 >> 0x20) % param_2 << 0x20 | uVar1 & 0xffffffff) % param_2;
      } while (-1 < (int)lVar4);
    }
  }
  else {
    lVar4 = FUN_004b82e0();
    uVar2 = 0xffffffffffffffff;
    if (lVar4 != 0) {
      uVar2 = FUN_004bc970(lVar4,param_2);
      FUN_004b7fa0(lVar4);
      return uVar2;
    }
  }
  return uVar2;
}

