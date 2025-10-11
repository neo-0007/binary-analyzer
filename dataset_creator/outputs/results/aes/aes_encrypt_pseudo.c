
void aes_encrypt(undefined1 *param_1,undefined1 *param_2,long param_3,int param_4)

{
  long in_FS_OFFSET;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = *param_1;
  local_24 = param_1[1];
  local_20 = param_1[2];
  local_1c = param_1[3];
  local_27 = param_1[4];
  local_23 = param_1[5];
  local_1f = param_1[6];
  local_1b = param_1[7];
  local_26 = param_1[8];
  local_22 = param_1[9];
  local_1e = param_1[10];
  local_1a = param_1[0xb];
  local_25 = param_1[0xc];
  local_21 = param_1[0xd];
  local_1d = param_1[0xe];
  local_19 = param_1[0xf];
  AddRoundKey(&local_28,param_3);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x10);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x20);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x30);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x40);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x50);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x60);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x70);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x80);
  SubBytes(&local_28);
  ShiftRows(&local_28);
  MixColumns(&local_28);
  AddRoundKey(&local_28,param_3 + 0x90);
  if (param_4 == 0x80) {
    SubBytes(&local_28);
    ShiftRows(&local_28);
    AddRoundKey(&local_28,param_3 + 0xa0);
  }
  else {
    SubBytes(&local_28);
    ShiftRows(&local_28);
    MixColumns(&local_28);
    AddRoundKey(&local_28,param_3 + 0xa0);
    SubBytes(&local_28);
    ShiftRows(&local_28);
    MixColumns(&local_28);
    AddRoundKey(&local_28,param_3 + 0xb0);
    if (param_4 == 0xc0) {
      SubBytes(&local_28);
      ShiftRows(&local_28);
      AddRoundKey(&local_28,param_3 + 0xc0);
    }
    else {
      SubBytes(&local_28);
      ShiftRows(&local_28);
      MixColumns(&local_28);
      AddRoundKey(&local_28,param_3 + 0xc0);
      SubBytes(&local_28);
      ShiftRows(&local_28);
      MixColumns(&local_28);
      AddRoundKey(&local_28,param_3 + 0xd0);
      SubBytes(&local_28);
      ShiftRows(&local_28);
      AddRoundKey(&local_28,param_3 + 0xe0);
    }
  }
  *param_2 = local_28;
  param_2[1] = local_24;
  param_2[2] = local_20;
  param_2[3] = local_1c;
  param_2[4] = local_27;
  param_2[5] = local_23;
  param_2[6] = local_1f;
  param_2[7] = local_1b;
  param_2[8] = local_26;
  param_2[9] = local_22;
  param_2[10] = local_1e;
  param_2[0xb] = local_1a;
  param_2[0xc] = local_25;
  param_2[0xd] = local_21;
  param_2[0xe] = local_1d;
  param_2[0xf] = local_19;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

