
void _IO_str_finish(byte *param_1)

{
  if ((*(void **)(param_1 + 0x38) != (void *)0x0) && ((*param_1 & 1) == 0)) {
    free(*(void **)(param_1 + 0x38));
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  _IO_default_finish(param_1,0);
  return;
}

