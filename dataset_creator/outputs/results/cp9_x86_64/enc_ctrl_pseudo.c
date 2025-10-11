
long enc_ctrl(BIO *param_1,int param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  int *outl;
  BIO *bp;
  long lVar2;
  EVP_CIPHER_CTX *out;
  
  outl = (int *)BIO_get_data();
  bp = BIO_next(param_1);
  if (outl == (int *)0x0) {
    return 0;
  }
  if (param_2 < 0xe) {
    switch(param_2) {
    case 1:
      outl[3] = 0;
      outl[4] = 1;
      iVar1 = EVP_CIPHER_CTX_is_encrypting(*(undefined8 *)(outl + 6));
      iVar1 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(outl + 6),(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                (uchar *)0x0,(uchar *)0x0,iVar1);
      if (iVar1 == 0) {
        return 0;
      }
      param_2 = 1;
      break;
    case 2:
      if (outl[2] < 1) {
        return 1;
      }
      param_2 = 2;
      break;
    default:
      goto switchD_005f291f_caseD_3;
    case 10:
      if (0 < (long)(*outl - outl[1])) {
        return (long)(*outl - outl[1]);
      }
      param_2 = 10;
      break;
    case 0xb:
      do {
        if (*outl == outl[1]) {
          do {
            if (outl[3] != 0) {
              param_2 = 0xb;
              goto LAB_005f29f0;
            }
            outl[3] = 1;
            outl[1] = 0;
            iVar1 = EVP_CipherFinal_ex(*(EVP_CIPHER_CTX **)(outl + 6),(uchar *)(outl + 0xc),outl);
            outl[4] = iVar1;
            if ((long)iVar1 < 1) {
              return (long)iVar1;
            }
          } while (*outl == outl[1]);
        }
        iVar1 = enc_write(param_1,0,0);
        if (iVar1 < 0) {
          return (long)iVar1;
        }
      } while( true );
    case 0xc:
      lVar2 = BIO_get_data(param_4);
      out = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(lVar2 + 0x18) = out;
      if (out != (EVP_CIPHER_CTX *)0x0) {
        iVar1 = EVP_CIPHER_CTX_copy(out,*(EVP_CIPHER_CTX **)(outl + 6));
        if ((long)iVar1 != 0) {
          BIO_set_init(param_4,1);
        }
        return (long)iVar1;
      }
      return 0;
    case 0xd:
      if (0 < (long)(*outl - outl[1])) {
        return (long)(*outl - outl[1]);
      }
      param_2 = 0xd;
    }
  }
  else {
    if (param_2 == 0x71) {
      return (long)outl[4];
    }
    if (param_2 == 0x81) {
      *param_4 = *(undefined8 *)(outl + 6);
      BIO_set_init(param_1,1);
      return 1;
    }
    if (param_2 == 0x65) {
      BIO_clear_flags(param_1,0xf);
      lVar2 = BIO_ctrl(bp,0x65,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return lVar2;
    }
switchD_005f291f_caseD_3:
  }
LAB_005f29f0:
  lVar2 = BIO_ctrl(bp,param_2,param_3,param_4);
  return lVar2;
}

