
int PKCS7_set_cipher(PKCS7 *p7,EVP_CIPHER *cipher)

{
  int iVar1;
  char *pcVar2;
  pkcs7_st *ppVar3;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x17) {
    ppVar3 = ((p7->d).digest)->contents;
    iVar1 = EVP_CIPHER_get_type(cipher);
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_0054b910;
    }
  }
  else {
    if (iVar1 != 0x18) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x2b7,"PKCS7_set_cipher");
      ERR_set_error(0x21,0x71,0);
      return 0;
    }
    ppVar3 = ((p7->d).sign)->contents;
    iVar1 = EVP_CIPHER_get_type(cipher);
    if (iVar1 == 0) {
LAB_0054b910:
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x2be,"PKCS7_set_cipher");
      ERR_set_error(0x21,0x90,0);
      return iVar1;
    }
  }
  ppVar3->type = (ASN1_OBJECT *)cipher;
  pcVar2 = (char *)ossl_pkcs7_get0_ctx(p7);
  (ppVar3->d).ptr = pcVar2;
  return 1;
}

