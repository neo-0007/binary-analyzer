
bool WPACKET_set_max_size(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    return false;
  }
  do {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar4;
  } while (plVar2 != (long *)0x0);
  lVar3 = plVar4[2];
  uVar1 = lVar3 - 1;
  if (uVar1 < 7) {
    if ((1L << ((byte)((int)lVar3 << 3) & 0x3f)) + uVar1 < param_2) {
      return false;
    }
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar1 <= param_2) {
    *(ulong *)(param_1 + 0x20) = param_2;
  }
  return uVar1 <= param_2;
}

