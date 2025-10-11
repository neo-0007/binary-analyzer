
undefined8 dh_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  DH *a;
  uchar *penc;
  int iVar1;
  ASN1_STRING *a_00;
  ASN1_INTEGER *a_01;
  ASN1_OBJECT *aobj;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  a = *(DH **)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  a_00 = ASN1_STRING_new();
  if (a_00 == (ASN1_STRING *)0x0) {
    ERR_new();
    uVar2 = 0x7c;
LAB_004c6739:
    ERR_set_debug("../crypto/dh/dh_ameth.c",uVar2,"dh_pub_encode");
    ERR_set_error(5,0xc0100,0);
  }
  else {
    if (*(undefined1 **)(param_2 + 8) == ossl_dhx_asn1_meth) {
      iVar1 = i2d_DHxparams();
    }
    else {
      iVar1 = i2d_DHparams(a,&a_00->data);
    }
    a_00->length = iVar1;
    if (iVar1 < 1) {
      ERR_new();
      uVar2 = 0x81;
      goto LAB_004c6739;
    }
    a_01 = BN_to_ASN1_INTEGER((BIGNUM *)(a->ex_data).sk,(ASN1_INTEGER *)0x0);
    if (a_01 != (ASN1_INTEGER *)0x0) {
      iVar1 = i2d_ASN1_INTEGER(a_01,&local_38);
      ASN1_INTEGER_free(a_01);
      penc = local_38;
      if (iVar1 < 1) {
        ERR_new();
        uVar2 = 0x8f;
        goto LAB_004c6739;
      }
      aobj = OBJ_nid2obj(**(int **)(param_2 + 8));
      iVar1 = X509_PUBKEY_set0_param(param_1,aobj,0x10,a_00,penc,iVar1);
      uVar2 = 1;
      if (iVar1 != 0) goto LAB_004c6704;
    }
  }
  CRYPTO_free(local_38);
  ASN1_STRING_free(a_00);
  uVar2 = 0;
LAB_004c6704:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

