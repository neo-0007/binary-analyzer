
int EVP_PBE_alg_add_type(int pbe_type,int pbe_nid,int cipher_nid,int md_nid,undefined1 *keygen)

{
  long lVar1;
  int iVar2;
  int *ptr;
  
  if (((pbe_algs != 0) || (pbe_algs = OPENSSL_sk_new(pbe_cmp), pbe_algs != 0)) &&
     (ptr = (int *)CRYPTO_malloc(0x20,"../crypto/evp/evp_pbe.c",0xcb), ptr != (int *)0x0)) {
    *ptr = pbe_type;
    lVar1 = pbe_algs;
    ptr[1] = pbe_nid;
    ptr[2] = cipher_nid;
    ptr[3] = md_nid;
    *(undefined1 **)(ptr + 4) = keygen;
    iVar2 = OPENSSL_sk_push(lVar1,ptr);
    if (iVar2 != 0) {
      return 1;
    }
    CRYPTO_free(ptr);
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/evp_pbe.c",0xdb,"EVP_PBE_alg_add_type");
  ERR_set_error(6,0xc0100,0);
  return 0;
}

