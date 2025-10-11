
ulong err_string_data_hash(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = 2;
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = uVar1 >> 0x17 & 0xff;
  }
  return ((uVar1 ^ uVar2) % 0x13) * 0xd ^ uVar1 ^ uVar2;
}

