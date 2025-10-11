
int enc_write(BIO *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *outl;
  BIO *b;
  int iVar3;
  int local_44;
  
  outl = (int *)BIO_get_data();
  b = BIO_next(param_1);
  if ((outl != (int *)0x0) && (b != (BIO *)0x0)) {
    BIO_clear_flags(param_1,0xf);
    iVar2 = outl[1];
    for (iVar3 = *outl - iVar2; 0 < iVar3; iVar3 = iVar3 - iVar1) {
      iVar1 = BIO_write(b,(void *)((long)outl + (long)iVar2 + 0x30),iVar3);
      if (iVar1 < 1) {
        BIO_copy_next_retry(param_1);
        return iVar1;
      }
      iVar2 = outl[1] + iVar1;
      outl[1] = iVar2;
    }
    if ((param_2 != (uchar *)0x0) && (0 < param_3)) {
      outl[1] = 0;
      local_44 = param_3;
      do {
        iVar2 = 0x1000;
        if (local_44 < 0x1001) {
          iVar2 = local_44;
        }
        iVar3 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(outl + 6),(uchar *)(outl + 0xc),outl,param_2,
                                 iVar2);
        if (iVar3 == 0) {
          BIO_clear_flags(param_1,0xf);
          outl[4] = 0;
          return 0;
        }
        local_44 = local_44 - iVar2;
        iVar3 = *outl;
        iVar1 = 0;
        outl[1] = 0;
        param_2 = param_2 + iVar2;
        for (; 0 < iVar3; iVar3 = iVar3 - iVar2) {
          iVar2 = BIO_write(b,(void *)((long)outl + (long)iVar1 + 0x30),iVar3);
          if (iVar2 < 1) {
            BIO_copy_next_retry(param_1);
            if (param_3 != local_44) {
              iVar2 = param_3 - local_44;
            }
            return iVar2;
          }
          iVar1 = iVar2 + outl[1];
          outl[1] = iVar1;
        }
        outl[0] = 0;
        outl[1] = 0;
      } while (0 < local_44);
      BIO_copy_next_retry(param_1);
      return param_3;
    }
  }
  return 0;
}

