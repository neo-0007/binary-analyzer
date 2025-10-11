
int EVP_PKEY_derive(EVP_PKEY_CTX *ctx,uchar *key,size_t *keylen)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((ctx == (EVP_PKEY_CTX *)0x0) || (keylen == (size_t *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/exchange.c",0x1fe,"EVP_PKEY_derive");
    ERR_set_error(6,0xc0102,0);
    iVar2 = -1;
  }
  else if (*(int *)ctx == 0x800) {
    if (*(long *)(ctx + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00527faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(*(long *)(ctx + 0x28) + 0x48))();
      return iVar2;
    }
    lVar1 = *(long *)(ctx + 0x78);
    if ((lVar1 == 0) ||
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xb8), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
      ERR_new();
      ERR_set_debug("../crypto/evp/exchange.c",0x210,"EVP_PKEY_derive");
      ERR_set_error(6,0x96,0);
      iVar2 = -2;
    }
    else {
      if ((*(byte *)(lVar1 + 4) & 2) == 0) {
LAB_00527fd3:
                    /* WARNING: Could not recover jumptable at 0x00527fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*UNRECOVERED_JUMPTABLE)(ctx,key,keylen,UNRECOVERED_JUMPTABLE);
        return iVar2;
      }
      iVar2 = EVP_PKEY_get_size(*(undefined8 *)(ctx + 0x88));
      uVar3 = (ulong)iVar2;
      if (uVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/exchange.c",0x214,"EVP_PKEY_derive");
        ERR_set_error(6,0xa3,0);
        iVar2 = 0;
      }
      else if (key == (uchar *)0x0) {
        *keylen = uVar3;
        iVar2 = 1;
      }
      else {
        if (uVar3 <= *keylen) {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(ctx + 0x78) + 0xb8);
          goto LAB_00527fd3;
        }
        ERR_new();
        ERR_set_debug("../crypto/evp/exchange.c",0x214,"EVP_PKEY_derive");
        ERR_set_error(6,0x9b,0);
        iVar2 = 0;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/evp/exchange.c",0x203,"EVP_PKEY_derive");
    ERR_set_error(6,0x97,0);
    iVar2 = -1;
  }
  return iVar2;
}

