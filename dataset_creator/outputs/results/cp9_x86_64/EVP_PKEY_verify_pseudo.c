
int EVP_PKEY_verify(EVP_PKEY_CTX *ctx,uchar *sig,size_t siglen,uchar *tbs,size_t tbslen)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    ERR_new();
    uVar2 = 0x2a8;
  }
  else {
    if (*(int *)ctx != 0x20) {
      ERR_new();
      ERR_set_debug("../crypto/evp/signature.c",0x2ad,"EVP_PKEY_verify");
      ERR_set_error(6,0x97,0);
      return -1;
    }
    if (*(long *)(ctx + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041575a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(*(long *)(ctx + 0x28) + 0x50))(*(long *)(ctx + 0x30));
      return iVar1;
    }
    if ((*(long *)(ctx + 0x78) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(ctx + 0x78) + 0x58),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0041577a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_new();
    uVar2 = 0x2ba;
  }
  ERR_set_debug("../crypto/evp/signature.c",uVar2,"EVP_PKEY_verify");
  ERR_set_error(6,0x96,0);
  return -2;
}

