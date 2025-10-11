
void BIO_set_cipher(BIO *b,EVP_CIPHER *c,uchar *k,uchar *i,int enc)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  uchar *puVar5;
  int iVar6;
  undefined4 in_register_00000084;
  long in_R9;
  undefined1 auVar8 [16];
  EVP_CIPHER *pEVar7;
  
  lVar3 = CONCAT44(in_register_00000084,enc);
  puVar5 = i;
  pEVar7 = c;
  lVar2 = BIO_get_data();
  iVar6 = (int)pEVar7;
  iVar1 = (int)puVar5;
  if (lVar2 != 0) {
    auVar8 = BIO_get_callback_ex(b);
    pcVar4 = auVar8._0_8_;
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)BIO_get_callback(b,iVar6,auVar8._8_8_,iVar1,lVar3,in_R9);
      if (pcVar4 == (code *)0x0) {
        BIO_set_init(b,1);
        EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(lVar2 + 0x18),c,(ENGINE *)0x0,k,i,enc);
      }
      else {
        lVar3 = (*pcVar4)(b,6,c,4,(long)enc,0);
        if (0 < lVar3) {
          BIO_set_init(b,1);
          iVar1 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(lVar2 + 0x18),c,(ENGINE *)0x0,k,i,enc);
          if (iVar1 != 0) {
            (*pcVar4)(b,6,c,4,(long)enc,1);
          }
        }
      }
    }
    else {
      lVar3 = (*pcVar4)(b,6,c,0,4,(long)enc,1,0);
      if (0 < lVar3) {
        BIO_set_init(b,1);
        iVar1 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(lVar2 + 0x18),c,(ENGINE *)0x0,k,i,enc);
        if (iVar1 != 0) {
          (*pcVar4)(b,0x86,c,0,4,(long)enc,1,0);
          return;
        }
      }
    }
  }
  return;
}

