
undefined8 aes_gcm_ctrl(undefined8 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  char *pcVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar13 = (ulong)param_3;
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar6 + 0xf8) = 0;
    uVar3 = EVP_CIPHER_get_iv_length(*param_1);
    *(undefined8 **)(lVar6 + 0x2b8) = param_1 + 5;
    *(undefined4 *)(lVar6 + 0x2c0) = uVar3;
    *(undefined8 *)(lVar6 + 0x2c4) = 0xffffffff;
    uVar7 = 1;
    *(undefined4 *)(lVar6 + 0x2d0) = 0xffffffff;
    break;
  default:
    uVar7 = 0xffffffff;
    break;
  case 8:
    lVar10 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(long *)(lVar6 + 0x280) != 0) {
      if (*(long *)(lVar6 + 0x280) != lVar6) {
        return 0;
      }
      *(long *)(lVar10 + 0x280) = lVar10;
    }
    if (*(undefined8 **)(lVar6 + 0x2b8) == param_1 + 5) {
      *(undefined8 **)(lVar10 + 0x2b8) = param_4 + 5;
      return 1;
    }
    pvVar8 = CRYPTO_malloc(*(int *)(lVar6 + 0x2c0),"../crypto/evp/e_aes.c",0xa87);
    *(void **)(lVar10 + 0x2b8) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      ERR_new();
      uVar7 = 0xa88;
LAB_004063cf:
      ERR_set_debug("../crypto/evp/e_aes.c",uVar7,"aes_gcm_ctrl");
      ERR_set_error(6,0xc0100,0);
      return 0;
    }
    memcpy(pvVar8,*(void **)(lVar6 + 0x2b8),(long)*(int *)(lVar6 + 0x2c0));
    goto LAB_004066db;
  case 9:
    if ((int)param_3 < 1) {
      return 0;
    }
    if ((0x10 < (int)param_3) && (*(int *)(lVar6 + 0x2c0) < (int)param_3)) {
      if (*(undefined8 **)(lVar6 + 0x2b8) != param_1 + 5) {
        CRYPTO_free(*(undefined8 **)(lVar6 + 0x2b8));
      }
      pvVar8 = CRYPTO_malloc(param_3,"../crypto/evp/e_aes.c",0xa21);
      *(void **)(lVar6 + 0x2b8) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        ERR_new();
        uVar7 = 0xa22;
        goto LAB_004063cf;
      }
    }
    *(uint *)(lVar6 + 0x2c0) = param_3;
    uVar7 = 1;
    break;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (*(int *)(param_1 + 2) == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0x2c4) < 0) {
      return 0;
    }
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) &&
           (*(undefined1 *)param_4 = *(undefined1 *)(param_1 + 7), (param_3 & 2) != 0)) {
          *(undefined2 *)((long)param_4 + (uVar13 - 2)) =
               *(undefined2 *)((long)param_1 + uVar13 + 0x36);
        }
      }
      else {
        *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 7);
        *(undefined4 *)((long)param_4 + (uVar13 - 4)) =
             *(undefined4 *)((long)param_1 + uVar13 + 0x34);
      }
    }
    else {
      *param_4 = param_1[7];
      *(undefined8 *)((long)param_4 + (uVar13 - 8)) = *(undefined8 *)((long)param_1 + uVar13 + 0x30)
      ;
      lVar6 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar11 = param_3 + (int)lVar6 & 0xfffffff8;
      if (7 < uVar11) {
        uVar12 = 0;
        do {
          uVar13 = (ulong)uVar12;
          uVar12 = uVar12 + 8;
          *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar13) =
               *(undefined8 *)((long)param_1 + uVar13 + (0x38 - lVar6));
        } while (uVar12 < uVar11);
      }
    }
    goto LAB_004066db;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (*(int *)(param_1 + 2) != 0) {
      return 0;
    }
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) &&
           (*(undefined1 *)(param_1 + 7) = *(undefined1 *)param_4, (param_3 & 2) != 0)) {
          *(undefined2 *)((long)param_1 + uVar13 + 0x36) =
               *(undefined2 *)((long)param_4 + (uVar13 - 2));
        }
      }
      else {
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)param_4;
        *(undefined4 *)((long)param_1 + uVar13 + 0x34) =
             *(undefined4 *)((long)param_4 + (uVar13 - 4));
      }
    }
    else {
      param_1[7] = *param_4;
      *(undefined8 *)((long)param_1 + uVar13 + 0x30) = *(undefined8 *)((long)param_4 + (uVar13 - 8))
      ;
      lVar10 = (long)param_1 + (0x38 - ((ulong)(param_1 + 8) & 0xfffffffffffffff8));
      uVar11 = (int)lVar10 + param_3 & 0xfffffff8;
      if (7 < uVar11) {
        uVar13 = 0;
        do {
          uVar12 = (int)uVar13 + 8;
          *(undefined8 *)(((ulong)(param_1 + 8) & 0xfffffffffffffff8) + uVar13) =
               *(undefined8 *)((long)param_4 + (uVar13 - lVar10));
          uVar13 = (ulong)uVar12;
        } while (uVar12 < uVar11);
      }
    }
    *(uint *)(lVar6 + 0x2c4) = param_3;
    uVar7 = 1;
    break;
  case 0x12:
    if (param_3 != 0xffffffff) {
      if ((int)param_3 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar6 + 0x2c0) - param_3) < 8) {
        return 0;
      }
      memcpy(*(void **)(lVar6 + 0x2b8),param_4,(long)(int)param_3);
      if ((*(int *)(param_1 + 2) != 0) &&
         (iVar5 = RAND_bytes((uchar *)((long)(int)param_3 + *(long *)(lVar6 + 0x2b8)),
                             *(int *)(lVar6 + 0x2c0) - param_3), iVar5 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar6 + 0x2c8) = 1;
      return 1;
    }
    memcpy(*(void **)(lVar6 + 0x2b8),param_4,(long)*(int *)(lVar6 + 0x2c0));
    uVar7 = 1;
    *(undefined4 *)(lVar6 + 0x2c8) = 1;
    break;
  case 0x13:
    if (*(int *)(lVar6 + 0x2c8) == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0xf8) == 0) {
      return 0;
    }
    CRYPTO_gcm128_setiv(lVar6 + 0x100,*(undefined8 *)(lVar6 + 0x2b8),(long)*(int *)(lVar6 + 0x2c0));
    uVar11 = *(uint *)(lVar6 + 0x2c0);
    uVar12 = uVar11;
    if ((0 < (int)param_3) && ((int)param_3 <= (int)uVar11)) {
      uVar12 = param_3;
    }
    memcpy(param_4,(void *)(((long)(int)uVar11 - (long)(int)uVar12) + *(long *)(lVar6 + 0x2b8)),
           (long)(int)uVar12);
    iVar5 = *(int *)(lVar6 + 0x2c0);
    lVar9 = 7;
    lVar10 = *(long *)(lVar6 + 0x2b8);
    do {
      pcVar1 = (char *)(iVar5 + lVar10 + -8 + lVar9);
      *pcVar1 = *pcVar1 + '\x01';
      iVar4 = (int)lVar9;
      lVar9 = lVar9 + -1;
    } while (*pcVar1 == '\0' && iVar4 != 0);
    goto LAB_004066cf;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    param_1[7] = *param_4;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_4 + 1);
    *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_4 + 0xc);
    *(undefined4 *)(lVar6 + 0x2d0) = 0xd;
    *(undefined8 *)(lVar6 + 0x2d8) = 0;
    uVar2 = *(ushort *)((long)param_1 + 0x43) << 8 | *(ushort *)((long)param_1 + 0x43) >> 8;
    if (uVar2 < 8) {
      return 0;
    }
    uVar11 = uVar2 - 8;
    if (*(int *)(param_1 + 2) == 0) {
      if (uVar11 < 0x10) {
        return 0;
      }
      uVar11 = uVar2 - 0x18;
    }
    *(ushort *)((long)param_1 + 0x43) = (ushort)uVar11 << 8 | (ushort)uVar11 >> 8;
    return 0x10;
  case 0x18:
    if (*(int *)(lVar6 + 0x2c8) == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0xf8) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 2) != 0) {
      return 0;
    }
    memcpy((void *)(((long)*(int *)(lVar6 + 0x2c0) - (long)(int)param_3) + *(long *)(lVar6 + 0x2b8))
           ,param_4,(long)(int)param_3);
    CRYPTO_gcm128_setiv(lVar6 + 0x100,*(undefined8 *)(lVar6 + 0x2b8),(long)*(int *)(lVar6 + 0x2c0));
LAB_004066cf:
    *(undefined4 *)(lVar6 + 0xfc) = 1;
LAB_004066db:
    uVar7 = 1;
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar6 + 0x2c0);
    uVar7 = 1;
  }
  return uVar7;
}

