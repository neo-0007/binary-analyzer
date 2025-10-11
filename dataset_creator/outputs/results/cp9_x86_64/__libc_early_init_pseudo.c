
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

void __libc_early_init(undefined1 param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  rlimit local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __ctype_init();
  __libc_single_threaded = param_1;
  iVar1 = getrlimit64(RLIMIT_STACK,&local_28);
  uVar3 = 0x200000;
  if (iVar1 == 0) {
    uVar2 = 0x4000;
    if (0x3fff < local_28.rlim_cur) {
      uVar2 = local_28.rlim_cur;
    }
    if (local_28.rlim_cur != 0xffffffffffffffff) {
      uVar3 = uVar2;
    }
  }
  __default_pthread_attr._16_8_ = _dl_pagesize;
  uVar2 = _dl_pagesize + 0x800 +
          (((_dl_tls_static_size + _dl_tls_static_align) - 1) / _dl_tls_static_align) *
          _dl_tls_static_align;
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  __default_pthread_attr._32_8_ = _dl_pagesize + -1 + uVar2 & -_dl_pagesize;
  local_28.rlim_cur = __default_pthread_attr._32_8_;
  __pthread_tunables_init();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    __lll_elision_init();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

