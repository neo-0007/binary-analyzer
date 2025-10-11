
/* WARNING: Removing unreachable block (ram,0x006c8bc0) */

void __libc_setup_tls(void)

{
  undefined *puVar1;
  void *__src;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  size_t local_60;
  long local_50;
  long local_48;
  ulong local_40;
  
  puVar1 = _dl_ns;
  __tls_pre_init_tp();
  if (_dl_phdr == (int *)0x0) {
    local_40 = 0xffffffffffffffc0;
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = 1;
    local_48 = 0xa00;
    uVar4 = 0x40;
    local_50 = 0x3f;
    local_60 = 0;
    __src = (void *)0x0;
  }
  else {
    for (piVar9 = _dl_phdr; piVar9 < _dl_phdr + _dl_phnum * 0xe; piVar9 = piVar9 + 0xe) {
      if (*piVar9 == 7) {
        uVar7 = *(ulong *)(piVar9 + 0xc);
        local_60 = *(size_t *)(piVar9 + 8);
        uVar8 = *(ulong *)(piVar9 + 10);
        uVar4 = 0x40;
        if (0x3f < uVar7) {
          uVar4 = uVar7;
        }
        local_50 = uVar4 - 1;
        local_48 = uVar4 + 0x9c0;
        local_40 = -uVar4;
        uVar6 = 1;
        if (uVar7 != 0) {
          uVar6 = uVar7;
        }
        __src = (void *)(*(long *)(piVar9 + 4) + *(long *)puVar1);
        goto LAB_006c8ad8;
      }
    }
    local_40 = 0xffffffffffffffc0;
    uVar7 = 0;
    __src = (void *)0x0;
    uVar6 = 1;
    local_48 = 0xa00;
    uVar4 = 0x40;
    uVar8 = 0;
    local_50 = 0x3f;
    local_60 = 0;
  }
LAB_006c8ad8:
  _dl_tls_static_surplus_init(0);
  lVar2 = (((uVar8 - 1) + _dl_tls_static_surplus + uVar4) / uVar4) * uVar4;
  pvVar3 = sbrk(local_48 + lVar2);
  _dl_static_dtv._0_8_ = 0x3e;
  _dl_static_dtv._40_8_ = 0;
  local_40 = local_40 & local_50 + (long)pvVar3;
  uVar4 = (uVar8 - 1) + uVar7;
  if (uVar7 == 0) {
    uVar4 = uVar8;
  }
  lVar5 = uVar6 * (uVar4 / uVar6);
  *(long *)(puVar1 + 0x458) = lVar5;
  _dl_static_dtv._32_8_ = (lVar2 - lVar5) + local_40;
  memcpy((void *)_dl_static_dtv._32_8_,__src,local_60);
  lVar2 = local_40 + lVar2;
  *(undefined8 *)(lVar2 + 8) = 0x9388b0;
  *(long *)lVar2 = lVar2;
  *(long *)(lVar2 + 0x10) = lVar2;
  syscall();
                    /* WARNING: Subroutine does not return */
  __libc_fatal("cannot set %fs base address for thread-local storage");
}

