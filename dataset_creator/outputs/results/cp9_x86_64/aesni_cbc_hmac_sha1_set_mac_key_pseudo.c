
void aesni_cbc_hmac_sha1_set_mac_key(long param_1,undefined8 param_2,ulong param_3)

{
  SHA_CTX *c;
  byte *pbVar1;
  byte *pbVar2;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  byte local_48 [8];
  long local_40;
  
  c = (SHA_CTX *)(param_1 + 0x1f8);
  pbVar1 = local_88;
  pbVar2 = local_88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_3 < 0x41) {
    __memcpy_chk(local_88,param_2,param_3,0x40);
  }
  else {
    SHA1_Init(c);
    sha1_update(c,param_2,param_3);
    SHA1_Final(local_88,c);
  }
  do {
    *pbVar1 = *pbVar1 ^ 0x36;
    pbVar1 = pbVar1 + 1;
  } while (pbVar1 != local_48);
  SHA1_Init(c);
  sha1_update(c,local_88,0x40);
  do {
    *pbVar2 = *pbVar2 ^ 0x6a;
    pbVar2 = pbVar2 + 1;
  } while (pbVar2 != local_48);
  SHA1_Init((SHA_CTX *)(param_1 + 600));
  sha1_update((SHA_CTX *)(param_1 + 600),local_88,0x40);
  OPENSSL_cleanse(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

