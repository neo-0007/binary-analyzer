
undefined4
pem2der_decode(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  BIO *bp;
  size_t sVar4;
  long lVar5;
  EVP_CIPHER_INFO *pEVar6;
  EVP_CIPHER_INFO *pEVar7;
  undefined8 *puVar8;
  char *__s2;
  char *pcVar9;
  long in_FS_OFFSET;
  EVP_CIPHER *local_178;
  EVP_CIPHER *pEStack_170;
  EVP_CIPHER *local_168;
  EVP_CIPHER *pEStack_160;
  EVP_CIPHER *local_158;
  undefined4 local_13c;
  char *local_138;
  char *local_130;
  uchar *local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  EVP_CIPHER *local_f8;
  EVP_CIPHER *pEStack_f0;
  EVP_CIPHER *local_e8;
  EVP_CIPHER_INFO local_e0 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = 0;
  local_138 = (char *)0x0;
  local_130 = (char *)0x0;
  local_128 = (uchar *)0x0;
  local_120 = 0;
  bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if (bp != (BIO *)0x0) {
    iVar2 = PEM_read_bio(bp,&local_138,&local_130,&local_128,&local_120);
    BIO_free(bp);
    pcVar9 = local_130;
    if (0 < iVar2) {
      sVar4 = strlen(local_130);
      if (sVar4 < 0xb) {
LAB_00453333:
        pcVar9 = local_138;
        puVar8 = (undefined8 *)(pem_name_map_0 + 0x20);
        __s2 = "ENCRYPTED PRIVATE KEY";
        lVar5 = 0;
        while (iVar2 = strcmp(pcVar9,__s2), iVar2 != 0) {
          lVar5 = lVar5 + 1;
          if (lVar5 == 0x10) {
            uVar3 = 1;
            goto LAB_00453378;
          }
          __s2 = (char *)*puVar8;
          puVar8 = puVar8 + 4;
        }
        lVar5 = lVar5 * 0x20;
        lVar1 = *(long *)(pem_name_map_0 + lVar5 + 0x18);
        local_13c = *(undefined4 *)(pem_name_map_0 + lVar5 + 8);
        if (*(long *)(pem_name_map_0 + lVar5 + 0x10) == 0) {
          pEVar6 = (EVP_CIPHER_INFO *)local_108;
        }
        else {
          pEVar6 = local_e0;
          OSSL_PARAM_construct_utf8_string
                    (&local_178,"data-type",*(long *)(pem_name_map_0 + lVar5 + 0x10),0);
          local_e8 = local_158;
          local_108._0_8_ = local_178;
          local_108._8_8_ = pEStack_170;
          local_f8 = local_168;
          pEStack_f0 = pEStack_160;
        }
        pEVar7 = pEVar6;
        if (lVar1 != 0) {
          pEVar7 = (EVP_CIPHER_INFO *)(pEVar6[1].iv + 8);
          OSSL_PARAM_construct_utf8_string(&local_178,"data-structure",lVar1,0);
          pEVar6->cipher = local_178;
          *(EVP_CIPHER **)pEVar6->iv = pEStack_170;
          *(EVP_CIPHER **)(pEVar6->iv + 8) = local_168;
          pEVar6[1].cipher = pEStack_160;
          *(EVP_CIPHER **)pEVar6[1].iv = local_158;
        }
        OSSL_PARAM_construct_octet_string(&local_178,"data",local_128,local_120);
        pEVar7->cipher = local_178;
        *(EVP_CIPHER **)pEVar7->iv = pEStack_170;
        *(EVP_CIPHER **)(pEVar7->iv + 8) = local_168;
        pEVar7[1].cipher = pEStack_160;
        *(EVP_CIPHER **)pEVar7[1].iv = local_158;
        OSSL_PARAM_construct_int(&local_178,"type",&local_13c);
        *(EVP_CIPHER **)(pEVar7[1].iv + 8) = local_178;
        pEVar7[2].cipher = pEStack_170;
        *(EVP_CIPHER **)pEVar7[2].iv = local_168;
        *(EVP_CIPHER **)(pEVar7[2].iv + 8) = pEStack_160;
        pEVar7[3].cipher = local_158;
        OSSL_PARAM_construct_end(&local_178);
        *(EVP_CIPHER **)pEVar7[3].iv = local_178;
        *(EVP_CIPHER **)(pEVar7[3].iv + 8) = pEStack_170;
        pEVar7[4].cipher = local_168;
        *(EVP_CIPHER **)pEVar7[4].iv = pEStack_160;
        *(EVP_CIPHER **)(pEVar7[4].iv + 8) = local_158;
        uVar3 = (*param_4)(local_108,param_5);
        pcVar9 = local_138;
      }
      else {
        local_110 = param_7;
        local_118 = param_6;
        iVar2 = PEM_get_EVP_CIPHER_INFO(pcVar9,(EVP_CIPHER_INFO *)local_108);
        if ((iVar2 != 0) &&
           (iVar2 = PEM_do_header((EVP_CIPHER_INFO *)local_108,local_128,&local_120,
                                  pem2der_pass_helper,&local_118), iVar2 != 0)) goto LAB_00453333;
        uVar3 = 0;
        pcVar9 = local_138;
      }
LAB_00453378:
      CRYPTO_free(pcVar9);
      CRYPTO_free(local_130);
      CRYPTO_free(local_128);
      goto LAB_004533b3;
    }
  }
  uVar3 = 1;
LAB_004533b3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

