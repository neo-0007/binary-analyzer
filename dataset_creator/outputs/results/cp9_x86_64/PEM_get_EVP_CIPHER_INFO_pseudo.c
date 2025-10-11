
int PEM_get_EVP_CIPHER_INFO(char *header,EVP_CIPHER_INFO *cipher)

{
  uchar *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  EVP_CIPHER *pEVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  
  cipher->cipher = (EVP_CIPHER *)0x0;
  cipher->iv[0] = '\0';
  cipher->iv[1] = '\0';
  cipher->iv[2] = '\0';
  cipher->iv[3] = '\0';
  cipher->iv[4] = '\0';
  cipher->iv[5] = '\0';
  cipher->iv[6] = '\0';
  cipher->iv[7] = '\0';
  cipher->iv[8] = '\0';
  cipher->iv[9] = '\0';
  cipher->iv[10] = '\0';
  cipher->iv[0xb] = '\0';
  cipher->iv[0xc] = '\0';
  cipher->iv[0xd] = '\0';
  cipher->iv[0xe] = '\0';
  cipher->iv[0xf] = '\0';
  if (((header == (char *)0x0) || (*header == '\n')) || (*header == '\0')) {
LAB_00540210:
    iVar3 = 1;
  }
  else {
    iVar3 = strncmp(header,"Proc-Type:",10);
    if (iVar3 != 0) {
      ERR_new();
      ERR_set_debug("../crypto/pem/pem_lib.c",0x1f6,"PEM_get_EVP_CIPHER_INFO");
      ERR_set_error(9,0x6b,0);
      return 0;
    }
    sVar5 = strspn(header + 10," \t");
    pcVar7 = header + 10 + sVar5;
    iVar3 = 0;
    if (*pcVar7 != '4') {
      return 0;
    }
    if (pcVar7[1] != ',') {
      return 0;
    }
    pcVar7 = pcVar7 + 2;
    sVar5 = strspn(pcVar7," \t");
    iVar4 = strncmp(pcVar7 + sVar5,"ENCRYPTED",9);
    if (iVar4 == 0) {
      pcVar7 = pcVar7 + sVar5 + 9;
      sVar5 = strspn(pcVar7," \t\r\n");
      if (sVar5 != 0) {
        sVar5 = strspn(pcVar7," \t\r");
        pcVar7 = pcVar7 + sVar5;
        if (*pcVar7 != '\n') {
          ERR_new();
          ERR_set_debug("../crypto/pem/pem_lib.c",0x209,"PEM_get_EVP_CIPHER_INFO");
          ERR_set_error(9,0x70,0);
          return 0;
        }
        iVar3 = strncmp(pcVar7 + 1,"DEK-Info:",9);
        if (iVar3 != 0) {
          ERR_new();
          ERR_set_debug("../crypto/pem/pem_lib.c",0x212,"PEM_get_EVP_CIPHER_INFO");
          ERR_set_error(9,0x69,0);
          return 0;
        }
        sVar5 = strspn(pcVar7 + 10," \t");
        pcVar7 = pcVar7 + 10 + sVar5;
        sVar5 = strcspn(pcVar7," \t,");
        pcVar8 = pcVar7 + sVar5;
        cVar2 = *pcVar8;
        *pcVar8 = '\0';
        pEVar6 = EVP_get_cipherbyname(pcVar7);
        cipher->cipher = pEVar6;
        *pcVar8 = cVar2;
        sVar5 = strspn(pcVar8," \t");
        pcVar8 = pcVar8 + sVar5;
        if (pEVar6 == (EVP_CIPHER *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/pem/pem_lib.c",0x225,"PEM_get_EVP_CIPHER_INFO");
          ERR_set_error(9,0x72,0);
          return 0;
        }
        iVar3 = EVP_CIPHER_get_iv_length(pEVar6);
        if (iVar3 < 1) {
          if ((iVar3 == 0) && (*pcVar8 == ',')) {
            ERR_new();
            ERR_set_debug("../crypto/pem/pem_lib.c",0x22d,"PEM_get_EVP_CIPHER_INFO");
            ERR_set_error(9,0x82,0);
            return 0;
          }
        }
        else {
          if (*pcVar8 != ',') {
            ERR_new();
            ERR_set_debug("../crypto/pem/pem_lib.c",0x22a,"PEM_get_EVP_CIPHER_INFO");
            ERR_set_error(9,0x81,0);
            return 0;
          }
          pcVar8 = pcVar8 + 1;
        }
        iVar3 = EVP_CIPHER_get_iv_length(pEVar6);
        if (0 < iVar3) {
          memset(cipher->iv,0,(long)iVar3);
          lVar10 = 0;
          do {
            iVar4 = OPENSSL_hexchar2int(pcVar8[lVar10]);
            if (iVar4 < 0) {
              ERR_new();
              ERR_set_debug("../crypto/pem/pem_lib.c",0x243,"load_iv");
              ERR_set_error(9,0x67,0);
              return 0;
            }
            uVar9 = (uint)lVar10;
            lVar10 = lVar10 + 1;
            puVar1 = cipher->iv + ((int)uVar9 >> 1);
            *puVar1 = *puVar1 | (byte)(iVar4 << ((byte)(~uVar9 << 2) & 4));
          } while ((int)lVar10 < iVar3 * 2);
        }
        goto LAB_00540210;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/pem/pem_lib.c",0x203,"PEM_get_EVP_CIPHER_INFO");
    ERR_set_error(9,0x6a,0);
  }
  return iVar3;
}

