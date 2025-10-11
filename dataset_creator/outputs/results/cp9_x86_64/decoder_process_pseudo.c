
int decoder_process(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  BIO *pBVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  BIO *local_a8;
  int local_98;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  plVar1 = (long *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  local_78 = 0;
  local_70 = 0;
  local_50._8_8_ = 0;
  local_50._0_8_ = param_2[3] + 1;
  local_60 = (undefined1  [16])0x0;
  local_68 = plVar1;
  if (param_1 == 0) {
    iVar2 = OSSL_DECODER_CTX_get_num_decoders(plVar1);
    local_a8 = (BIO *)param_2[1];
    lVar6 = (long)iVar2;
    param_2[2] = lVar6;
    lVar5 = 0;
LAB_00507ad7:
    if (lVar6 != 0) {
      lVar6 = BIO_ctrl(local_a8,0x85,0,(void *)0x0);
      iVar2 = (int)lVar6;
      if ((long)iVar2 < 0) {
        ERR_new();
        pBVar10 = (BIO *)0x0;
        ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x32e,"decoder_process");
        ERR_set_error(0x3c,0x80020,0);
        local_98 = 0;
      }
      else {
        pBVar10 = (BIO *)ossl_core_bio_new_from_bio(local_a8);
        if (pBVar10 == (BIO *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x333,"decoder_process");
          ERR_set_error(0x3c,0xc0100,0);
          local_98 = 0;
        }
        else {
          uVar11 = param_2[2];
          local_98 = 0;
          if (uVar11 != 0) {
            do {
              uVar11 = uVar11 - 1;
              uVar4 = OPENSSL_sk_value(plVar1[3],uVar11 & 0xffffffff);
              lVar6 = OSSL_DECODER_INSTANCE_get_decoder(uVar4);
              uVar7 = OSSL_DECODER_INSTANCE_get_decoder_ctx(uVar4);
              uVar8 = OSSL_DECODER_INSTANCE_get_input_type(uVar4);
              local_7c = 0;
              lVar9 = OSSL_DECODER_INSTANCE_get_input_structure(uVar4,&local_7c);
              if (lVar5 == 0) {
                if ((*plVar1 == 0) || (iVar3 = OPENSSL_strcasecmp(*plVar1,uVar8), iVar3 == 0)) {
LAB_00507b65:
                  if (((local_78 == 0) || (iVar3 = OSSL_DECODER_is_a(lVar6), iVar3 != 0)) &&
                     ((local_70 == 0 ||
                      ((lVar9 != 0 && (iVar3 = OPENSSL_strcasecmp(local_70,lVar9), iVar3 == 0))))))
                  {
                    if (((*(byte *)(param_2 + 4) & 4) == 0) && ((lVar9 != 0 && (plVar1[1] != 0)))) {
                      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
                      iVar3 = OPENSSL_strcasecmp(lVar9);
                      if (iVar3 != 0) goto LAB_00507c9d;
                    }
                    BIO_ctrl(local_a8,0x80,(long)iVar2,(void *)0x0);
                    lVar9 = BIO_ctrl(local_a8,0x85,0,(void *)0x0);
                    if (iVar2 != (int)lVar9) break;
                    ERR_set_mark();
                    local_60._8_8_ = uVar11;
                    local_50[8] = local_50[8] & 0xfb | *(byte *)(param_2 + 4) & 4;
                    local_98 = (**(code **)(lVar6 + 0x70))
                                         (uVar7,pBVar10,(int)local_68[2],decoder_process,&local_68,
                                          ossl_pw_passphrase_callback_dec);
                    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd | local_50[8] & 2;
                    if ((local_98 == 0) ||
                       ((local_50 & (undefined1  [16])0x2) != (undefined1  [16])0x0)) {
                      ERR_clear_last_mark();
                      break;
                    }
                    ERR_pop_to_mark();
                    if ((local_50 & (undefined1  [16])0x1) != (undefined1  [16])0x0) break;
                  }
                }
              }
              else {
                iVar3 = OSSL_DECODER_is_a(lVar5,uVar8);
                if (iVar3 != 0) goto LAB_00507b65;
              }
LAB_00507c9d:
            } while (uVar11 != 0);
          }
        }
      }
      goto LAB_00507a6b;
    }
LAB_00507a60:
    local_98 = 0;
  }
  else {
    uVar4 = OPENSSL_sk_value(plVar1[3],(int)param_2[2]);
    lVar5 = OSSL_DECODER_INSTANCE_get_decoder(uVar4);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd;
    if ((code *)plVar1[4] != (code *)0x0) {
      iVar2 = (*(code *)plVar1[4])(uVar4,param_1,plVar1[6]);
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
      if (0 < iVar2) {
        local_98 = 1;
        pBVar10 = (BIO *)0x0;
        goto LAB_00507a6b;
      }
    }
    lVar6 = OSSL_PARAM_locate_const(param_1,"data");
    if (lVar6 == 0) {
      local_98 = 0;
      pBVar10 = (BIO *)0x0;
      goto LAB_00507a6b;
    }
    if (*(int *)(lVar6 + 8) != 5) goto LAB_00507a60;
    pBVar10 = BIO_new_mem_buf(*(void **)(lVar6 + 0x10),*(int *)(lVar6 + 0x18));
    local_98 = 0;
    local_60._0_8_ = pBVar10;
    if (pBVar10 == (BIO *)0x0) goto LAB_00507a6b;
    lVar6 = OSSL_PARAM_locate_const(param_1,"data-type");
    if (((lVar6 == 0) || (local_98 = OSSL_PARAM_get_utf8_string_ptr(lVar6,&local_78), local_98 != 0)
        ) && ((lVar6 = OSSL_PARAM_locate_const(param_1,"data-structure"), lVar6 == 0 ||
              (local_98 = OSSL_PARAM_get_utf8_string_ptr(lVar6,&local_70), local_98 != 0)))) {
      if (((local_78 != 0) && (local_70 != 0)) &&
         (iVar2 = OPENSSL_strcasecmp(local_70,"type-specific"), iVar2 == 0)) {
        local_70 = 0;
      }
      lVar6 = param_2[2];
      local_a8 = pBVar10;
      goto LAB_00507ad7;
    }
  }
  pBVar10 = (BIO *)0x0;
LAB_00507a6b:
  ossl_core_bio_free(pBVar10);
  BIO_free((BIO *)local_60._0_8_);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_98;
}

