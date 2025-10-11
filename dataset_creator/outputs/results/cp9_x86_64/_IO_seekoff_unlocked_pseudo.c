
undefined8 _IO_seekoff_unlocked(_IO_FILE *param_1,long param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  if (2 < param_3) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0xffffffffffffffff;
  }
  if ((int)param_4 != 0) {
    if (param_1->_mode < 0) {
      if (param_1->_IO_save_base != (char *)0x0) {
        if ((param_3 == 1) && ((param_1->_flags & 0x100U) != 0)) {
          param_2 = param_2 - ((long)param_1->_IO_read_end - (long)param_1->_IO_read_ptr);
        }
        _IO_free_backup_area(param_1);
        param_4 = param_4 & 0xffffffff;
      }
    }
    else if ((param_1->_mode != 0) && (*(long *)((long)param_1->__pad2 + 0x40) != 0)) {
      if ((param_3 == 1) && ((param_1->_flags & 0x100U) != 0)) {
                    /* WARNING: Subroutine does not return */
        _IO_seekoff_unlocked_cold();
      }
      _IO_free_wbackup_area();
      param_4 = param_4 & 0xffffffff;
    }
  }
  lVar1 = *(long *)(param_1 + 1);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
    param_4 = param_4 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x006f4b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar1 + 0x48))(param_1,param_2,param_3,param_4);
  return uVar2;
}

