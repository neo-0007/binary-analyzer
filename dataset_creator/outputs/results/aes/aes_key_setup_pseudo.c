
void aes_key_setup(long param_1,long param_2,int param_3)

{
  long in_FS_OFFSET;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = 0x1000000;
  local_58[1] = 0x2000000;
  local_58[2] = 0x4000000;
  local_58[3] = 0x8000000;
  local_58[4] = 0x10000000;
  local_58[5] = 0x20000000;
  local_58[6] = 0x40000000;
  local_58[7] = 0x80000000;
  local_58[8] = 0x1b000000;
  local_58[9] = 0x36000000;
  local_58[10] = 0x6c000000;
  local_58[0xb] = 0xd8000000;
  local_58[0xc] = 0xab000000;
  local_58[0xd] = 0x4d000000;
  local_58[0xe] = 0x9a000000;
  if (param_3 == 0x100) {
    local_6c = 0xe;
    local_68 = 8;
  }
  else {
    if (0x100 < param_3) goto LAB_004029ab;
    if (param_3 == 0x80) {
      local_6c = 10;
      local_68 = 4;
    }
    else {
      if (param_3 != 0xc0) goto LAB_004029ab;
      local_6c = 0xc;
      local_68 = 6;
    }
  }
  for (local_64 = 0; (int)local_64 < (int)local_68; local_64 = local_64 + 1) {
    *(uint *)(param_2 + (long)(int)local_64 * 4) =
         (uint)*(byte *)(param_1 + (int)(local_64 << 2)) << 0x18 |
         (uint)*(byte *)(param_1 + (long)(int)(local_64 << 2) + 1) << 0x10 |
         (uint)*(byte *)(param_1 + (long)(int)(local_64 << 2) + 2) << 8 |
         (uint)*(byte *)(param_1 + (long)(int)(local_64 << 2) + 3);
  }
  for (local_64 = local_68; (int)local_64 < (local_6c + 1) * 4; local_64 = local_64 + 1) {
    local_60 = *(uint *)(param_2 + (long)(int)local_64 * 4 + -4);
    if ((int)local_64 % (int)local_68 == 0) {
      local_60 = SubWord(local_60 << 8 | local_60 >> 0x18);
      local_60 = local_58[(int)(local_64 - 1) / (int)local_68] ^ local_60;
    }
    else if ((6 < local_68) && ((int)local_64 % (int)local_68 == 4)) {
      local_60 = SubWord(local_60);
    }
    *(uint *)(param_2 + (long)(int)local_64 * 4) =
         *(uint *)(param_2 + (long)(int)(local_64 - local_68) * 4) ^ local_60;
  }
LAB_004029ab:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

