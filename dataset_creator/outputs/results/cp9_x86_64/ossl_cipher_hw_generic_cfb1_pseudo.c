
undefined8 ossl_cipher_hw_generic_cfb1(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_68;
  ulong local_60;
  long local_58;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = *(undefined4 *)(param_1 + 0xe);
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  if ((bVar1 & 0x40) == 0) {
    local_68 = param_2;
    local_60 = param_4;
    local_58 = param_3;
    if (param_4 >> 0x3c != 0) {
      local_58 = (param_4 + 0xf000000000000000 >> 0x3c) + 1 << 0x3c;
      local_68 = param_2 + local_58;
      lVar2 = param_3;
      while( true ) {
        CRYPTO_cfb128_1_encrypt
                  (lVar2,param_2,0x8000000000000000,param_1[0x16],(long)param_1 + 0x94,&local_44,
                   bVar1 >> 1 & 1,*param_1);
        if (param_2 + 0x1000000000000000 == local_68) break;
        bVar1 = *(byte *)((long)param_1 + 0x3c);
        lVar2 = lVar2 + 0x1000000000000000;
        param_2 = param_2 + 0x1000000000000000;
      }
      local_58 = param_3 + local_58;
      local_60 = param_4 & 0xfffffffffffffff;
    }
    if (local_60 != 0) {
      CRYPTO_cfb128_1_encrypt
                (local_58,local_68,local_60 << 3,param_1[0x16],(long)param_1 + 0x94,&local_44,
                 *(byte *)((long)param_1 + 0x3c) >> 1 & 1,*param_1);
    }
  }
  else {
    CRYPTO_cfb128_1_encrypt
              (param_3,param_2,param_4,param_1[0x16],(long)param_1 + 0x94,&local_44,bVar1 >> 1 & 1,
               *param_1);
  }
  *(undefined4 *)(param_1 + 0xe) = local_44;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return 1;
}

