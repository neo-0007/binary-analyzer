
void _IO_new_file_init(uint *param_1)

{
  *param_1 = *param_1 | 0x240c;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  _IO_link_in();
  param_1[0x1c] = 0xffffffff;
  return;
}

