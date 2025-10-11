
int RSA_sign_ASN1_OCTET_STRING(int type,uchar *m,uint m_length,uchar *sigret,uint *siglen,RSA *rsa)

{
  int flen;
  int iVar1;
  uint uVar2;
  uchar *from;
  long in_FS_OFFSET;
  uchar *local_60;
  ASN1_OCTET_STRING local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58.type = 4;
  local_58.length = m_length;
  local_58.data = m;
  flen = i2d_ASN1_OCTET_STRING(&local_58,(uchar **)0x0);
  iVar1 = RSA_size(rsa);
  if (flen < iVar1 + -10) {
    from = (uchar *)CRYPTO_malloc(iVar1 + 1,"../crypto/rsa/rsa_saos.c",0x2a);
    if (from == (uchar *)0x0) {
      ERR_new();
      uVar2 = 0;
      ERR_set_debug("../crypto/rsa/rsa_saos.c",0x2c,"RSA_sign_ASN1_OCTET_STRING");
      ERR_set_error(4,0xc0100,0);
    }
    else {
      local_60 = from;
      i2d_ASN1_OCTET_STRING(&local_58,&local_60);
      uVar2 = RSA_private_encrypt(flen,from,sigret,rsa,1);
      if (0 < (int)uVar2) {
        *siglen = uVar2;
      }
      uVar2 = (uint)(0 < (int)uVar2);
      CRYPTO_clear_free(from,iVar1 + 1,"../crypto/rsa/rsa_saos.c",0x37);
    }
  }
  else {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/rsa/rsa_saos.c",0x27,"RSA_sign_ASN1_OCTET_STRING");
    ERR_set_error(4,0x70,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

