
bool PKCS12_key_gen_asc_ex
               (char *param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11)

{
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  long in_FS_OFFSET;
  int local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    local_48 = (uchar *)0x0;
    local_4c = 0;
  }
  else {
    puVar3 = OPENSSL_asc2uni(param_1,param_2,&local_48,&local_4c);
    if (puVar3 == (uchar *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs12/p12_key.c",0x20,"PKCS12_key_gen_asc_ex");
      ERR_set_error(0x23,0xc0100,0);
      bVar1 = false;
      goto LAB_005fb444;
    }
  }
  iVar2 = PKCS12_key_gen_uni_ex
                    (local_48,local_4c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11);
  CRYPTO_clear_free(local_48,(long)local_4c,"../crypto/pkcs12/p12_key.c",0x25);
  bVar1 = 0 < iVar2;
LAB_005fb444:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar1;
}

