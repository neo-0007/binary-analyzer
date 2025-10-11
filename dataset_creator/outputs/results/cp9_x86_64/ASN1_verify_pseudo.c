
int ASN1_verify(undefined1 *i2d,X509_ALGOR *algor1,ASN1_BIT_STRING *signature,char *data,
               EVP_PKEY *pkey)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  char *name;
  EVP_MD *type;
  void *d;
  undefined8 uVar2;
  size_t cnt;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    uVar2 = 0x24;
LAB_005a5b90:
    ERR_set_debug("../crypto/asn1/a_verify.c",uVar2,"ASN1_verify");
    iVar1 = -1;
    ERR_set_error(0xd,0xc0100,0);
    goto LAB_005a5abf;
  }
  iVar1 = OBJ_obj2nid(algor1->algorithm);
  name = OBJ_nid2sn(iVar1);
  type = EVP_get_digestbyname(name);
  if (type == (EVP_MD *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_verify.c",0x2a,"ASN1_verify");
    iVar1 = -1;
    ERR_set_error(0xd,0xa1,0);
    goto LAB_005a5abf;
  }
  if ((signature->type == 3) && ((signature->flags & 7) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_verify.c",0x2f,"ASN1_verify");
    iVar1 = -1;
    ERR_set_error(0xd,0xdc,0);
    goto LAB_005a5abf;
  }
  iVar1 = (*(code *)i2d)(data,0);
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_verify.c",0x35,"ASN1_verify");
    iVar1 = -1;
    ERR_set_error(0xd,0xc0103,0);
    goto LAB_005a5abf;
  }
  cnt = (size_t)iVar1;
  d = CRYPTO_malloc(iVar1,"../crypto/asn1/a_verify.c",0x38);
  if (d == (void *)0x0) {
    ERR_new();
    uVar2 = 0x3a;
    goto LAB_005a5b90;
  }
  local_48 = d;
  (*(code *)i2d)(data,&local_48);
  iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
  if (iVar1 == 0) {
    CRYPTO_clear_free(d,cnt,"../crypto/asn1/a_verify.c",0x43);
LAB_005a5a90:
    ERR_new();
    uVar2 = 0x46;
  }
  else {
    iVar1 = EVP_DigestUpdate(ctx,d,cnt);
    if (iVar1 == 0) {
      CRYPTO_clear_free(d,cnt,"../crypto/asn1/a_verify.c",0x43);
      goto LAB_005a5a90;
    }
    CRYPTO_clear_free(d,cnt,"../crypto/asn1/a_verify.c",0x43);
    iVar1 = EVP_VerifyFinal(ctx,signature->data,signature->length,pkey);
    if (0 < iVar1) {
      iVar1 = 1;
      goto LAB_005a5abf;
    }
    ERR_new();
    uVar2 = 0x4d;
  }
  iVar1 = 0;
  ERR_set_debug("../crypto/asn1/a_verify.c",uVar2,"ASN1_verify");
  ERR_set_error(0xd,0x80006,0);
LAB_005a5abf:
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

