
void ossl_d2i_X509_PUBKEY_INTERNAL(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = CRYPTO_zalloc(0x30,"../crypto/x509/x_pubkey.c",0x47);
  if (local_28 != 0) {
    ASN1_item_d2i_ex(&local_28,param_1,param_2,local_it_18,param_3,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

