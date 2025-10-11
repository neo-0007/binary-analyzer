
ulong prefix_ctrl(BIO *param_1,int param_2,long param_3,char *param_4)

{
  undefined8 *puVar1;
  BIO *pBVar2;
  ulong uVar3;
  char *pcVar4;
  
  if (param_1 == (BIO *)0x0) {
    return 0xffffffffffffffff;
  }
  puVar1 = (undefined8 *)BIO_get_data();
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (param_2 == 0x50) {
      if (-1 < param_3) {
        *(int *)(puVar1 + 1) = (int)param_3;
        return 1;
      }
    }
    else {
      if (param_2 == 0x51) {
        return (ulong)*(uint *)(puVar1 + 1);
      }
      if (param_2 == 0x4f) {
        CRYPTO_free((void *)*puVar1);
        if (param_4 != (char *)0x0) {
          pcVar4 = CRYPTO_strdup(param_4,"../crypto/bio/bf_prefix.c",0xa6);
          *puVar1 = pcVar4;
          return (ulong)(pcVar4 != (char *)0x0);
        }
        *puVar1 = 0;
        return 1;
      }
      if ((param_2 == 1) || (param_2 == 0x80)) {
        *(undefined4 *)((long)puVar1 + 0xc) = 1;
        pBVar2 = BIO_next(param_1);
      }
      else {
        pBVar2 = BIO_next(param_1);
      }
      if (pBVar2 != (BIO *)0x0) {
        pBVar2 = BIO_next(param_1);
        uVar3 = BIO_ctrl(pBVar2,param_2,param_3,param_4);
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

