
undefined8 dh_priv_encode(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  long lVar1;
  uchar *penc;
  int iVar2;
  ASN1_STRING *a;
  ASN1_INTEGER *a_00;
  ASN1_OBJECT *aobj;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  a = ASN1_STRING_new();
  if (a == (ASN1_STRING *)0x0) {
    ERR_new();
    uVar3 = 0xbb;
LAB_004c6239:
    ERR_set_debug("../crypto/dh/dh_ameth.c",uVar3,"dh_priv_encode");
    ERR_set_error(5,0xc0100,0);
  }
  else {
    if (*(undefined1 **)(param_2 + 8) == ossl_dhx_asn1_meth) {
      iVar2 = i2d_DHxparams();
    }
    else {
      iVar2 = i2d_DHparams(*(DH **)(param_2 + 0x20),&a->data);
    }
    a->length = iVar2;
    if (iVar2 < 1) {
      ERR_new();
      uVar3 = 0xc1;
      goto LAB_004c6239;
    }
    lVar1 = *(long *)(param_2 + 0x20);
    a->type = 0x10;
    a_00 = BN_to_ASN1_INTEGER(*(BIGNUM **)(lVar1 + 0x78),(ASN1_INTEGER *)0x0);
    if (a_00 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_ameth.c",0xca,"dh_priv_encode");
      ERR_set_error(5,0x6a,0);
    }
    else {
      iVar2 = i2d_ASN1_INTEGER(a_00,&local_38);
      ASN1_STRING_clear_free(a_00);
      penc = local_38;
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar2 = PKCS8_pkey_set0(param_1,aobj,0,0x10,a,penc,iVar2);
      uVar3 = 1;
      if (iVar2 != 0) goto LAB_004c6200;
    }
  }
  CRYPTO_free(local_38);
  ASN1_STRING_free(a);
  ASN1_STRING_clear_free(0);
  uVar3 = 0;
LAB_004c6200:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

