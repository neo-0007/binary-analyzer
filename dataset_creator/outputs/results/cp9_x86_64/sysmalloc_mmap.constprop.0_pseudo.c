
/* WARNING: Removing unreachable block (ram,0x00704705) */
/* WARNING: Removing unreachable block (ram,0x0070472e) */

undefined8 * sysmalloc_mmap_constprop_0(ulong param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong __len;
  size_t __len_00;
  undefined8 *puVar5;
  
  __len = param_1 + 7 + param_2 & -param_2;
  if ((param_1 < __len) &&
     (puVar3 = (undefined8 *)mmap64((void *)0x0,__len,3,param_3 | 0x22,-1,0),
     puVar3 != (undefined8 *)0xffffffffffffffff)) {
    if (((param_3 & 0x40000) == 0) && (DAT_00931108 - 1U < __len)) {
      uVar4 = _dl_pagesize - 1U & (ulong)puVar3;
      __len_00 = __len;
      puVar5 = puVar3;
      if (uVar4 != 0) {
        __len_00 = __len + uVar4;
        puVar5 = (undefined8 *)(-_dl_pagesize & (ulong)puVar3);
      }
      madvise(puVar5,__len_00,0xe);
    }
    puVar5 = puVar3 + 2;
    if (((ulong)puVar3 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      __malloc_assert("((INTERNAL_SIZE_T) chunk2mem (mm) & MALLOC_ALIGN_MASK) == 0","malloc.c",0x9a2
                      ,"sysmalloc_mmap");
    }
    *puVar3 = 0;
    puVar3[1] = __len | 2;
    lVar2 = DAT_00931130;
    iVar1 = DAT_0093111c;
    LOCK();
    DAT_0093111c = DAT_0093111c + 1;
    UNLOCK();
    if (DAT_00931124 < iVar1 + 1) {
      LOCK();
      UNLOCK();
      DAT_00931124 = iVar1 + 1;
    }
    LOCK();
    DAT_00931130 = DAT_00931130 + __len;
    UNLOCK();
    if (DAT_00931138 < __len + lVar2) {
      LOCK();
      DAT_00931138 = __len + lVar2;
      UNLOCK();
      return puVar5;
    }
  }
  else {
    puVar5 = (undefined8 *)0xffffffffffffffff;
  }
  return puVar5;
}

