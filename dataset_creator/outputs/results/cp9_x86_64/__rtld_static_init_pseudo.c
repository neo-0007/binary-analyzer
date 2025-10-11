
void __rtld_static_init(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = _dl_lookup_direct(param_1,"_rtld_global_ro",0x9f28436a,"GLIBC_PRIVATE",0x963cf85);
  uVar2 = _dl_auxv;
  uVar1 = _dl_pagesize;
  if (lVar4 != 0) {
    if ((*(short *)(lVar4 + 6) == -0xf) || (param_1 == (long *)0x0)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_1;
    }
    lVar5 = lVar5 + *(long *)(lVar4 + 8);
    *(undefined1 **)(lVar5 + 0x388) = _dlfcn_hook;
    *(undefined8 *)(lVar5 + 0x68) = uVar2;
    uVar2 = _dl_minsigstacksize;
    *(undefined4 *)(lVar5 + 0x40) = _dl_clktck;
    uVar3 = _dl_hwcap;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    *(undefined8 *)(lVar5 + 0x20) = uVar2;
    uVar2 = _dl_tls_static_size;
    *(undefined8 *)(lVar5 + 0x60) = uVar3;
    uVar1 = _dl_tls_static_align;
    *(undefined8 *)(lVar5 + 800) = _dl_hwcap2;
    *(undefined8 *)(lVar5 + 0x2a8) = uVar2;
    *(undefined8 *)(lVar5 + 0x2b0) = uVar1;
    *(code **)(lVar5 + 0x378) = _dl_find_object;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("sym != NULL","rtld_static_init.c",0x35,"__rtld_static_init");
}

