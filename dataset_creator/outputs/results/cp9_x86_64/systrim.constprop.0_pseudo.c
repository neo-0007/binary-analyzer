
undefined8 systrim_constprop_0(ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(DAT_009311e0 + 8) & 0xfffffffffffffff8;
  if (param_1 < uVar4 - 0x21) {
    lVar5 = DAT_00931108;
    if (DAT_00931108 == 0) {
      lVar5 = _dl_pagesize;
    }
    uVar3 = -lVar5 & (uVar4 - 0x21) - param_1;
    if ((uVar3 != 0) && (__always_fail_morecore == '\0')) {
      pvVar1 = sbrk(0);
      if (pvVar1 == (void *)0xffffffffffffffff) {
        pvVar1 = (void *)0x0;
      }
      if (pvVar1 == (void *)(DAT_009311e0 + uVar4)) {
        if (((__always_fail_morecore != '\0') || (sbrk(-uVar3), __always_fail_morecore != '\0')) ||
           (pvVar2 = sbrk(0), pvVar2 == (void *)0xffffffffffffffff)) {
          pvVar2 = (void *)0x0;
        }
        if ((pvVar2 != (void *)0x0) && (lVar5 = (long)pvVar1 - (long)pvVar2, lVar5 != 0)) {
          DAT_00931a08 = DAT_00931a08 - lVar5;
          *(ulong *)(DAT_009311e0 + 8) = uVar4 - lVar5 | 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

