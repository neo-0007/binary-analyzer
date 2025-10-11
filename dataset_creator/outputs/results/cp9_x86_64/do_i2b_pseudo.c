
int do_i2b(long *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  RSA *pRVar6;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  long in_FS_OFFSET;
  undefined8 local_80;
  BIGNUM *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = EVP_PKEY_is_a(param_2,"RSA");
  if (iVar3 == 0) {
    iVar3 = EVP_PKEY_is_a(param_2,"DSA");
    if (iVar3 == 0) goto LAB_00544118;
    uVar10 = EVP_PKEY_get0_DSA(param_2);
    local_68 = (BIGNUM *)0x0;
    local_60 = (BIGNUM *)0x0;
    local_58 = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    local_48 = (BIGNUM *)0x0;
    DSA_get0_pqg(uVar10,&local_68,&local_60,&local_58);
    DSA_get0_key(uVar10,&local_50,&local_48);
    uVar4 = BN_num_bits(local_68);
    if ((((uVar4 & 7) == 0) && (iVar3 = BN_num_bits(local_60), iVar3 == 0xa0)) &&
       (iVar3 = BN_num_bits(local_58), iVar3 <= (int)uVar4)) {
      if (param_3 == 0) {
        uVar8 = 0x32535344;
        iVar3 = BN_num_bits(local_48);
        if (iVar3 < 0xa1) {
LAB_005444fd:
          cVar2 = '\"';
          goto LAB_0054417b;
        }
      }
      else {
        uVar8 = 0x31535344;
        iVar3 = BN_num_bits(local_50);
        if (iVar3 <= (int)uVar4) goto LAB_005444fd;
      }
    }
    ERR_new();
    pcVar7 = "check_bitlen_dsa";
    uVar10 = 0x2c7;
LAB_005440f9:
    ERR_set_debug("../crypto/pem/pvkfmt.c",uVar10,pcVar7);
    ERR_set_error(9,0x7e,0);
  }
  else {
    pRVar6 = (RSA *)EVP_PKEY_get0_RSA(param_2);
    RSA_get0_key(pRVar6,0,&local_78,0);
    iVar3 = BN_num_bits(local_78);
    if (0x20 < iVar3) {
LAB_005440e8:
      ERR_new();
      pcVar7 = "check_bitlen_rsa";
      uVar10 = 0x294;
      goto LAB_005440f9;
    }
    uVar4 = RSA_bits(pRVar6);
    iVar3 = RSA_size(pRVar6);
    if (param_3 == 0) {
      RSA_get0_key(pRVar6,0,0,&local_70);
      iVar5 = BN_num_bits(local_70);
      iVar11 = iVar5 + 7;
      if (iVar5 + 7 < 0) {
        iVar11 = iVar5 + 0xe;
      }
      if (iVar11 >> 3 <= iVar3) {
        RSA_get0_factors(pRVar6,&local_68,&local_60);
        RSA_get0_crt_params(pRVar6,&local_50,&local_48,&local_58);
        iVar5 = (int)(uVar4 + 0xf) >> 4;
        iVar11 = BN_num_bits(local_58);
        iVar3 = iVar11 + 7;
        if (iVar11 + 7 < 0) {
          iVar3 = iVar11 + 0xe;
        }
        if (iVar3 >> 3 <= iVar5) {
          iVar11 = BN_num_bits(local_68);
          iVar3 = iVar11 + 7;
          if (iVar11 + 7 < 0) {
            iVar3 = iVar11 + 0xe;
          }
          if (iVar3 >> 3 <= iVar5) {
            iVar11 = BN_num_bits(local_60);
            iVar3 = iVar11 + 7;
            if (iVar11 + 7 < 0) {
              iVar3 = iVar11 + 0xe;
            }
            if (iVar3 >> 3 <= iVar5) {
              iVar11 = BN_num_bits(local_50);
              iVar3 = iVar11 + 7;
              if (iVar11 + 7 < 0) {
                iVar3 = iVar11 + 0xe;
              }
              if (iVar3 >> 3 <= iVar5) {
                iVar11 = BN_num_bits(local_48);
                iVar3 = iVar11 + 7;
                if (iVar11 + 7 < 0) {
                  iVar3 = iVar11 + 0xe;
                }
                if (iVar3 >> 3 <= iVar5) {
                  uVar8 = 0x32415352;
                  goto LAB_00544176;
                }
              }
            }
          }
        }
      }
      goto LAB_005440e8;
    }
    uVar8 = 0x31415352;
LAB_00544176:
    cVar2 = -0x5c;
LAB_0054417b:
    if (uVar4 != 0) {
      iVar3 = ossl_blob_length(uVar4,cVar2 == '\"',param_3);
      iVar3 = iVar3 + 0x10;
      if (param_1 == (long *)0x0) goto LAB_00544120;
      pcVar7 = (char *)*param_1;
      bVar1 = false;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)CRYPTO_malloc(iVar3,"../crypto/pem/pvkfmt.c",0x243);
        if (pcVar7 == (char *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/pem/pvkfmt.c",0x244,"do_i2b");
          ERR_set_error(9,0xc0100,0);
          goto LAB_00544118;
        }
        *param_1 = (long)pcVar7;
        bVar1 = true;
      }
      *(undefined4 *)(pcVar7 + 8) = uVar8;
      pcVar9 = pcVar7 + 0x10;
      pcVar7[1] = '\x02';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      *pcVar7 = '\a' - (char)param_3;
      pcVar7[5] = cVar2;
      pcVar7[6] = '\0';
      pcVar7[7] = '\0';
      *(uint *)(pcVar7 + 0xc) = uVar4;
      if (cVar2 == -0x5c) {
        pRVar6 = (RSA *)EVP_PKEY_get0_RSA(param_2);
        iVar11 = RSA_size(pRVar6);
        iVar5 = RSA_bits(pRVar6);
        RSA_get0_key(pRVar6,&local_80,&local_70,&local_78);
        BN_bn2lebinpad(local_70,pcVar9,4);
        pcVar7 = pcVar7 + 0x14;
        BN_bn2lebinpad(local_80,pcVar7,iVar11);
        if (param_3 == 0) {
          pcVar7 = pcVar7 + iVar11;
          RSA_get0_factors(pRVar6,&local_68,&local_60);
          iVar5 = iVar5 + 0xf >> 4;
          RSA_get0_crt_params(pRVar6,&local_50,&local_48,&local_58);
          pcVar9 = pcVar7 + iVar5;
          BN_bn2lebinpad(local_68,pcVar7,iVar5);
          pcVar7 = pcVar9 + iVar5;
          BN_bn2lebinpad(local_60,pcVar9,iVar5);
          pcVar9 = pcVar7 + iVar5;
          BN_bn2lebinpad(local_50,pcVar7,iVar5);
          BN_bn2lebinpad(local_48,pcVar9,iVar5);
          BN_bn2lebinpad(local_58,pcVar9 + iVar5,iVar5);
          BN_bn2lebinpad(local_78,pcVar9 + iVar5 + iVar5,iVar11);
        }
      }
      else {
        uVar10 = EVP_PKEY_get0_DSA(param_2);
        local_68 = (BIGNUM *)0x0;
        local_60 = (BIGNUM *)0x0;
        local_58 = (BIGNUM *)0x0;
        local_50 = (BIGNUM *)0x0;
        local_48 = (BIGNUM *)0x0;
        DSA_get0_pqg(uVar10,&local_68,&local_60,&local_58);
        DSA_get0_key(uVar10,&local_50,&local_48);
        iVar5 = BN_num_bits(local_68);
        iVar11 = iVar5 + 0xe;
        if (-1 < iVar5 + 7) {
          iVar11 = iVar5 + 7;
        }
        iVar11 = iVar11 >> 3;
        BN_bn2lebinpad(local_68,pcVar9,iVar11);
        pcVar9 = pcVar9 + iVar11;
        BN_bn2lebinpad(local_60,pcVar9,0x14);
        BN_bn2lebinpad(local_58,pcVar9 + 0x14,iVar11);
        pcVar7 = pcVar9 + 0x14 + iVar11;
        if (param_3 == 0) {
          pcVar9 = pcVar7 + 0x14;
          BN_bn2lebinpad(local_48,pcVar7,0x14);
        }
        else {
          BN_bn2lebinpad(local_50,pcVar7,iVar11);
          pcVar9 = pcVar7 + iVar11;
        }
        pcVar9[0x10] = -1;
        pcVar9[0x11] = -1;
        pcVar9[0x12] = -1;
        pcVar9[0x13] = -1;
        pcVar9[0x14] = -1;
        pcVar9[0x15] = -1;
        pcVar9[0x16] = -1;
        pcVar9[0x17] = -1;
        pcVar9[0] = -1;
        pcVar9[1] = -1;
        pcVar9[2] = -1;
        pcVar9[3] = -1;
        pcVar9[4] = -1;
        pcVar9[5] = -1;
        pcVar9[6] = -1;
        pcVar9[7] = -1;
        pcVar9[8] = -1;
        pcVar9[9] = -1;
        pcVar9[10] = -1;
        pcVar9[0xb] = -1;
        pcVar9[0xc] = -1;
        pcVar9[0xd] = -1;
        pcVar9[0xe] = -1;
        pcVar9[0xf] = -1;
      }
      if (!bVar1) {
        *param_1 = *param_1 + (long)iVar3;
      }
      goto LAB_00544120;
    }
  }
LAB_00544118:
  iVar3 = -1;
LAB_00544120:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

