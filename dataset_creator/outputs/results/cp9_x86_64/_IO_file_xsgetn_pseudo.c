
ulong _IO_file_xsgetn(_IO_FILE *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  size_t __n;
  char *pcVar4;
  ulong uVar5;
  ulong __n_00;
  ulong uVar6;
  
  if (param_1->_IO_buf_base == (char *)0x0) {
    if (param_1->_IO_save_base != (char *)0x0) {
      free(param_1->_IO_save_base);
      param_1->_flags = param_1->_flags & 0xfffffeff;
    }
    _IO_doallocbuf(param_1);
  }
  __n_00 = param_3;
  if (param_3 == 0) {
    return 0;
  }
LAB_006fa898:
  do {
    pcVar4 = param_1->_IO_read_ptr;
    __n = (long)param_1->_IO_read_end - (long)pcVar4;
    if (__n_00 <= __n) {
LAB_006fa9d0:
      memcpy(param_2,pcVar4,__n_00);
      param_1->_IO_read_ptr = param_1->_IO_read_ptr + __n_00;
      return param_3;
    }
    while( true ) {
      if (__n == 0) {
        uVar3 = param_1->_flags;
      }
      else {
        __n_00 = __n_00 - __n;
        param_2 = mempcpy(param_2,pcVar4,__n);
        param_1->_IO_read_ptr = param_1->_IO_read_ptr + __n;
        uVar3 = param_1->_flags;
      }
      if ((uVar3 & 0x100) == 0) break;
      _IO_switch_to_main_get_area(param_1);
      pcVar4 = param_1->_IO_read_ptr;
      __n = (long)param_1->_IO_read_end - (long)pcVar4;
      if (__n_00 <= __n) goto LAB_006fa9d0;
    }
    pcVar4 = param_1->_IO_buf_base;
    uVar6 = __n_00;
    if (pcVar4 != (char *)0x0) {
      uVar5 = (long)param_1->_IO_buf_end - (long)pcVar4;
      if (__n_00 < uVar5) {
        iVar1 = __underflow(param_1);
        if (iVar1 == -1) {
          return param_3 - __n_00;
        }
        goto LAB_006fa898;
      }
      if (0x7f < uVar5) {
        uVar6 = __n_00 - __n_00 % uVar5;
      }
    }
    lVar2 = *(long *)(param_1 + 1);
    param_1->_IO_read_ptr = pcVar4;
    param_1->_IO_read_end = pcVar4;
    param_1->_IO_read_base = pcVar4;
    param_1->_IO_write_base = pcVar4;
    param_1->_IO_write_ptr = pcVar4;
    param_1->_IO_write_end = pcVar4;
    if (0x827 < lVar2 - 0x932180U) {
      _IO_vtable_check();
    }
    lVar2 = (**(code **)(lVar2 + 0x70))(param_1,param_2,uVar6);
    if (lVar2 < 1) {
      uVar3 = param_1->_flags | 0x10;
      if (lVar2 != 0) {
        uVar3 = param_1->_flags | 0x20;
      }
      param_1->_flags = uVar3;
      return param_3 - __n_00;
    }
    param_2 = (void *)((long)param_2 + lVar2);
    __n_00 = __n_00 - lVar2;
    if (param_1->_offset != -1) {
      param_1->_offset = param_1->_offset + lVar2;
    }
    if (__n_00 == 0) {
      return param_3;
    }
  } while( true );
}

