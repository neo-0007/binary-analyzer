
undefined8 _IO_str_pbackfail(byte *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((*param_1 & 8) != 0) && (param_2 != -1)) {
    return 0xffffffff;
  }
  uVar1 = _IO_default_pbackfail();
  return uVar1;
}

