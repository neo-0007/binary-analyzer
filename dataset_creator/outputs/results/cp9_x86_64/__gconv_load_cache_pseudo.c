
undefined8 __gconv_load_cache(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  stat local_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __gconv_path_envvar = getenv("GCONV_PATH");
  if ((__gconv_path_envvar == (char *)0x0) &&
     (__fd = __open64_nocancel("/usr/lib/x86_64-linux-gnu/gconv/gconv-modules.cache",0,0),
     __fd != -1)) {
    iVar1 = fstat(__fd,&local_b8);
    if ((iVar1 < 0) || ((ulong)local_b8.st_size < 0x10)) {
LAB_006d4251:
      __close_nocancel(__fd);
      uVar4 = 0xffffffff;
      goto LAB_006d419f;
    }
    cache_size = local_b8.st_size;
    gconv_cache = (int *)mmap64((void *)0x0,local_b8.st_size,1,1,__fd,0);
    sVar3 = cache_size;
    if (gconv_cache == (int *)0xffffffffffffffff) {
      gconv_cache = (int *)malloc(cache_size);
      if (gconv_cache == (int *)0x0) goto LAB_006d4251;
      uVar5 = 0;
      do {
        sVar2 = read(__fd,(void *)((long)gconv_cache + uVar5),sVar3 - uVar5);
        if (sVar2 == -1) {
          free(gconv_cache);
          gconv_cache = (int *)0x0;
          goto LAB_006d4251;
        }
        uVar5 = uVar5 + sVar2;
        sVar3 = cache_size;
      } while (uVar5 < cache_size);
      cache_malloced = 1;
    }
    __close_nocancel(__fd);
    if ((((*gconv_cache == 0x20010324) && (*(ushort *)(gconv_cache + 1) < cache_size)) &&
        (*(ushort *)((long)gconv_cache + 6) < cache_size)) &&
       (((*(ushort *)(gconv_cache + 2) != 0 &&
         ((ulong)*(ushort *)((long)gconv_cache + 6) + (ulong)*(ushort *)(gconv_cache + 2) * 4 <=
          cache_size)) &&
        ((*(ushort *)((long)gconv_cache + 10) < cache_size &&
         (uVar4 = 0, *(ushort *)(gconv_cache + 3) <= cache_size)))))) goto LAB_006d419f;
    if (cache_malloced == 0) {
      munmap(gconv_cache,cache_size);
    }
    else {
      free(gconv_cache);
      cache_malloced = 0;
    }
    gconv_cache = (int *)0x0;
  }
  uVar4 = 0xffffffff;
LAB_006d419f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

