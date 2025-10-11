
ulong decoder_construct_pkey(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = OSSL_DECODER_INSTANCE_get_decoder();
  uVar6 = OSSL_DECODER_INSTANCE_get_decoder_ctx(param_1);
  lVar7 = OSSL_DECODER_get0_provider(lVar5);
  lVar8 = OSSL_PARAM_locate_const(param_2,"data-type");
  if (lVar8 != 0) {
    local_58 = 0;
    uVar9 = OSSL_PARAM_get_utf8_string(lVar8,&local_58,0);
    if ((int)uVar9 == 0) goto LAB_0050951b;
    CRYPTO_free((void *)param_3[4]);
    param_3[4] = local_58;
  }
  lVar8 = OSSL_PARAM_locate_const(param_2,"reference");
  if ((lVar8 == 0) || (*(int *)(lVar8 + 8) != 5)) {
LAB_00509578:
    uVar9 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar8 + 0x10);
    uVar2 = *(undefined8 *)(lVar8 + 0x18);
    iVar3 = OPENSSL_sk_num(param_3[3]);
    if (0 < iVar3) {
      iVar11 = 0;
      do {
        lVar8 = OPENSSL_sk_value(param_3[3],iVar11);
        lVar10 = EVP_KEYMGMT_get0_provider(lVar8);
        if (lVar7 == lVar10) {
          iVar4 = evp_keymgmt_has_load(lVar8);
          if (iVar4 != 0) {
            iVar4 = EVP_KEYMGMT_is_a(lVar8,param_3[4]);
            if (iVar4 != 0) {
              iVar3 = EVP_KEYMGMT_up_ref(lVar8);
              if (iVar3 == 0) goto LAB_00509578;
              if (lVar8 != 0) goto LAB_0050960a;
              goto LAB_005096b0;
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar3);
    }
    lVar8 = EVP_KEYMGMT_fetch(*param_3,param_3[4],param_3[1]);
    if (lVar8 != 0) {
      lVar10 = EVP_KEYMGMT_get0_provider(lVar8);
      if (lVar7 == lVar10) {
LAB_0050960a:
        lVar5 = evp_keymgmt_load(lVar8,uVar1,uVar2);
      }
      else {
        local_48 = *(undefined4 *)(param_3 + 2);
        local_50 = 0;
        local_58 = lVar8;
        (**(code **)(lVar5 + 0x78))(uVar6,uVar1,uVar2,evp_keymgmt_util_try_import,&local_58);
        lVar5 = local_50;
      }
      lVar7 = 0;
      if (lVar5 != 0) {
        lVar7 = evp_keymgmt_util_make_pkey(lVar8,lVar5);
        if (lVar7 == 0) {
          evp_keymgmt_freedata(lVar8,lVar5);
        }
      }
      *(long *)param_3[5] = lVar7;
      EVP_KEYMGMT_free(lVar8);
    }
LAB_005096b0:
    uVar9 = (ulong)(*(long *)param_3[5] != 0);
  }
LAB_0050951b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

