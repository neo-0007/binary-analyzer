
int fclose(FILE *__stream)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long in_FS_OFFSET;
  bool bVar9;
  
  uVar5 = __stream->_flags;
  if ((uVar5 & 0x2000) == 0) {
    uVar7 = uVar5 & 0x8000;
    if (uVar7 == 0) {
LAB_006f385d:
      lVar3 = *(long *)(in_FS_OFFSET + 0x10);
      piVar8 = (int *)__stream->_lock;
      if (*(long *)(piVar8 + 2) != lVar3) {
        LOCK();
        iVar6 = *piVar8;
        if (iVar6 == 0) {
          *piVar8 = 1;
        }
        UNLOCK();
        if (iVar6 != 0) {
                    /* try { // try from 006f3950 to 006f3954 has its CatchHandler @ 006f395a */
          __lll_lock_wait_private();
        }
        piVar8 = (int *)__stream->_lock;
        uVar5 = __stream->_flags;
        *(long *)(piVar8 + 2) = lVar3;
      }
      piVar8[1] = piVar8[1] + 1;
      goto LAB_006f3896;
    }
  }
  else {
    _IO_un_link();
    uVar5 = __stream->_flags;
    if ((uVar5 & 0x8000) == 0) goto LAB_006f385d;
LAB_006f3896:
    uVar7 = uVar5 & 0x8000;
    if ((uVar5 & 0x2000) != 0) {
                    /* try { // try from 006f38aa to 006f38ae has its CatchHandler @ 006f395a */
      iVar6 = _IO_new_file_close_it(__stream);
      uVar7 = __stream->_flags & 0x8000;
      goto LAB_006f37ad;
    }
  }
  iVar6 = (int)(uVar5 << 0x1a) >> 0x1f;
LAB_006f37ad:
  if (uVar7 == 0) {
    piVar2 = (int *)__stream->_lock;
    piVar8 = piVar2 + 1;
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
  lVar3 = *(long *)(__stream + 1);
  if (0x827 < lVar3 - 0x932180U) {
    _IO_vtable_check();
  }
  (**(code **)(lVar3 + 0x10))(__stream,0);
  if (__stream->_mode < 1) {
    if (__stream->_IO_save_base != (char *)0x0) {
      _IO_free_backup_area(__stream);
    }
  }
  else {
    puVar4 = (undefined8 *)__stream->__pad1;
    LOCK();
    bVar9 = __gconv_lock == 0;
    if (bVar9) {
      __gconv_lock = 1;
    }
    UNLOCK();
    if (!bVar9) {
      __lll_lock_wait_private(&__gconv_lock);
    }
    __gconv_release_step(*puVar4);
    __gconv_release_step(puVar4[7]);
    iVar1 = __gconv_lock;
    LOCK();
    __gconv_lock = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake_private(&__gconv_lock);
    }
  }
  if ((__stream != (FILE *)&_IO_2_1_stdout_ && __stream != (FILE *)&_IO_2_1_stdin_) &&
     (__stream != (FILE *)&_IO_2_1_stderr_)) {
    free(__stream);
  }
  return iVar6;
}

