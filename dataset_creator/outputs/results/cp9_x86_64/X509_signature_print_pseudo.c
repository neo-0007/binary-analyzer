
int X509_signature_print(BIO *bp,X509_ALGOR *alg,ASN1_STRING *sig)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BIO_printf(bp,"%*sSignature Algorithm: ",4,&DAT_008343a2);
  if (iVar1 < 1) {
LAB_00584fc8:
    iVar1 = 0;
  }
  else {
    iVar1 = i2a_ASN1_OBJECT(bp,alg->algorithm);
    if (iVar1 < 1) goto LAB_00584fc8;
    if (sig != (ASN1_STRING *)0x0) {
      iVar1 = BIO_printf(bp,"\n%*sSignature Value:",4,&DAT_008343a2);
      if (iVar1 < 1) goto LAB_00584fc8;
    }
    iVar1 = OBJ_obj2nid(alg->algorithm);
    if (iVar1 == 0) {
LAB_00584fa8:
      iVar1 = BIO_write(bp,&DAT_0081a1ca,1);
      if (iVar1 != 1) goto LAB_00584fc8;
      iVar1 = 1;
      if (sig != (ASN1_STRING *)0x0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar1 = X509_signature_dump(bp,sig,8);
          return iVar1;
        }
        goto LAB_00585020;
      }
    }
    else {
      iVar1 = OBJ_find_sigid_algs(iVar1,&local_34,&local_38);
      if (iVar1 == 0) goto LAB_00584fa8;
      pEVar2 = EVP_PKEY_asn1_find((ENGINE **)0x0,local_38);
      if ((pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0) || (*(code **)(pEVar2 + 0xa0) == (code *)0x0))
      goto LAB_00584fa8;
      iVar1 = (**(code **)(pEVar2 + 0xa0))(bp,alg,sig,8,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_00585020:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

