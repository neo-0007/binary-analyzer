
long * FUN_00775490(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  
  plVar1 = (long *)FUN_007101b0(0x18);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = FUN_0078dfa0("libidn2.so.0",0x80000002);
  if (lVar2 != 0) {
    uVar3 = FUN_0078e1f0(lVar2,"idn2_lookup_ul","IDN2_0.0.0");
    lVar4 = FUN_0078e1f0(lVar2,"idn2_to_unicode_lzlz","IDN2_0.0.0");
    if ((uVar3 != 0) && (lVar4 != 0)) {
      plVar1[1] = uVar3;
      plVar1[2] = lVar4;
      uVar3 = uVar3 ^ *(ulong *)(in_FS_OFFSET + 0x30);
      uVar5 = plVar1[2] ^ *(ulong *)(in_FS_OFFSET + 0x30);
      *plVar1 = lVar2;
      plVar1[1] = uVar3 << 0x11 | uVar3 >> 0x2f;
      plVar1[2] = uVar5 << 0x11 | uVar5 >> 0x2f;
      return plVar1;
    }
    FUN_0078e390(lVar2);
  }
  FUN_007104f0(plVar1);
  return (long *)0x0;
}

