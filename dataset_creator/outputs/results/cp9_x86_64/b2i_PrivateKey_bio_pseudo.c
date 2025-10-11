
EVP_PKEY * b2i_PrivateKey_bio(BIO *in)

{
  EVP_PKEY *pEVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  pEVar1 = (EVP_PKEY *)ossl_b2i_bio(in,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

