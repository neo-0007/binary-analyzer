
ulong _IO_new_file_overflow(_IO_FILE *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  
  uVar2 = param_1->_flags;
  if ((uVar2 & 8) != 0) {
    param_1->_flags = uVar2 | 0x20;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    return 0xffffffff;
  }
  pcVar5 = param_1->_IO_write_base;
  if ((uVar2 & 0x800) == 0) {
    if (pcVar5 == (char *)0x0) goto LAB_006fc188;
    pcVar6 = param_1->_IO_read_ptr;
  }
  else {
    if (pcVar5 != (char *)0x0) {
      pcVar6 = param_1->_IO_write_ptr;
      goto joined_r0x006fc0c6;
    }
LAB_006fc188:
    _IO_doallocbuf(param_1);
    pcVar6 = param_1->_IO_buf_base;
    uVar2 = param_1->_flags;
    param_1->_IO_read_base = pcVar6;
    param_1->_IO_read_ptr = pcVar6;
    param_1->_IO_read_end = pcVar6;
  }
  if ((uVar2 & 0x100) != 0) {
    uVar7 = (long)param_1->_IO_read_end - (long)pcVar6;
    _IO_free_backup_area(param_1);
    uVar4 = (long)param_1->_IO_read_base - (long)param_1->_IO_buf_base;
    if (uVar7 < uVar4) {
      uVar4 = uVar7;
    }
    pcVar6 = param_1->_IO_read_base + -uVar4;
    uVar2 = param_1->_flags;
  }
  if (param_1->_IO_buf_end == pcVar6) {
    pcVar5 = param_1->_IO_buf_base;
    param_1->_IO_read_ptr = pcVar5;
    param_1->_IO_read_end = pcVar5;
    pcVar6 = pcVar5;
  }
  else {
    pcVar5 = param_1->_IO_read_end;
  }
  param_1->_IO_read_ptr = pcVar5;
  param_1->_IO_read_base = pcVar5;
  param_1->_IO_write_end = param_1->_IO_buf_end;
  param_1->_flags = uVar2 | 0x800;
  param_1->_IO_write_ptr = pcVar6;
  param_1->_IO_write_base = pcVar6;
  pcVar5 = pcVar6;
  if ((param_1->_mode < 1) && ((uVar2 & 0x202) != 0)) {
    param_1->_IO_write_end = pcVar6;
  }
joined_r0x006fc0c6:
  if (param_2 == 0xffffffff) {
    uVar4 = _IO_do_write(param_1,pcVar5,(long)pcVar6 - (long)pcVar5);
    return uVar4;
  }
  if (param_1->_IO_buf_end == pcVar6) {
    if (param_1->_mode < 1) {
      iVar3 = _IO_do_write(param_1,pcVar5,(long)pcVar6 - (long)pcVar5);
    }
    else {
      lVar1 = *(long *)((long)param_1->__pad2 + 0x18);
      iVar3 = _IO_wdo_write(param_1,lVar1,*(long *)((long)param_1->__pad2 + 0x20) - lVar1 >> 2);
    }
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    pcVar6 = param_1->_IO_write_ptr;
  }
  param_1->_IO_write_ptr = pcVar6 + 1;
  *pcVar6 = (char)param_2;
  if ((((param_1->_flags & 2U) != 0) || (((param_1->_flags & 0x200U) != 0 && (param_2 == 10)))) &&
     (iVar3 = _IO_do_write(param_1,param_1->_IO_write_base,
                           (long)param_1->_IO_write_ptr - (long)param_1->_IO_write_base),
     iVar3 == -1)) {
    return 0xffffffff;
  }
  return (ulong)(param_2 & 0xff);
}

