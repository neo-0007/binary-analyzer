
ulong OSSL_PARAM_allocate_from_text
                (undefined8 *param_1,long param_2,byte *param_3,char *param_4,ulong param_5,
                uint *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  byte *__dest;
  byte *pbVar7;
  ulong uVar8;
  int iVar9;
  long in_FS_OFFSET;
  char *pcVar10;
  BIGNUM *pBVar11;
  BIGNUM *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    uVar8 = 0;
    goto LAB_0053b3c2;
  }
  iVar9 = *param_3 - 0x68;
  if ((iVar9 == 0) && (iVar9 = param_3[1] - 0x65, iVar9 == 0)) {
    iVar9 = param_3[2] - 0x78;
    if (iVar9 == 0) {
      param_3 = param_3 + 3;
    }
  }
  puVar5 = (undefined8 *)OSSL_PARAM_locate_const(param_2,param_3);
  if (param_6 != (uint *)0x0) {
    *param_6 = (uint)(puVar5 != (undefined8 *)0x0);
  }
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = *(uint *)(puVar5 + 1);
    if (uVar4 == 4) {
      if (iVar9 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/params_from_text.c",0x72,"prepare_from_text");
        ERR_set_error(0xf,0x80106,0);
        goto LAB_0053b3b0;
      }
      sVar6 = strlen(param_4);
      param_5 = sVar6 + 1;
LAB_0053b4f5:
      pcVar10 = "../crypto/params_from_text.c";
      __dest = (byte *)CRYPTO_zalloc(param_5,"../crypto/params_from_text.c",0xd8);
      if (__dest != (byte *)0x0) {
LAB_0053b525:
        uVar4 = *(uint *)(puVar5 + 1);
        if (uVar4 == 4) {
          strncpy((char *)__dest,param_4,param_5);
          param_5 = param_5 - 1;
        }
        else if (uVar4 < 5) {
          if (((uVar4 - 1 < 2) &&
              (pBVar11 = local_50, BN_bn2nativepad(local_50,__dest,param_5 & 0xffffffff),
              *(int *)(puVar5 + 1) == 1)) && (iVar9 = BN_is_negative(pBVar11), iVar9 != 0)) {
            pbVar7 = __dest;
            do {
              *pbVar7 = ~*pbVar7;
              pbVar7 = pbVar7 + 1;
            } while (pbVar7 != __dest + param_5);
          }
        }
        else if (uVar4 == 5) {
          if (iVar9 == 0) {
            local_48 = 0;
            iVar9 = OPENSSL_hexstr2buf_ex(__dest,param_5,&local_48,param_4,0x3a,pcVar10,pcVar10);
            if (iVar9 == 0) {
              uVar8 = 0;
              BN_free(local_50);
              CRYPTO_free(__dest);
              uVar8 = uVar8 & 0xffffffff;
              goto LAB_0053b3c2;
            }
          }
          else {
            memcpy(__dest,param_4,param_5);
          }
        }
        goto LAB_0053b4b4;
      }
    }
    else {
      if (uVar4 < 5) {
        if (uVar4 - 1 < 2) {
          if (iVar9 == 0) {
            iVar3 = BN_hex2bn(&local_50,param_4);
          }
          else {
            iVar3 = BN_asc2bn(&local_50,param_4);
          }
          if ((iVar3 != 0) && (local_50 != (BIGNUM *)0x0)) {
            iVar3 = *(int *)(puVar5 + 1);
            if (iVar3 == 2) {
              iVar3 = BN_is_negative();
              if (iVar3 != 0) {
                ERR_new();
                ERR_set_debug("../crypto/params_from_text.c",0x3e,"prepare_from_text");
                ERR_set_error(0xf,0x7a,0);
                goto LAB_0053b3b0;
              }
              iVar3 = *(int *)(puVar5 + 1);
            }
            if (((iVar3 != 1) || (iVar3 = BN_is_negative(), iVar3 == 0)) ||
               (iVar3 = BN_add_word(local_50,1), iVar3 != 0)) {
              uVar4 = BN_num_bits(local_50);
              uVar8 = (ulong)(int)uVar4;
              if ((*(int *)(puVar5 + 1) == 1) && ((uVar4 & 7) == 0)) {
                uVar8 = uVar8 + 8;
              }
              param_5 = puVar5[3];
              if (param_5 == 0) {
                param_5 = uVar8 + 7 >> 3;
                goto LAB_0053b404;
              }
              if (uVar8 <= param_5 * 8) goto LAB_0053b4f5;
              ERR_new();
              ERR_set_debug("../crypto/params_from_text.c",0x68,"prepare_from_text");
              ERR_set_error(0xf,0x74,0);
            }
          }
          goto LAB_0053b3b0;
        }
      }
      else if (uVar4 == 5) {
        if (iVar9 == 0) {
          sVar6 = strlen(param_4);
          param_5 = sVar6 >> 1;
        }
LAB_0053b404:
        uVar8 = 1;
        if (param_5 != 0) {
          uVar8 = param_5;
        }
        pcVar10 = "../crypto/params_from_text.c";
        __dest = (byte *)CRYPTO_zalloc(uVar8,"../crypto/params_from_text.c",0xd8);
        if (__dest != (byte *)0x0) {
          if (param_5 != 0) goto LAB_0053b525;
          goto LAB_0053b4b4;
        }
        goto LAB_0053b648;
      }
      pcVar10 = "../crypto/params_from_text.c";
      __dest = (byte *)CRYPTO_zalloc(1,"../crypto/params_from_text.c",0xd8);
      if (__dest != (byte *)0x0) {
        param_5 = 0;
LAB_0053b4b4:
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        param_1[2] = __dest;
        param_1[3] = param_5;
        param_1[4] = 0xffffffffffffffff;
        *param_1 = uVar1;
        param_1[1] = uVar2;
        BN_free(local_50);
        uVar8 = 1;
        goto LAB_0053b3c2;
      }
    }
LAB_0053b648:
    ERR_new();
    ERR_set_debug(pcVar10,0xd9,"OSSL_PARAM_allocate_from_text");
    ERR_set_error(0xf,0xc0100,0);
  }
LAB_0053b3b0:
  BN_free(local_50);
  uVar8 = 0;
LAB_0053b3c2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar8;
}

