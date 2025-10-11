
undefined8 aria_gcm_ctrl(undefined8 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  
  uVar15 = (ulong)param_3;
  lVar8 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar8 + 0x118) = 0;
    uVar4 = EVP_CIPHER_get_iv_length(*param_1);
    *(undefined8 **)(lVar8 + 0x2d8) = param_1 + 5;
    *(undefined4 *)(lVar8 + 0x2e0) = uVar4;
    *(undefined8 *)(lVar8 + 0x2e8) = 0xffffffff00000000;
    uVar9 = 1;
    *(undefined4 *)(lVar8 + 0x2e4) = 0xffffffff;
    break;
  default:
    uVar9 = 0xffffffff;
    break;
  case 8:
    lVar13 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(long *)(lVar8 + 0x2a0) != 0) {
      if (*(long *)(lVar8 + 0x2a0) != lVar8) {
        return 0;
      }
      *(long *)(lVar13 + 0x2a0) = lVar13;
    }
    if (*(undefined8 **)(lVar8 + 0x2d8) == param_1 + 5) {
      *(undefined8 **)(lVar13 + 0x2d8) = param_4 + 5;
      return 1;
    }
    pvVar10 = CRYPTO_malloc(*(int *)(lVar8 + 0x2e0),"../crypto/evp/e_aria.c",0x183);
    *(void **)(lVar13 + 0x2d8) = pvVar10;
    if (pvVar10 == (void *)0x0) {
      ERR_new();
      uVar9 = 0x184;
LAB_0051ea27:
      ERR_set_debug("../crypto/evp/e_aria.c",uVar9,"aria_gcm_ctrl");
      ERR_set_error(6,0xc0100,0);
      return 0;
    }
    memcpy(pvVar10,*(void **)(lVar8 + 0x2d8),(long)*(int *)(lVar8 + 0x2e0));
    goto LAB_0051ead0;
  case 9:
    if ((int)param_3 < 1) {
      return 0;
    }
    if ((0x10 < (int)param_3) && (*(int *)(lVar8 + 0x2e0) < (int)param_3)) {
      if (*(undefined8 **)(lVar8 + 0x2d8) != param_1 + 5) {
        CRYPTO_free(*(undefined8 **)(lVar8 + 0x2d8));
      }
      pvVar10 = CRYPTO_malloc(param_3,"../crypto/evp/e_aria.c",0x11a);
      *(void **)(lVar8 + 0x2d8) = pvVar10;
      if (pvVar10 == (void *)0x0) {
        ERR_new();
        uVar9 = 0x11b;
        goto LAB_0051ea27;
      }
    }
    *(uint *)(lVar8 + 0x2e0) = param_3;
    uVar9 = 1;
    break;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar6 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x2e4) < 0) {
      return 0;
    }
    puVar12 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)param_4 = *(undefined1 *)puVar12, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)param_4 + (uVar15 - 2)) =
               *(undefined2 *)((long)puVar12 + (uVar15 - 2));
        }
      }
      else {
        *(undefined4 *)param_4 = *(undefined4 *)puVar12;
        *(undefined4 *)((long)param_4 + (uVar15 - 4)) =
             *(undefined4 *)((long)puVar12 + (uVar15 - 4));
      }
    }
    else {
      *param_4 = *puVar12;
      *(undefined8 *)((long)param_4 + (uVar15 - 8)) = *(undefined8 *)((long)puVar12 + (uVar15 - 8));
      lVar8 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar7 = param_3 + (int)lVar8 & 0xfffffff8;
      if (7 < uVar7) {
        uVar14 = 0;
        do {
          uVar15 = (ulong)uVar14;
          uVar14 = uVar14 + 8;
          *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar15) =
               *(undefined8 *)((long)puVar12 + (uVar15 - lVar8));
        } while (uVar14 < uVar7);
      }
    }
    goto LAB_0051ead0;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar6 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar6 != 0) {
      return 0;
    }
    puVar12 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)puVar12 = *(undefined1 *)param_4, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)puVar12 + (uVar15 - 2)) =
               *(undefined2 *)((long)param_4 + (uVar15 - 2));
        }
      }
      else {
        *(undefined4 *)puVar12 = *(undefined4 *)param_4;
        *(undefined4 *)((long)puVar12 + (uVar15 - 4)) =
             *(undefined4 *)((long)param_4 + (uVar15 - 4));
      }
    }
    else {
      *puVar12 = *param_4;
      *(undefined8 *)((long)puVar12 + (uVar15 - 8)) = *(undefined8 *)((long)param_4 + (uVar15 - 8));
      lVar13 = (long)puVar12 - ((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
      uVar7 = (int)lVar13 + param_3 & 0xfffffff8;
      if (7 < uVar7) {
        uVar15 = 0;
        do {
          uVar14 = (int)uVar15 + 8;
          *(undefined8 *)(((ulong)(puVar12 + 1) & 0xfffffffffffffff8) + uVar15) =
               *(undefined8 *)((long)param_4 + (uVar15 - lVar13));
          uVar15 = (ulong)uVar14;
        } while (uVar14 < uVar7);
      }
    }
    *(uint *)(lVar8 + 0x2e4) = param_3;
    uVar9 = 1;
    break;
  case 0x12:
    if (param_3 != 0xffffffff) {
      if ((int)param_3 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar8 + 0x2e0) - param_3) < 8) {
        return 0;
      }
      memcpy(*(void **)(lVar8 + 0x2d8),param_4,(long)(int)param_3);
      iVar6 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if ((iVar6 != 0) &&
         (iVar6 = RAND_bytes((uchar *)((long)(int)param_3 + *(long *)(lVar8 + 0x2d8)),
                             *(int *)(lVar8 + 0x2e0) - param_3), iVar6 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar8 + 0x2e8) = 1;
      return 1;
    }
    memcpy(*(void **)(lVar8 + 0x2d8),param_4,(long)*(int *)(lVar8 + 0x2e0));
    uVar9 = 1;
    *(undefined4 *)(lVar8 + 0x2e8) = 1;
    break;
  case 0x13:
    if (*(int *)(lVar8 + 0x2e8) == 0) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x118) == 0) {
      return 0;
    }
    CRYPTO_gcm128_setiv(lVar8 + 0x120,*(undefined8 *)(lVar8 + 0x2d8),(long)*(int *)(lVar8 + 0x2e0));
    uVar7 = *(uint *)(lVar8 + 0x2e0);
    uVar14 = uVar7;
    if ((0 < (int)param_3) && ((int)param_3 <= (int)uVar7)) {
      uVar14 = param_3;
    }
    memcpy(param_4,(void *)(((long)(int)uVar7 - (long)(int)uVar14) + *(long *)(lVar8 + 0x2d8)),
           (long)(int)uVar14);
    iVar6 = *(int *)(lVar8 + 0x2e0);
    lVar11 = 7;
    lVar13 = *(long *)(lVar8 + 0x2d8);
    do {
      pcVar1 = (char *)(iVar6 + lVar13 + -8 + lVar11);
      *pcVar1 = *pcVar1 + '\x01';
      iVar5 = (int)lVar11;
      lVar11 = lVar11 + -1;
    } while (*pcVar1 == '\0' && iVar5 != 0);
    goto LAB_0051ed6b;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    puVar12 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
    *puVar12 = *param_4;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined1 *)((long)puVar12 + 0xc) = *(undefined1 *)((long)param_4 + 0xc);
    *(undefined4 *)(lVar8 + 0x2ec) = 0xd;
    lVar8 = EVP_CIPHER_CTX_buf_noconst(param_1);
    uVar2 = *(undefined1 *)(lVar8 + 0xb);
    lVar8 = EVP_CIPHER_CTX_buf_noconst(param_1);
    uVar3 = CONCAT11(uVar2,*(undefined1 *)(lVar8 + 0xc));
    if (uVar3 < 8) {
      return 0;
    }
    uVar7 = uVar3 - 8;
    iVar6 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar6 == 0) {
      if (uVar7 < 0x10) {
        return 0;
      }
      uVar7 = uVar3 - 0x18;
    }
    lVar8 = EVP_CIPHER_CTX_buf_noconst(param_1);
    *(char *)(lVar8 + 0xb) = (char)(uVar7 >> 8);
    lVar8 = EVP_CIPHER_CTX_buf_noconst(param_1);
    *(char *)(lVar8 + 0xc) = (char)uVar7;
    return 0x10;
  case 0x18:
    if (*(int *)(lVar8 + 0x2e8) == 0) {
      return 0;
    }
    if (*(int *)(lVar8 + 0x118) == 0) {
      return 0;
    }
    iVar6 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar6 != 0) {
      return 0;
    }
    memcpy((void *)(((long)*(int *)(lVar8 + 0x2e0) - (long)(int)param_3) + *(long *)(lVar8 + 0x2d8))
           ,param_4,(long)(int)param_3);
    CRYPTO_gcm128_setiv(lVar8 + 0x120,*(undefined8 *)(lVar8 + 0x2d8),(long)*(int *)(lVar8 + 0x2e0));
LAB_0051ed6b:
    *(undefined4 *)(lVar8 + 0x11c) = 1;
LAB_0051ead0:
    uVar9 = 1;
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar8 + 0x2e0);
    uVar9 = 1;
  }
  return uVar9;
}

