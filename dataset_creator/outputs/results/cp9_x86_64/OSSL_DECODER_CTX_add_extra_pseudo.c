
undefined8 OSSL_DECODER_CTX_add_extra(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  ulong local_a0;
  ulong local_98;
  ulong local_88;
  ulong local_80;
  ulong local_60;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x1e5,"OSSL_DECODER_CTX_add_extra");
    ERR_set_error(0x3c,0xc0102,0);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar6 = OPENSSL_sk_new_null();
      if (lVar6 != 0) {
        OSSL_DECODER_do_all_provided(param_2,collect_all_decoders,lVar6);
        iVar4 = OPENSSL_sk_num(lVar6);
        local_60 = 0;
        uVar7 = (ulong)iVar4;
        iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x18));
        local_80 = 0;
        local_88 = (long)iVar4;
LAB_0050768a:
        bVar2 = false;
        uVar13 = local_88;
        local_a0 = local_60;
        do {
          if (local_a0 < local_88) {
            local_98 = local_a0;
            do {
              uVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x18),local_98 & 0xffffffff);
              uVar5 = OSSL_DECODER_INSTANCE_get_input_type(uVar5);
              if (uVar7 != 0) {
                uVar14 = 0;
                do {
                  while( true ) {
                    lVar8 = OPENSSL_sk_value(lVar6,uVar14 & 0xffffffff);
                    uVar9 = OSSL_DECODER_get0_provider(lVar8);
                    uVar9 = OSSL_PROVIDER_get0_provider_ctx(uVar9);
                    iVar4 = OSSL_DECODER_is_a(lVar8,uVar5);
                    uVar3 = local_a0;
                    if (iVar4 != 0) break;
joined_r0x00507873:
                    uVar14 = uVar14 + 1;
                    if (uVar7 == uVar14) goto LAB_0050776e;
                  }
                  for (; uVar3 < uVar13; uVar3 = uVar3 + 1) {
                    plVar10 = (long *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x18),
                                                       uVar3 & 0xffffffff);
                    if (*(long *)(lVar8 + 0x18) == *(long *)(*plVar10 + 0x18))
                    goto joined_r0x00507873;
                  }
                  lVar11 = (**(code **)(lVar8 + 0x38))(uVar9);
                  if (lVar11 == 0) goto joined_r0x00507873;
                  lVar12 = ossl_decoder_instance_new(lVar8,lVar11);
                  if (lVar12 == 0) {
                    (**(code **)(lVar8 + 0x40))(lVar11);
                    goto joined_r0x00507873;
                  }
                  if (bVar2) {
                    uVar9 = OSSL_DECODER_INSTANCE_get_input_type(lVar12);
                    iVar4 = OSSL_DECODER_is_a(lVar8,uVar9);
                    if (iVar4 == 0) goto LAB_005077f9;
LAB_00507848:
                    ossl_decoder_instance_free(lVar12);
                  }
                  else {
                    uVar9 = OSSL_DECODER_INSTANCE_get_input_type(lVar12);
                    iVar4 = OSSL_DECODER_is_a(lVar8,uVar9);
                    if (iVar4 == 0) goto LAB_00507848;
LAB_005077f9:
                    iVar4 = ossl_decoder_ctx_add_decoder_inst(param_1,lVar12);
                    if (iVar4 == 0) goto LAB_00507848;
                    uVar13 = uVar13 + 1;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar7 != uVar14);
              }
LAB_0050776e:
              local_98 = local_98 + 1;
            } while (local_98 < local_88);
          }
          if (bVar2) goto LAB_0050787e;
          local_a0 = local_60;
          bVar2 = true;
        } while( true );
      }
      ERR_new();
      ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x1f8,"OSSL_DECODER_CTX_add_extra");
      ERR_set_error(0x3c,0xc0100,0);
      uVar5 = 0;
    }
  }
LAB_005078cb:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_0050787e:
  local_60 = local_88;
  local_80 = local_80 + 1;
  if ((local_88 == uVar13) || (local_88 = uVar13, 10 < local_80)) goto LAB_005078b2;
  goto LAB_0050768a;
LAB_005078b2:
  OPENSSL_sk_pop_free(lVar6,OSSL_DECODER_free);
  uVar5 = 1;
  goto LAB_005078cb;
}

