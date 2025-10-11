
int dh_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  DH *dh;
  ASN1_INTEGER *ai;
  BIGNUM *pBVar2;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  uchar *local_40;
  uchar *local_38;
  int *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_40,&local_48,&local_28,param_2);
  if (iVar1 != 0) {
    X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_44,&local_30,local_28);
    if (local_44 == 0x10) {
      local_38 = *(uchar **)(local_30 + 2);
      if (*(undefined1 **)&param_1->references == ossl_dhx_asn1_meth) {
        dh = (DH *)d2i_DHxparams();
      }
      else {
        dh = d2i_DHparams((DH **)0x0,&local_38,(long)*local_30);
      }
      if (dh == (DH *)0x0) {
        ERR_new();
        ai = (ASN1_STRING *)0x0;
        ERR_set_debug("../crypto/dh/dh_ameth.c",0x56,"dh_pub_decode");
        ERR_set_error(5,0x68,0);
      }
      else {
        ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_40,(long)local_48);
        if (ai == (ASN1_INTEGER *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/dh/dh_ameth.c",0x5b,"dh_pub_decode");
          ERR_set_error(5,0x68,0);
        }
        else {
          pBVar2 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
          (dh->ex_data).sk = (stack_st_void *)pBVar2;
          if (pBVar2 != (BIGNUM *)0x0) {
            ASN1_INTEGER_free(ai);
            EVP_PKEY_assign(param_1,**(int **)&param_1->references,dh);
            iVar1 = 1;
            goto LAB_004c632e;
          }
          ERR_new();
          ERR_set_debug("../crypto/dh/dh_ameth.c",0x61,"dh_pub_decode");
          ERR_set_error(5,0x6d,0);
        }
      }
    }
    else {
      ERR_new();
      dh = (DH *)0x0;
      ai = (ASN1_STRING *)0x0;
      ERR_set_debug("../crypto/dh/dh_ameth.c",0x4d,"dh_pub_decode");
      ERR_set_error(5,0x69,0);
    }
    ASN1_INTEGER_free(ai);
    DH_free(dh);
    iVar1 = 0;
  }
LAB_004c632e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

