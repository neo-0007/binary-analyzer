
__off64_t _IO_seekoff(_IO_FILE *param_1,__off64_t param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  __off64_t _Var3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if ((param_1->_flags & 0x8000U) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = (int *)param_1->_lock;
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 006f4d70 to 006f4d74 has its CatchHandler @ 006f4d9a */
        __lll_lock_wait_private();
      }
      piVar4 = (int *)param_1->_lock;
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  if ((uint)param_3 < 3) {
    if (param_4 != 0) {
      if (param_1->_mode < 0) {
        if (param_1->_IO_save_base != (char *)0x0) {
          if ((param_3 == 1) && ((param_1->_flags & 0x100U) != 0)) {
            param_2 = param_2 - ((long)param_1->_IO_read_end - (long)param_1->_IO_read_ptr);
          }
          _IO_free_backup_area(param_1);
        }
      }
      else if ((param_1->_mode != 0) && (*(long *)((long)param_1->__pad2 + 0x40) != 0)) {
        if ((param_3 == 1) && ((param_1->_flags & 0x100U) != 0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        _IO_free_wbackup_area(param_1);
      }
    }
    lVar2 = *(long *)(param_1 + 1);
    if (0x827 < lVar2 - 0x932180U) {
      _IO_vtable_check();
    }
                    /* try { // try from 006f4c7c to 006f4d24 has its CatchHandler @ 006f4d9a */
    _Var3 = (**(code **)(lVar2 + 0x48))(param_1,param_2,param_3,param_4);
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    _Var3 = -1;
  }
  if ((param_1->_flags & 0x8000U) == 0) {
    piVar4 = (int *)param_1->_lock;
    iVar1 = piVar4[1];
    piVar4[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
  return _Var3;
}

