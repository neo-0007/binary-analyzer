
int dsa_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  DSA *r;
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
  if (iVar1 == 0) goto LAB_004cb00e;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_44,&local_30,local_28);
  if (local_44 == 0x10) {
    local_38 = *(uchar **)(local_30 + 2);
    r = d2i_DSAparams((DSA **)0x0,&local_38,(long)*local_30);
    if (r == (DSA *)0x0) {
      ERR_new();
      ai = (ASN1_STRING *)0x0;
      ERR_set_debug("../crypto/dsa/dsa_ameth.c",0x33,"dsa_pub_decode");
      ERR_set_error(10,0x68,0);
    }
    else {
LAB_004cb0c1:
      ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_40,(long)local_48);
      if (ai == (ASN1_INTEGER *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/dsa/dsa_ameth.c",0x42,"dsa_pub_decode");
        ERR_set_error(10,0x68,0);
      }
      else {
        pBVar2 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
        (r->ex_data).sk = (stack_st_void *)pBVar2;
        if (pBVar2 != (BIGNUM *)0x0) {
          r[1].priv_key = (BIGNUM *)((long)&(r[1].priv_key)->d + 1);
          ASN1_INTEGER_free(ai);
          EVP_PKEY_assign(param_1,0x74,r);
          iVar1 = 1;
          goto LAB_004cb00e;
        }
        ERR_new();
        ERR_set_debug("../crypto/dsa/dsa_ameth.c",0x47,"dsa_pub_decode");
        ERR_set_error(10,0x6c,0);
      }
    }
  }
  else if ((local_44 == 5) || (local_44 == -1)) {
    r = DSA_new();
    if (r != (DSA *)0x0) goto LAB_004cb0c1;
    ERR_new();
    ai = (ASN1_STRING *)0x0;
    ERR_set_debug("../crypto/dsa/dsa_ameth.c",0x39,"dsa_pub_decode");
    ERR_set_error(10,0xc0100,0);
  }
  else {
    ERR_new();
    r = (DSA *)0x0;
    ai = (ASN1_STRING *)0x0;
    ERR_set_debug("../crypto/dsa/dsa_ameth.c",0x3d,"dsa_pub_decode");
    ERR_set_error(10,0x69,0);
  }
  ASN1_INTEGER_free(ai);
  DSA_free(r);
  iVar1 = 0;
LAB_004cb00e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

