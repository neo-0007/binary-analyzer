
void _IO_un_link(byte *param_1)

{
  if ((*param_1 & 0x80) == 0) {
    return;
  }
  _IO_un_link_part_0();
  return;
}

