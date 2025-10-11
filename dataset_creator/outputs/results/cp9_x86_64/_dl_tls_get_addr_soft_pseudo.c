
ulong _dl_tls_get_addr_soft(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  
  if (*(long *)(param_1 + 0x460) == 0) {
    return 0;
  }
  puVar1 = *(ulong **)(in_FS_OFFSET + 8);
  uVar2 = *(ulong *)(param_1 + 0x460);
  if (*puVar1 != _dl_tls_generation) {
    if (puVar1[-2] <= uVar2) {
      return 0;
    }
    uVar5 = *_dl_tls_dtv_slotinfo_list;
    uVar3 = uVar2;
    puVar4 = _dl_tls_dtv_slotinfo_list;
    if (uVar5 <= uVar2) {
      do {
        puVar4 = (ulong *)puVar4[1];
        uVar3 = uVar3 - uVar5;
        uVar5 = *puVar4;
      } while (uVar5 <= uVar3);
    }
    if (*puVar1 < puVar4[uVar3 * 2 + 2]) {
      return 0;
    }
  }
  if (puVar1[uVar2 * 2] == 0xffffffffffffffff) {
    return 0;
  }
  return puVar1[uVar2 * 2];
}

