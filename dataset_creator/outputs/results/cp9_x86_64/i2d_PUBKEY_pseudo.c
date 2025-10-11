
int i2d_PUBKEY(EVP_PKEY *a,uchar **pp)

{
  code *pcVar1;
  int iVar2;
  X509_PUBKEY *a_00;
  undefined8 uVar3;
  BIO_METHOD *type;
  BIO *bp;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (EVP_PKEY *)0x0) {
    iVar2 = 0;
    goto LAB_0059bc52;
  }
  if (*(long *)&a->references == 0) {
    if (*(long *)&a[1].save_parameters == 0) goto LAB_0059bd71;
    uVar3 = OSSL_ENCODER_CTX_new_for_pkey(a,0x86,"DER","SubjectPublicKeyInfo",0);
    type = BIO_s_mem();
    bp = BIO_new(type);
    local_38 = (undefined8 *)0x0;
    iVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar3);
    if ((bp == (BIO *)0x0) || (iVar2 == 0)) {
LAB_0059bcd2:
      iVar2 = -1;
    }
    else {
      iVar2 = OSSL_ENCODER_to_bio(uVar3,bp);
      if (iVar2 == 0) goto LAB_0059bcd2;
      lVar4 = BIO_ctrl(bp,0x73,0,&local_38);
      if (lVar4 < 1) goto LAB_0059bcd2;
      iVar2 = (int)*local_38;
      if (pp != (uchar **)0x0) {
        if (*pp == (uchar *)0x0) {
          *pp = (uchar *)local_38[1];
          *local_38 = 0;
          local_38[1] = 0;
        }
        else {
          memcpy(*pp,(uchar *)local_38[1],(long)iVar2);
          *pp = *pp + iVar2;
        }
      }
    }
    BIO_free(bp);
    OSSL_ENCODER_CTX_free(uVar3);
    goto LAB_0059bc52;
  }
  a_00 = X509_PUBKEY_new();
  if (a_00 == (X509_PUBKEY *)0x0) {
LAB_0059bd71:
    iVar2 = -1;
    goto LAB_0059bc52;
  }
  pcVar1 = *(code **)(*(long *)&a->references + 0x28);
  if (pcVar1 == (code *)0x0) {
LAB_0059bc44:
    iVar2 = -1;
  }
  else {
    iVar2 = (*pcVar1)(a_00,a);
    if (iVar2 == 0) goto LAB_0059bc44;
    a_00->pkey = a;
    iVar2 = i2d_X509_PUBKEY(a_00,pp);
    a_00->pkey = (EVP_PKEY *)0x0;
  }
  X509_PUBKEY_free(a_00);
LAB_0059bc52:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

