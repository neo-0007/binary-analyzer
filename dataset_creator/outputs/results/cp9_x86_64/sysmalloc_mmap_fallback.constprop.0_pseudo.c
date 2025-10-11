
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * sysmalloc_mmap_fallback_constprop_0
                 (ulong *param_1,ulong param_2,long param_3,ulong param_4,long param_5,uint param_6)

{
  void *pvVar1;
  ulong uVar2;
  ulong __len;
  ulong __len_00;
  void *__addr;
  
  __len = *param_1;
  if ((_DAT_00931184 & 2) == 0) {
    __len = param_3 + -1 + param_5 + __len & -param_5;
  }
  if (__len < param_4) {
    __len = param_4;
  }
  pvVar1 = (void *)0x0;
  if (param_2 < __len) {
    pvVar1 = mmap64((void *)0x0,__len,3,param_6 | 0x22,-1,0);
    if (pvVar1 != (void *)0xffffffffffffffff) {
      if (((param_6 & 0x40000) == 0) && (DAT_00931108 - 1U < __len)) {
        uVar2 = _dl_pagesize - 1U & (ulong)pvVar1;
        __len_00 = __len;
        __addr = pvVar1;
        if (uVar2 != 0) {
          __len_00 = __len + uVar2;
          __addr = (void *)(-_dl_pagesize & (ulong)pvVar1);
        }
        madvise(__addr,__len_00,0xe);
      }
      _DAT_00931184 = _DAT_00931184 | 2;
      *param_1 = __len;
    }
  }
  return pvVar1;
}

