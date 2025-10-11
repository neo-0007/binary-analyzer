
bool add_hash_to_v(long param_1,undefined1 param_2,void *param_3,size_t param_4)

{
  long lVar1;
  EVP_MD_CTX *ctx;
  int iVar2;
  EVP_MD *type;
  undefined1 local_3c [12];
  
  lVar1 = *(long *)(param_1 + 0xf8);
  ctx = *(EVP_MD_CTX **)(lVar1 + 0x18);
  local_3c[0] = param_2;
  type = (EVP_MD *)ossl_prov_digest_md(lVar1);
  iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
  if ((iVar2 != 0) && (iVar2 = EVP_DigestUpdate(ctx,local_3c,1), iVar2 != 0)) {
    iVar2 = EVP_DigestUpdate(ctx,(void *)(lVar1 + 0x28),*(size_t *)(param_1 + 0xe8));
    if ((iVar2 != 0) &&
       ((param_3 == (void *)0x0 || (iVar2 = EVP_DigestUpdate(ctx,param_3,param_4), iVar2 != 0)))) {
      iVar2 = EVP_DigestFinal(ctx,(uchar *)(lVar1 + 0x106),(uint *)0x0);
      if (iVar2 != 0) {
        iVar2 = add_bytes(param_1,(void *)(lVar1 + 0x28),(uchar *)(lVar1 + 0x106),
                          *(undefined8 *)(lVar1 + 0x20));
        return iVar2 != 0;
      }
    }
  }
  return false;
}

