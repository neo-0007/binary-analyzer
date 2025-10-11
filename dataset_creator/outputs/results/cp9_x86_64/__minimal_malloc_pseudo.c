
void * __minimal_malloc(ulong param_1)

{
  size_t __len;
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (alloc_end == (void *)0x0) {
    alloc_ptr = &_end;
    alloc_end = (void *)(_dl_pagesize + 0x93e5e7U & -_dl_pagesize);
  }
  alloc_ptr = (undefined1 *)((ulong)(alloc_ptr + 0xf) & 0xfffffffffffffff0);
  if (((void *)((long)alloc_ptr + param_1) < alloc_end) &&
     (param_1 <= (ulong)-(long)alloc_ptr && (undefined1 *)-param_1 != alloc_ptr)) {
    pvVar2 = alloc_ptr;
    alloc_last_block = alloc_ptr;
    alloc_ptr = (undefined1 *)((long)alloc_ptr + param_1);
    return pvVar2;
  }
  uVar3 = _dl_pagesize + -1 + param_1 & -_dl_pagesize;
  if ((uVar3 != 0) || (param_1 == 0)) {
    __len = _dl_pagesize + uVar3;
    pvVar2 = mmap64((void *)0x0,__len,3,0x22,-1,0);
    if (pvVar2 != (void *)0xffffffffffffffff) {
      if (alloc_end != pvVar2) {
        alloc_last_block = pvVar2;
        alloc_end = (void *)((long)pvVar2 + __len);
        alloc_ptr = (undefined1 *)((long)pvVar2 + param_1);
        return pvVar2;
      }
      pvVar1 = alloc_ptr;
      alloc_last_block = alloc_ptr;
      alloc_end = (void *)((long)pvVar2 + __len);
      alloc_ptr = (undefined1 *)((long)alloc_ptr + param_1);
      return pvVar1;
    }
  }
  return (void *)0x0;
}

