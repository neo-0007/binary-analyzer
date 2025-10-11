
uint ossl_read_der(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  BIO *a;
  uint uVar2;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined8 *)0x0;
  a = (BIO *)ossl_bio_new_from_core_bio();
  if (a != (BIO *)0x0) {
    uVar1 = asn1_d2i_read_bio(a,&local_38);
    uVar2 = ~uVar1 >> 0x1f;
    if (-1 < (int)uVar1) {
      *param_3 = local_38[1];
      *param_4 = *local_38;
      CRYPTO_free(local_38);
    }
    BIO_free(a);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

