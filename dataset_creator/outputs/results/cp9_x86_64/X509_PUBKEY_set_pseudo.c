
int X509_PUBKEY_set(X509_PUBKEY **x,EVP_PKEY *pkey)

{
  code *pcVar1;
  EVP_PKEY *pkey_00;
  int iVar2;
  X509_PUBKEY *a;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((x == (X509_PUBKEY **)0x0) || (pkey == (EVP_PKEY *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x_pubkey.c",0x142,"X509_PUBKEY_set");
    ERR_set_error(0xb,0xc0102,0);
    iVar2 = 0;
    goto LAB_0059b5fb;
  }
  if (*(long *)&pkey->references == 0) {
    if (*(long *)&pkey[1].save_parameters != 0) {
      local_48 = (uchar *)0x0;
      local_40 = 0;
      uVar3 = OSSL_ENCODER_CTX_new_for_pkey(pkey,0x86,"DER","SubjectPublicKeyInfo",0);
      iVar2 = OSSL_ENCODER_to_data(uVar3,&local_48,&local_40);
      if (iVar2 == 0) {
        OSSL_ENCODER_CTX_free(uVar3);
        CRYPTO_free(local_48);
      }
      else {
        local_38 = local_48;
        a = d2i_X509_PUBKEY((X509_PUBKEY **)0x0,&local_38,local_40);
        OSSL_ENCODER_CTX_free(uVar3);
        CRYPTO_free(local_48);
        if (a != (X509_PUBKEY *)0x0) goto LAB_0059b5c7;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/x_pubkey.c",0x167,"X509_PUBKEY_set");
    ERR_set_error(0xb,0x6f,0);
    a = (X509_PUBKEY *)0x0;
  }
  else {
    a = X509_PUBKEY_new();
    if (a == (X509_PUBKEY *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x_pubkey.c",0x148,"X509_PUBKEY_set");
      ERR_set_error(0xb,0xc0100,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)&pkey->references + 0x28);
      if (pcVar1 == (code *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/x_pubkey.c",0x151,"X509_PUBKEY_set");
        ERR_set_error(0xb,0x7c,0);
      }
      else {
        iVar2 = (*pcVar1)(a,pkey);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/x_pubkey.c",0x14d,"X509_PUBKEY_set");
          ERR_set_error(0xb,0x7e,0);
        }
        else {
LAB_0059b5c7:
          X509_PUBKEY_free(*x);
          iVar2 = EVP_PKEY_up_ref(pkey);
          if (iVar2 != 0) {
            pkey_00 = a->pkey;
            *x = a;
            if (pkey_00 != (EVP_PKEY *)0x0) {
              EVP_PKEY_free(pkey_00);
            }
            a->pkey = pkey;
            iVar2 = 1;
            goto LAB_0059b5fb;
          }
          ERR_new();
          ERR_set_debug("../crypto/x509/x_pubkey.c",0x16d,"X509_PUBKEY_set");
          ERR_set_error(0xb,0xc0103,0);
        }
      }
    }
  }
  X509_PUBKEY_free(a);
  iVar2 = 0;
LAB_0059b5fb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

