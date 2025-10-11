
void _IO_free_backup_area(_IO_FILE *param_1)

{
  char *pcVar1;
  char *__ptr;
  
  pcVar1 = param_1->_IO_save_base;
  __ptr = pcVar1;
  if ((param_1->_flags & 0x100U) != 0) {
    param_1->_flags = param_1->_flags & 0xfffffeff;
    __ptr = param_1->_IO_read_base;
    param_1->_IO_read_base = pcVar1;
    param_1->_IO_save_base = __ptr;
    param_1->_IO_read_ptr = pcVar1;
    param_1->_IO_read_end = param_1->_IO_save_end;
  }
  free(__ptr);
  param_1->_IO_save_end = (char *)0x0;
  param_1->_IO_save_base = (char *)0x0;
  param_1->_IO_backup_base = (char *)0x0;
  return;
}

