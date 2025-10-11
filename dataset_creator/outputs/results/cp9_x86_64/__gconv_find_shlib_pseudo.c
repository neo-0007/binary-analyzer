
undefined8 * __gconv_find_shlib(char *param_1)

{
  char *__src;
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 *__key;
  void *pvVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  char *local_30;
  
  local_30 = param_1;
  plVar2 = (long *)tfind(&local_30,(void **)&loaded,known_compare);
  __src = local_30;
  if (plVar2 == (long *)0x0) {
    sVar6 = strlen(local_30);
    __key = (undefined8 *)malloc(sVar6 + 0x31);
    if (__key == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pvVar7 = memcpy(__key + 6,__src,sVar6 + 1);
    *__key = pvVar7;
    *(undefined4 *)(__key + 1) = 0xfffffffd;
    __key[2] = 0;
    pvVar7 = tsearch(__key,(void **)&loaded,known_compare);
    if (pvVar7 == (void *)0x0) {
      free(__key);
      return (undefined8 *)0x0;
    }
  }
  else {
    __key = (undefined8 *)*plVar2;
    if (__key == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  iVar1 = *(int *)(__key + 1);
  if (-3 < iVar1) {
    if (__key[2] != 0) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(int *)(__key + 1) = iVar1 + 1;
      return __key;
    }
    return __key;
  }
  if (__key[2] == 0) {
    lVar3 = __libc_dlopen_mode(*__key,0x80000002);
    __key[2] = lVar3;
    if (lVar3 == 0) {
      return (undefined8 *)0x0;
    }
    lVar3 = __libc_dlsym(lVar3,"gconv");
    __key[3] = lVar3;
    if (lVar3 == 0) {
      twalk_r(loaded,do_release_shlib,__key);
      return (undefined8 *)0x0;
    }
    uVar4 = __libc_dlsym(__key[2],"gconv_init");
    __key[4] = uVar4;
    uVar5 = __libc_dlsym(__key[2],"gconv_end");
    *(undefined4 *)(__key + 1) = 1;
    uVar8 = __key[3] ^ *(ulong *)(in_FS_OFFSET + 0x30);
    uVar5 = uVar5 ^ *(ulong *)(in_FS_OFFSET + 0x30);
    __key[3] = uVar8 << 0x11 | uVar8 >> 0x2f;
    __key[5] = uVar5 << 0x11 | uVar5 >> 0x2f;
    uVar5 = __key[4] ^ *(ulong *)(in_FS_OFFSET + 0x30);
    __key[4] = uVar5 << 0x11 | uVar5 >> 0x2f;
    return __key;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("found->handle == NULL","gconv_dl.c",0x71,"__gconv_find_shlib");
}

