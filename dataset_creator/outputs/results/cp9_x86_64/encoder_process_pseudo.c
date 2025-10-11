
int encoder_process(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  BIO *pBVar6;
  BIO_METHOD *type;
  BIO *bp;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined8 local_278;
  long local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined1 (*local_228) [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188 [41];
  long local_40;
  
  bVar1 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[3] == 0) {
    bVar1 = true;
    *(uint *)(param_1 + 4) = -(uint)(*(long *)(*param_1 + 0x10) == 0);
    iVar10 = (int)param_1[2] + -1;
    if ((int)param_1[2] < 1) goto LAB_005efddb;
LAB_005efacf:
    do {
      local_278 = 0;
      if (!bVar1) {
        local_278 = OSSL_ENCODER_INSTANCE_get_encoder(param_1[3]);
      }
      lVar3 = OPENSSL_sk_value(*(undefined8 *)(*param_1 + 0x18),iVar10);
      local_270 = OSSL_ENCODER_INSTANCE_get_encoder(lVar3);
      local_268 = OSSL_ENCODER_INSTANCE_get_encoder_ctx(lVar3);
      uVar4 = OSSL_ENCODER_INSTANCE_get_output_type(lVar3);
      lVar5 = OSSL_ENCODER_INSTANCE_get_output_structure(lVar3);
      pauVar8 = (undefined1 (*) [16])*param_1;
      local_200 = (undefined1  [16])0x0;
      local_1f0 = (undefined1  [16])0x0;
      local_210._8_4_ = (int)param_1[4];
      local_210._0_8_ = lVar3;
      local_210._12_4_ = 0;
      local_220._4_4_ = *(int *)((long)param_1 + 0x14) + 1;
      local_220._0_4_ = iVar10;
      local_220._8_8_ = 0;
      local_220 = local_220 << 0x40;
      local_228 = pauVar8;
      if (bVar1) {
        if (*(long *)(*pauVar8 + 8) != 0) {
          iVar2 = OPENSSL_strcasecmp(uVar4);
          if (iVar2 != 0) goto LAB_005efac5;
          pauVar8 = (undefined1 (*) [16])*param_1;
        }
LAB_005efa77:
        if ((*(long *)pauVar8[1] != 0) && (lVar5 != 0)) {
          iVar2 = OPENSSL_strcasecmp(*(long *)pauVar8[1],lVar5);
          if (iVar2 != 0) goto LAB_005efac5;
          *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        }
        iVar2 = encoder_process(&local_228);
        param_1[6] = local_200._8_8_;
        param_1[5] = local_200._0_8_;
        param_1[7] = local_1f0._0_8_;
        if (iVar2 != 0) {
          if (-1 < iVar10) {
            if (iVar2 == -1) goto LAB_005efdf4;
            if (iVar2 != 1) {
              lVar5 = 0;
              goto LAB_005efb40;
            }
            if (param_1[6] == 0) {
              ERR_new();
              iVar10 = 0;
              ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0x246,"encoder_process");
              ERR_set_error(0x3b,0xc0103,0);
              goto LAB_005efe3d;
            }
            lVar5 = OSSL_ENCODER_INSTANCE_get_output_structure();
            puVar9 = &local_1b0;
            OSSL_PARAM_construct_utf8_string(&local_258,"data-type",param_1[8],0);
            local_1d8 = local_258;
            uStack_1d0 = uStack_250;
            local_1b8 = local_238;
            local_1c8 = local_248;
            uStack_1c0 = uStack_240;
            if (lVar5 != 0) {
              OSSL_PARAM_construct_utf8_string(&local_258,"data-structure",lVar5,0);
              puVar9 = local_188;
              local_1b0 = local_258;
              uStack_1a8 = uStack_250;
              local_190 = local_238;
              local_1a0 = local_248;
              uStack_198 = uStack_240;
            }
            OSSL_PARAM_construct_octet_string(&local_258,"data",param_1[6],param_1[7]);
            puVar11 = &local_1d8;
            *puVar9 = local_258;
            puVar9[1] = uStack_250;
            puVar9[2] = local_248;
            puVar9[3] = uStack_240;
            puVar9[4] = local_238;
            OSSL_PARAM_construct_end(&local_258);
            puVar9[5] = local_258;
            puVar9[6] = uStack_250;
            puVar9[7] = local_248;
            puVar9[8] = uStack_240;
            puVar9[9] = local_238;
            lVar5 = 0;
            goto joined_r0x005efd1b;
          }
          break;
        }
      }
      else {
        iVar2 = OSSL_ENCODER_is_a(local_278,uVar4);
        if (iVar2 != 0) {
          pauVar8 = (undefined1 (*) [16])*param_1;
          goto LAB_005efa77;
        }
      }
LAB_005efac5:
      bVar12 = iVar10 != 0;
      iVar10 = iVar10 + -1;
    } while (bVar12);
LAB_005efe30:
    iVar10 = -1;
  }
  else {
    iVar10 = (int)param_1[2] + -1;
    if (0 < (int)param_1[2]) goto LAB_005efacf;
LAB_005efddb:
    if (iVar10 < 0) goto LAB_005efe30;
    local_270 = 0;
    lVar3 = 0;
    local_268 = 0;
LAB_005efdf4:
    iVar10 = (int)param_1[4];
    if (iVar10 == 0) goto LAB_005efbd8;
    iVar10 = 0;
    lVar5 = (**(code **)(*param_1 + 0x20))(lVar3,*(undefined8 *)(*param_1 + 0x30));
    lVar7 = OSSL_ENCODER_get0_name(local_270);
    param_1[8] = lVar7;
    if (lVar5 != 0) {
LAB_005efb40:
      puVar11 = (undefined8 *)0x0;
joined_r0x005efd1b:
      if (bVar1) {
        lVar7 = param_1[1];
        pBVar6 = (BIO *)ossl_core_bio_new_from_bio();
        bp = pBVar6;
        if (pBVar6 == (BIO *)0x0) {
LAB_005eff08:
          iVar10 = 0;
          ossl_core_bio_free(0);
          param_1[5] = lVar3;
          CRYPTO_free((void *)param_1[6]);
          param_1[6] = 0;
        }
        else {
          iVar10 = (**(code **)(local_270 + 0x70))
                             (local_268,pBVar6,lVar5,puVar11,*(undefined4 *)*param_1,
                              ossl_pw_passphrase_callback_enc,(undefined4 *)*param_1 + 0xe,lVar7);
          bp = (BIO *)0x0;
          ossl_core_bio_free(pBVar6);
          param_1[5] = lVar3;
          CRYPTO_free((void *)param_1[6]);
          param_1[6] = 0;
        }
      }
      else {
        type = BIO_s_mem();
        bp = BIO_new(type);
        if (bp == (BIO *)0x0) goto LAB_005eff08;
        auVar13 = ossl_core_bio_new_from_bio(bp);
        lVar7 = auVar13._0_8_;
        if (lVar7 == 0) {
          iVar10 = 0;
          ossl_core_bio_free(0);
          param_1[5] = lVar3;
          CRYPTO_free((void *)param_1[6]);
          param_1[6] = 0;
        }
        else {
          iVar10 = (**(code **)(local_270 + 0x70))
                             (local_268,lVar7,lVar5,puVar11,*(undefined4 *)*param_1,
                              ossl_pw_passphrase_callback_enc,(undefined4 *)*param_1 + 0xe,
                              auVar13._8_8_);
          ossl_core_bio_free(lVar7);
          param_1[5] = lVar3;
          CRYPTO_free((void *)param_1[6]);
          param_1[6] = 0;
        }
        BIO_ctrl(bp,0x73,0,&local_228);
        param_1[6] = *(long *)(*local_228 + 8);
        param_1[7] = *(long *)*local_228;
        *local_228 = (undefined1  [16])0x0;
        local_228[1] = (undefined1  [16])0x0;
      }
      BIO_free(bp);
      if (lVar5 != 0) {
        (**(code **)(*param_1 + 0x28))(*(undefined8 *)(*param_1 + 0x30));
      }
      goto LAB_005efbd8;
    }
  }
LAB_005efe3d:
  CRYPTO_free((void *)param_1[6]);
  param_1[6] = 0;
  BIO_free((BIO *)0x0);
LAB_005efbd8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

