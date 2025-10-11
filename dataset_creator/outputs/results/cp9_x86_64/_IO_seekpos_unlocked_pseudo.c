
void _IO_seekpos_unlocked(_IO_FILE *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_1->_mode < 1) {
    if (param_1->_IO_save_base != (char *)0x0) {
      _IO_free_backup_area(param_1);
    }
  }
  else if (*(long *)((long)param_1->__pad2 + 0x40) != 0) {
    _IO_free_wbackup_area();
  }
  lVar1 = *(long *)(param_1 + 1);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
  }
                    /* WARNING: Could not recover jumptable at 0x00798501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x48))(param_1,param_2,0,param_3);
  return;
}

