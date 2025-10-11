
ulong _IO_file_seekoff(_IO_FILE *param_1,ulong param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar8;
  long in_FS_OFFSET;
  long local_e8;
  undefined1 local_d8 [24];
  uint local_c0;
  long local_a8;
  long local_40;
  char *pcVar7;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (param_1->_IO_buf_base == (char *)0x0) {
      lVar3 = param_1->_offset;
      lVar6 = 0;
LAB_006fa2a2:
      if (lVar3 == -1) {
        lVar3 = *(long *)(param_1 + 1);
        if (0x827 < lVar3 - 0x932180U) {
          _IO_vtable_check();
        }
        lVar3 = (**(code **)(lVar3 + 0x80))(param_1,0,1);
        if (lVar3 == -1) goto LAB_006fa2bf;
      }
      param_2 = lVar3 + lVar6;
      if (-1 < (long)param_2) goto LAB_006fa1cc;
LAB_006fa2b1:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    }
    else {
      pcVar7 = param_1->_IO_write_ptr;
      uVar4 = param_1->_flags & 0x1000;
      if ((pcVar7 <= param_1->_IO_write_base) || (uVar4 == 0)) {
        lVar3 = param_1->_offset;
        if (param_1->_IO_write_base < pcVar7) {
          if (uVar4 != 0) goto LAB_006fa26d;
          lVar6 = (long)pcVar7 - (long)param_1->_IO_read_end;
        }
        else {
          lVar6 = (long)param_1->_IO_read_ptr - (long)param_1->_IO_read_end;
        }
        goto LAB_006fa2a2;
      }
      lVar3 = *(long *)(param_1 + 1);
      if (0x827 < lVar3 - 0x932180U) {
        _IO_vtable_check();
      }
      lVar3 = (**(code **)(lVar3 + 0x80))(param_1,0,2);
      if (lVar3 != -1) {
        param_1->_offset = lVar3;
        pcVar7 = param_1->_IO_write_ptr;
LAB_006fa26d:
        lVar6 = (long)pcVar7 - (long)param_1->_IO_write_base;
        goto LAB_006fa2a2;
      }
    }
LAB_006fa2bf:
    param_2 = 0xffffffffffffffff;
    goto LAB_006fa1cc;
  }
  if ((param_1->_IO_read_base == param_1->_IO_read_end) &&
     (param_1->_IO_write_ptr == param_1->_IO_write_base)) {
    bVar1 = true;
LAB_006f9fa0:
    if ((param_1->_flags & 0x800U) != 0) goto LAB_006f9efb;
    if (param_1->_IO_buf_base != (char *)0x0) goto LAB_006f9f16;
LAB_006f9fb8:
    if (param_1->_IO_read_base != (char *)0x0) {
      free(param_1->_IO_read_base);
      param_1->_flags = param_1->_flags & 0xfffffeff;
    }
    _IO_doallocbuf(param_1);
    pcVar7 = param_1->_IO_buf_base;
    param_1->_IO_read_ptr = pcVar7;
    param_1->_IO_read_end = pcVar7;
    param_1->_IO_read_base = pcVar7;
    param_1->_IO_write_base = pcVar7;
    param_1->_IO_write_ptr = pcVar7;
    param_1->_IO_write_end = pcVar7;
    if (param_3 != 1) goto LAB_006f9f20;
LAB_006f9ff4:
    uVar8 = param_2 - ((long)param_1->_IO_read_end - (long)param_1->_IO_read_ptr);
    if (param_1->_offset != -1) {
      param_2 = uVar8 + param_1->_offset;
      if ((long)param_2 < 0) goto LAB_006fa2b1;
LAB_006fa019:
      param_3 = 0;
LAB_006fa01c:
      _IO_free_backup_area(param_1);
      lVar3 = param_1->_offset;
      uVar4 = param_1->_flags;
      if (((lVar3 != -1) && (param_1->_IO_read_base != (char *)0x0)) && ((uVar4 & 0x100) == 0)) {
        pcVar7 = param_1->_IO_buf_base;
        if (((long)param_2 < lVar3) &&
           ((long)(pcVar7 + (lVar3 - (long)param_1->_IO_read_end)) <= (long)param_2)) {
          param_1->_IO_read_base = pcVar7;
          param_1->_IO_write_base = pcVar7;
          param_1->_flags = uVar4 & 0xffffffef;
          param_1->_IO_write_ptr = pcVar7;
          param_1->_IO_write_end = pcVar7;
          param_1->_IO_read_ptr =
               pcVar7 + (param_2 - (long)(pcVar7 + (lVar3 - (long)param_1->_IO_read_end)));
          if (-1 < lVar3) {
            lVar6 = *(long *)(param_1 + 1);
            if (0x827 < lVar6 - 0x932180U) {
              _IO_vtable_check();
              lVar3 = param_1->_offset;
            }
            (**(code **)(lVar6 + 0x80))(param_1,lVar3,0);
          }
          goto LAB_006fa1cc;
        }
      }
      uVar8 = param_2;
      if ((uVar4 & 4) == 0) {
        uVar5 = (long)param_1->_IO_buf_base - (long)param_1->_IO_buf_end & param_2;
        uVar8 = param_2 - uVar5;
        if ((long)param_1->_IO_buf_end - (long)param_1->_IO_buf_base < (long)uVar8) {
          uVar8 = 0;
          uVar5 = param_2;
        }
        lVar3 = *(long *)(param_1 + 1);
        if (0x827 < lVar3 - 0x932180U) {
          _IO_vtable_check();
        }
        lVar3 = (**(code **)(lVar3 + 0x80))(param_1,uVar5,0);
        if (lVar3 < 0) goto LAB_006fa2bf;
        if (uVar8 == 0) {
          local_e8 = 0;
        }
        else {
          lVar6 = *(long *)(param_1 + 1);
          if (0x827 < lVar6 - 0x932180U) {
            _IO_vtable_check();
          }
          uVar5 = uVar8;
          if (!bVar1) {
            uVar5 = (long)param_1->_IO_buf_end - (long)param_1->_IO_buf_base;
          }
          local_e8 = (**(code **)(lVar6 + 0x70))(param_1,param_1->_IO_buf_base,uVar5);
          if (local_e8 < (long)uVar8) {
            param_3 = 1;
            if (local_e8 != -1) {
              uVar8 = uVar8 - local_e8;
              param_3 = 1;
            }
            goto LAB_006fa178;
          }
          lVar3 = lVar3 + local_e8;
        }
        pcVar7 = param_1->_IO_buf_base;
        param_1->_flags = param_1->_flags & 0xffffffef;
        param_1->_offset = lVar3;
        param_1->_IO_read_base = pcVar7;
        param_1->_IO_write_base = pcVar7;
        param_1->_IO_read_ptr = pcVar7 + uVar8;
        param_1->_IO_read_end = pcVar7 + local_e8;
        param_1->_IO_write_ptr = pcVar7;
        param_1->_IO_write_end = pcVar7;
        goto LAB_006fa1cc;
      }
    }
  }
  else {
    bVar1 = false;
    if (param_1->_IO_write_ptr <= param_1->_IO_write_base) goto LAB_006f9fa0;
LAB_006f9efb:
    iVar2 = _IO_switch_to_get_mode(param_1);
    if (iVar2 != 0) goto LAB_006fa2bf;
    if (param_1->_IO_buf_base == (char *)0x0) goto LAB_006f9fb8;
LAB_006f9f16:
    if (param_3 == 1) goto LAB_006f9ff4;
LAB_006f9f20:
    if (param_3 != 2) goto LAB_006fa01c;
    lVar3 = *(long *)(param_1 + 1);
    if (0x827 < lVar3 - 0x932180U) {
      _IO_vtable_check();
    }
    iVar2 = (**(code **)(lVar3 + 0x90))(param_1,local_d8);
    uVar8 = param_2;
    if ((iVar2 == 0) && ((local_c0 & 0xf000) == 0x8000)) {
      param_2 = param_2 + local_a8;
      goto LAB_006fa019;
    }
  }
LAB_006fa178:
  _IO_unsave_markers(param_1);
  lVar3 = *(long *)(param_1 + 1);
  if (0x827 < lVar3 - 0x932180U) {
    _IO_vtable_check();
  }
  param_2 = (**(code **)(lVar3 + 0x80))(param_1,uVar8,param_3);
  if (param_2 != 0xffffffffffffffff) {
    pcVar7 = param_1->_IO_buf_base;
    param_1->_flags = param_1->_flags & 0xffffffef;
    param_1->_offset = param_2;
    param_1->_IO_read_ptr = pcVar7;
    param_1->_IO_read_end = pcVar7;
    param_1->_IO_read_base = pcVar7;
    param_1->_IO_write_base = pcVar7;
    param_1->_IO_write_ptr = pcVar7;
    param_1->_IO_write_end = pcVar7;
  }
LAB_006fa1cc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_2;
}

