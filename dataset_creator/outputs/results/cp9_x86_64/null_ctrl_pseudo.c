
uint null_ctrl(undefined8 param_1,uint param_2)

{
  if (param_2 < 0xd) {
    return (uint)(0x1a16L >> ((byte)param_2 & 0x3f)) & 1;
  }
  return 0;
}

