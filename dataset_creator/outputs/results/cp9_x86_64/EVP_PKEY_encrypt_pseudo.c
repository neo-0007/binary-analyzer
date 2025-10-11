
int EVP_PKEY_encrypt(EVP_PKEY_CTX *ctx,uchar *out,size_t *outlen,uchar *in,size_t inlen)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    ERR_new();
    uVar4 = 0xea;
  }
  else {
    if (*(int *)ctx != 0x200) {
      ERR_new();
      ERR_set_debug("../crypto/evp/asymcipher.c",0xef,"EVP_PKEY_encrypt");
      ERR_set_error(6,0x97,0);
      return -1;
    }
    if (*(long *)(ctx + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00511f1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(*(long *)(ctx + 0x28) + 0x40))();
      return iVar2;
    }
    lVar1 = *(long *)(ctx + 0x78);
    if ((lVar1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x98), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(byte *)(lVar1 + 4) & 2) != 0) {
        iVar2 = EVP_PKEY_get_size(*(undefined8 *)(ctx + 0x88));
        uVar3 = (ulong)iVar2;
        if (uVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/asymcipher.c",0xff,"EVP_PKEY_encrypt");
          ERR_set_error(6,0xa3,0);
          return 0;
        }
        if (out == (uchar *)0x0) {
          *outlen = uVar3;
          return 1;
        }
        if (*outlen < uVar3) {
          ERR_new();
          ERR_set_debug("../crypto/evp/asymcipher.c",0xff,"EVP_PKEY_encrypt");
          ERR_set_error(6,0x9b,0);
          return 0;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(ctx + 0x78) + 0x98);
      }
                    /* WARNING: Could not recover jumptable at 0x00511f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)(ctx);
      return iVar2;
    }
    ERR_new();
    uVar4 = 0xfc;
  }
  ERR_set_debug("../crypto/evp/asymcipher.c",uVar4,"EVP_PKEY_encrypt");
  ERR_set_error(6,0x96,0);
  return -2;
}

