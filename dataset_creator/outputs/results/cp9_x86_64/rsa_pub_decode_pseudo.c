
int rsa_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  RSA *r;
  long in_FS_OFFSET;
  int local_34;
  uchar *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_30,&local_34,&local_28,param_2);
  if (iVar1 != 0) {
    r = d2i_RSAPublicKey((RSA **)0x0,&local_30,(long)local_34);
    if (r != (RSA *)0x0) {
      iVar1 = ossl_rsa_param_decode(r,local_28);
      if (iVar1 != 0) {
        RSA_clear_flags(r,0xf000);
        iVar1 = **(int **)&param_1->references;
        if (iVar1 == 6) {
          RSA_set_flags(r,0);
          iVar1 = **(int **)&param_1->references;
        }
        else if (iVar1 == 0x390) {
          RSA_set_flags(r,0x1000);
          iVar1 = **(int **)&param_1->references;
        }
        iVar1 = EVP_PKEY_assign(param_1,iVar1,r);
        if (iVar1 != 0) {
          iVar1 = 1;
          goto LAB_00552b30;
        }
      }
      RSA_free(r);
      goto LAB_00552b30;
    }
  }
  iVar1 = 0;
LAB_00552b30:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

