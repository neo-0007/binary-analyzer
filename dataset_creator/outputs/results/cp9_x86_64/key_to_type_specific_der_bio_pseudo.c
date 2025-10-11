
bool key_to_type_specific_der_bio(BIO *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  code *in_R9;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (void *)0x0;
  iVar2 = (*in_R9)(param_2,&local_18);
  if (iVar2 < 1) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x17f,
                  "key_to_type_specific_der_bio");
    ERR_set_error(0x39,0xc0100,0);
    bVar1 = false;
  }
  else {
    iVar2 = BIO_write(param_1,local_18,iVar2);
    CRYPTO_free(local_18);
    bVar1 = 0 < iVar2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

