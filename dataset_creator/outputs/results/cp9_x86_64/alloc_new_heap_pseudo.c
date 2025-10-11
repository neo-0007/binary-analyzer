
void * alloc_new_heap(ulong param_1,long param_2,long param_3,uint param_4)

{
  void *pvVar1;
  int iVar2;
  void *__addr;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (DAT_00931110 == 0) {
    uVar6 = 0x8000;
    uVar4 = 0x4000000;
  }
  else {
    uVar4 = DAT_00931110 * 4;
    uVar6 = DAT_00931110;
  }
  uVar7 = param_2 + param_1;
  if (((uVar6 <= uVar7) && (uVar6 = uVar7, uVar4 < uVar7)) && (uVar6 = uVar4, uVar4 < param_1)) {
    return (void *)0x0;
  }
  param_4 = param_4 | 0x22;
  uVar6 = -param_3 & (uVar6 - 1) + param_3;
  if (aligned_heap_area == (void *)0x0) {
LAB_00703e58:
    pvVar3 = mmap64((void *)0x0,uVar4 * 2,0,param_4,-1,0);
    if (pvVar3 == (void *)0xffffffffffffffff) {
      __addr = mmap64((void *)0x0,uVar4,0,param_4,-1,0);
      if (__addr == (void *)0xffffffffffffffff) {
        return (void *)0x0;
      }
      if (((ulong)__addr & uVar4 - 1) != 0) goto LAB_00703f88;
    }
    else {
      __addr = (void *)((long)pvVar3 + (uVar4 - 1) & -uVar4);
      sVar5 = (long)__addr - (long)pvVar3;
      pvVar1 = (void *)((long)__addr + uVar4);
      if (sVar5 != 0) {
        munmap(pvVar3,sVar5);
        pvVar1 = aligned_heap_area;
      }
      aligned_heap_area = pvVar1;
      munmap((void *)((long)__addr + uVar4),uVar4 - sVar5);
    }
  }
  else {
    __addr = mmap64(aligned_heap_area,uVar4,0,param_4,-1,0);
    aligned_heap_area = (void *)0x0;
    if (__addr == (void *)0xffffffffffffffff) goto LAB_00703e58;
    if (((ulong)__addr & uVar4 - 1) != 0) {
      munmap(__addr,uVar4);
      goto LAB_00703e58;
    }
  }
  iVar2 = mprotect(__addr,uVar6,3);
  if (iVar2 == 0) {
    if (DAT_00931108 - 1U < uVar6) {
      uVar4 = _dl_pagesize - 1U & (ulong)__addr;
      sVar5 = uVar6;
      pvVar3 = __addr;
      if (uVar4 != 0) {
        sVar5 = uVar6 + uVar4;
        pvVar3 = (void *)(-_dl_pagesize & (ulong)__addr);
      }
      madvise(pvVar3,sVar5,0xe);
    }
    *(long *)((long)__addr + 0x20) = param_3;
    *(ulong *)((long)__addr + 0x10) = uVar6;
    *(ulong *)((long)__addr + 0x18) = uVar6;
    return __addr;
  }
LAB_00703f88:
  munmap(__addr,uVar4);
  return (void *)0x0;
}

