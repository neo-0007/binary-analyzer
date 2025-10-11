
int __underflow(_IO_FILE *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (param_1->_mode == 0) {
    param_1->_mode = -1;
  }
  else if (param_1->_mode != -1) {
    return -1;
  }
  uVar2 = param_1->_flags;
  if ((uVar2 & 0x800) == 0) {
    pbVar4 = (byte *)param_1->_IO_read_ptr;
    pbVar5 = (byte *)param_1->_IO_read_end;
  }
  else {
    pbVar4 = (byte *)param_1->_IO_write_ptr;
    if (param_1->_IO_write_base < pbVar4) {
      lVar1 = *(long *)(param_1 + 1);
      if (0x827 < lVar1 - 0x932180U) {
        _IO_vtable_check();
      }
      iVar3 = (**(code **)(lVar1 + 0x18))(param_1,0xffffffff);
      if (iVar3 == -1) {
        return -1;
      }
      uVar2 = param_1->_flags;
      pbVar4 = (byte *)param_1->_IO_write_ptr;
    }
    pbVar5 = (byte *)param_1->_IO_read_end;
    if ((uVar2 & 0x100) == 0) {
      param_1->_IO_read_base = param_1->_IO_buf_base;
      if (pbVar5 < pbVar4) {
        param_1->_IO_read_end = (char *)pbVar4;
        pbVar5 = pbVar4;
      }
    }
    else {
      param_1->_IO_read_base = param_1->_IO_backup_base;
    }
    uVar2 = uVar2 & 0xfffff7ff;
    param_1->_IO_read_ptr = (char *)pbVar4;
    param_1->_IO_write_end = (char *)pbVar4;
    param_1->_IO_write_base = (char *)pbVar4;
    param_1->_flags = uVar2;
  }
  if (pbVar4 < pbVar5) {
    return (uint)*pbVar4;
  }
  pbVar4 = pbVar5;
  if ((uVar2 & 0x100) != 0) {
    pbVar4 = (byte *)param_1->_IO_save_end;
    param_1->_IO_save_end = (char *)pbVar5;
    param_1->_flags = uVar2 & 0xfffffeff;
    pbVar5 = (byte *)param_1->_IO_save_base;
    param_1->_IO_save_base = param_1->_IO_read_base;
    param_1->_IO_read_base = (char *)pbVar5;
    param_1->_IO_read_ptr = (char *)pbVar5;
    param_1->_IO_read_end = (char *)pbVar4;
    if (pbVar5 < pbVar4) {
      return (int)*pbVar5;
    }
  }
  if (param_1->_markers == (_IO_marker *)0x0) {
    if (param_1->_IO_save_base != (char *)0x0) {
      free(param_1->_IO_save_base);
      param_1->_IO_save_end = (char *)0x0;
      param_1->_IO_save_base = (char *)0x0;
      param_1->_IO_backup_base = (char *)0x0;
    }
  }
  else {
    iVar3 = save_for_backup(param_1,pbVar4);
    if (iVar3 != 0) {
      return -1;
    }
  }
  lVar1 = *(long *)(param_1 + 1);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
  }
                    /* WARNING: Could not recover jumptable at 0x006fcc9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(lVar1 + 0x20))(param_1);
  return iVar3;
}

