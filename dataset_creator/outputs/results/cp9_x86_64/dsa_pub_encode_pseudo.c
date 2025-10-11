
undefined8 dsa_pub_encode(X509_PUBKEY *param_1,long param_2)

{
  DSA *a;
  int iVar1;
  int iVar2;
  BIGNUM *a_00;
  ASN1_INTEGER *a_01;
  ASN1_OBJECT *aobj;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  a = *(DSA **)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  if (*(int *)(param_2 + 0x48) == 0) {
    a_00 = (BIGNUM *)0x0;
    iVar2 = -1;
LAB_004caea6:
    a_01 = BN_to_ASN1_INTEGER((BIGNUM *)(a->ex_data).sk,(ASN1_INTEGER *)0x0);
    if (a_01 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      uVar3 = 0x77;
      goto LAB_004caf79;
    }
    iVar1 = i2d_ASN1_INTEGER(a_01,&local_38);
    ASN1_INTEGER_free(a_01);
    if (iVar1 < 1) {
      ERR_new();
      uVar3 = 0x7f;
      goto LAB_004caf79;
    }
    aobj = OBJ_nid2obj(0x74);
    if (aobj != (ASN1_OBJECT *)0x0) {
      iVar2 = X509_PUBKEY_set0_param(param_1,aobj,iVar2,a_00,local_38,iVar1);
      uVar3 = 1;
      if (iVar2 != 0) goto LAB_004caf31;
    }
  }
  else {
    a_00 = (BIGNUM *)a->version;
    if (((a_00 == (BIGNUM *)0x0) || (a_00 = *(BIGNUM **)&a->write_params, a_00 == (BIGNUM *)0x0)) ||
       (a_00 = a->p, a_00 == (BIGNUM *)0x0)) {
      iVar2 = -1;
      goto LAB_004caea6;
    }
    a_00 = (BIGNUM *)ASN1_STRING_new();
    if (a_00 == (BIGNUM *)0x0) {
      ERR_new();
      uVar3 = 0x68;
    }
    else {
      iVar2 = 0x10;
      iVar1 = i2d_DSAparams(a,(uchar **)&a_00->top);
      *(int *)&a_00->d = iVar1;
      if (0 < iVar1) goto LAB_004caea6;
      ERR_new();
      uVar3 = 0x6d;
    }
LAB_004caf79:
    ERR_set_debug("../crypto/dsa/dsa_ameth.c",uVar3,"dsa_pub_encode");
    ERR_set_error(10,0xc0100,0);
  }
  CRYPTO_free(local_38);
  ASN1_STRING_free((ASN1_STRING *)a_00);
  uVar3 = 0;
LAB_004caf31:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

