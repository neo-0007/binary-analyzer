
undefined8 ossl_cipher_hw_tdes_ofb(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  uchar *local_68;
  uchar *local_60;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = *(int *)(param_1 + 0x70);
  uVar2 = param_4;
  local_68 = param_2;
  local_60 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      lVar1 = param_4 - uVar2;
      lVar3 = param_4 - uVar2;
      uVar2 = uVar2 + 0xc000000000000000;
      DES_ede3_ofb64_encrypt
                (param_3 + lVar3,param_2 + lVar1,0x4000000000000000,
                 (DES_key_schedule *)(param_1 + 0xc0),(DES_key_schedule *)(param_1 + 0x140),
                 (DES_key_schedule *)(param_1 + 0x1c0),(DES_cblock *)(param_1 + 0x94),&local_44);
    } while (0x3fffffffffffffff < uVar2);
    uVar2 = param_4 & 0x3fffffffffffffff;
    lVar3 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_60 = param_3 + lVar3;
    local_68 = param_2 + lVar3;
  }
  if (uVar2 != 0) {
    DES_ede3_ofb64_encrypt
              (local_60,local_68,uVar2,(DES_key_schedule *)(param_1 + 0xc0),
               (DES_key_schedule *)(param_1 + 0x140),(DES_key_schedule *)(param_1 + 0x1c0),
               (DES_cblock *)(param_1 + 0x94),&local_44);
  }
  *(int *)(param_1 + 0x70) = local_44;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

