
void __wcsmbs_clone_conv(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  undefined **ppuVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  puVar1 = (undefined1 *)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar6 = *(undefined ***)(puVar1 + 0x28);
  if ((ppuVar6 == (undefined **)0x0) && (ppuVar6 = &__wcsmbs_gconv_fcts_c, puVar1 != _nl_C_LC_CTYPE)
     ) {
    __wcsmbs_load_conv(puVar1);
    ppuVar6 = *(undefined ***)(puVar1 + 0x28);
  }
  puVar3 = ppuVar6[1];
  *param_1 = (long)*ppuVar6;
  param_1[1] = (long)puVar3;
  puVar3 = ppuVar6[3];
  param_1[2] = (long)ppuVar6[2];
  param_1[3] = (long)puVar3;
  LOCK();
  bVar7 = __gconv_lock == 0;
  if (bVar7) {
    __gconv_lock = 1;
  }
  UNLOCK();
  if (!bVar7) {
    __lll_lock_wait_private(&__gconv_lock);
  }
  plVar2 = (long *)*param_1;
  bVar7 = false;
  if (*plVar2 != 0) {
    bVar7 = SCARRY4((int)plVar2[2],1);
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  }
  plVar2 = (long *)param_1[2];
  if (*plVar2 != 0) {
    lVar4 = plVar2[2];
    *(int *)(plVar2 + 2) = (int)lVar4 + 1;
    bVar7 = (bool)(bVar7 | SCARRY4((int)lVar4,1));
  }
  iVar5 = __gconv_lock;
  LOCK();
  __gconv_lock = 0;
  UNLOCK();
  if (1 < iVar5) {
    __lll_lock_wake_private(&__gconv_lock);
  }
  if (bVar7) {
                    /* WARNING: Subroutine does not return */
    __libc_fatal("Fatal glibc error: gconv module reference counter overflow\n");
  }
  return;
}

