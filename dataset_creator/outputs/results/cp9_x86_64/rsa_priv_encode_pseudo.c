
int rsa_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  uchar *penc;
  ASN1_STRING *pval;
  int iVar1;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  int local_54;
  uchar *local_50;
  ASN1_STRING *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  iVar1 = rsa_param_encode_isra_0(*(undefined8 *)(param_2 + 0x20),&local_48,&local_54);
  if (iVar1 != 0) {
    iVar1 = i2d_RSAPrivateKey(*(RSA **)(param_2 + 0x20),&local_50);
    pval = local_48;
    penc = local_50;
    if (iVar1 < 1) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x9a,"rsa_priv_encode");
      ERR_set_error(4,0xc0100,0);
      ASN1_STRING_free(local_48);
    }
    else {
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar1 = PKCS8_pkey_set0(param_1,aobj,0,local_54,pval,penc,iVar1);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_ameth.c",0xa1,"rsa_priv_encode");
        ERR_set_error(4,0xc0100,0);
        ASN1_STRING_free(local_48);
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

