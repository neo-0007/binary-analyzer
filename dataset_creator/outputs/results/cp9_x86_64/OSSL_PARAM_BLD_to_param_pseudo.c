
undefined8 * OSSL_PARAM_BLD_to_param(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong __n;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long in_FS_OFFSET;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = OPENSSL_sk_num(param_1[2]);
  lVar5 = ossl_param_bytes_to_blocks((long)(iVar4 + 1) * 0x28);
  uVar3 = *param_1;
  lVar9 = param_1[1] << 3;
  if (lVar9 == 0) {
    local_90 = (undefined8 *)0x0;
  }
  else {
    local_90 = (undefined8 *)CRYPTO_secure_malloc(lVar9,"../crypto/param_build.c",0x16c);
    if (local_90 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/param_build.c",0x16e,"OSSL_PARAM_BLD_to_param");
      ERR_set_error(0xf,0x6f,0);
      local_98 = (undefined8 *)0x0;
      goto LAB_0053adba;
    }
  }
  local_98 = (undefined8 *)
             CRYPTO_malloc(((int)lVar5 + (int)uVar3) * 8,"../crypto/param_build.c",0x172);
  if (local_98 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/param_build.c",0x174,"OSSL_PARAM_BLD_to_param");
    ERR_set_error(0xf,0xc0100,0);
    CRYPTO_secure_free(local_90,"../crypto/param_build.c",0x175);
  }
  else {
    iVar4 = OPENSSL_sk_num(param_1[2]);
    puVar11 = local_98 + lVar5;
    puVar8 = local_98;
    if (0 < iVar4) {
      iVar14 = 0;
      puVar13 = local_90;
      do {
        while( true ) {
          puVar6 = (undefined8 *)OPENSSL_sk_value(param_1[2],iVar14);
          __n = puVar6[2];
          *puVar8 = *puVar6;
          iVar1 = *(int *)(puVar6 + 1);
          puVar8[3] = __n;
          *(int *)(puVar8 + 1) = iVar1;
          iVar2 = *(int *)((long)puVar6 + 0xc);
          puVar8[4] = 0xffffffffffffffff;
          if (iVar2 == 0) break;
          puVar12 = puVar13 + puVar6[3];
          puVar8[2] = puVar13;
          lVar5 = puVar6[4];
          puVar10 = puVar13;
          if (lVar5 == 0) goto LAB_0053acdb;
LAB_0053ac75:
          BN_bn2nativepad(lVar5,puVar10);
LAB_0053ac7d:
          iVar14 = iVar14 + 1;
          puVar8 = puVar8 + 5;
          puVar13 = puVar12;
          if (iVar4 == iVar14) goto LAB_0053ad28;
        }
        puVar12 = puVar11 + puVar6[3];
        puVar8[2] = puVar11;
        lVar5 = puVar6[4];
        puVar10 = puVar11;
        puVar11 = puVar12;
        puVar12 = puVar13;
        if (lVar5 != 0) goto LAB_0053ac75;
LAB_0053acdb:
        if (iVar1 - 6U < 2) {
          *puVar10 = puVar6[5];
          goto LAB_0053ac7d;
        }
        if (iVar1 - 4U < 2) {
          if ((void *)puVar6[5] == (void *)0x0) {
            pvVar7 = memset(puVar10,0,__n);
          }
          else {
            pvVar7 = memcpy(puVar10,(void *)puVar6[5],__n);
          }
          if (*(int *)(puVar6 + 1) == 4) {
            *(undefined1 *)((long)pvVar7 + puVar6[2]) = 0;
          }
          goto LAB_0053ac7d;
        }
        if (8 < __n) {
          memset(puVar10,0,__n);
          goto LAB_0053ac7d;
        }
        if (__n == 0) goto LAB_0053ac7d;
        iVar14 = iVar14 + 1;
        puVar8 = puVar8 + 5;
        memcpy(puVar10,puVar6 + 6,__n);
        puVar13 = puVar12;
      } while (iVar4 != iVar14);
LAB_0053ad28:
      puVar8 = local_98 + (long)iVar4 * 5;
    }
    OSSL_PARAM_construct_end(&local_78);
    *puVar8 = local_78;
    puVar8[1] = uStack_70;
    puVar8[2] = local_68;
    puVar8[3] = uStack_60;
    puVar8[4] = local_58;
    ossl_param_set_secure_block(puVar8,local_90,lVar9);
    *param_1 = 0;
    param_1[1] = 0;
    iVar4 = OPENSSL_sk_num(param_1[2]);
    if (0 < iVar4) {
      iVar14 = 0;
      do {
        iVar14 = iVar14 + 1;
        pvVar7 = (void *)OPENSSL_sk_pop(param_1[2]);
        CRYPTO_free(pvVar7);
      } while (iVar4 != iVar14);
    }
  }
LAB_0053adba:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_98;
}

