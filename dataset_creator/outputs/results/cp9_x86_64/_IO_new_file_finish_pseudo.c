
void _IO_new_file_finish(byte *param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x70) != -1) {
    if (*(int *)(param_1 + 0xc0) < 1) {
      _IO_do_write(param_1,*(long *)(param_1 + 0x20),
                   *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20));
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 0xa0) + 0x18);
      _IO_wdo_write(param_1,lVar1,*(long *)(*(long *)(param_1 + 0xa0) + 0x20) - lVar1 >> 2);
    }
    if ((*param_1 & 0x40) == 0) {
      lVar1 = *(long *)(param_1 + 0xd8);
      if (0x827 < lVar1 - 0x932180U) {
        _IO_vtable_check();
      }
      (**(code **)(lVar1 + 0x88))(param_1);
    }
  }
  _IO_default_finish(param_1,0);
  return;
}

