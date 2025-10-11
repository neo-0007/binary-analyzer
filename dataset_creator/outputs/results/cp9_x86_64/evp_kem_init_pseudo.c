
int evp_kem_init(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if ((param_1 == (int *)0x0) || (*(long *)(param_1 + 6) == 0)) {
    ERR_new();
    iVar3 = 0;
    ERR_set_debug("../crypto/evp/kem.c",0x20,"evp_kem_init");
    ERR_set_error(6,0x86,0);
    goto LAB_00529643;
  }
  evp_pkey_ctx_free_old_ops();
  *param_1 = param_2;
  if (*(long *)(param_1 + 0x22) == 0) {
    ERR_new();
    iVar3 = 0;
    ERR_set_debug("../crypto/evp/kem.c",0x28,"evp_kem_init");
    ERR_set_error(6,0x9a,0);
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
    if ((lVar4 == 0) || (lVar4 == *(long *)(param_1 + 8))) {
      lVar8 = 0;
      lVar4 = evp_keymgmt_util_query_operation_name(*(long *)(param_1 + 8),0xe);
      uVar11 = 1;
      if (lVar4 == 0) {
        ERR_new();
        uVar10 = 0x37;
      }
      else {
        do {
          EVP_KEM_free(lVar8);
          EVP_KEYMGMT_free(local_48);
          if (uVar11 == 2) {
            uVar10 = EVP_KEYMGMT_get0_provider(*(undefined8 *)(param_1 + 8));
            lVar8 = evp_kem_fetch_from_prov(uVar10,lVar4,*(undefined8 *)(param_1 + 4));
            if (lVar8 == 0) {
              ERR_new();
              uVar10 = 0x65;
              goto LAB_005295ad;
            }
LAB_005294ea:
            uVar1 = *(undefined8 *)(param_1 + 4);
            uVar5 = EVP_KEYMGMT_get0_name(*(undefined8 *)(param_1 + 8));
            lVar6 = evp_keymgmt_fetch_from_prov(uVar10,uVar5,uVar1);
            local_48 = lVar6;
            if (lVar6 == 0) {
              lVar7 = 0;
              bVar12 = true;
            }
            else {
              lVar7 = evp_pkey_export_to_provider
                                (*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                 &local_48,*(undefined8 *)(param_1 + 4));
              bVar12 = lVar7 == 0;
              if (local_48 != 0) goto LAB_00529544;
            }
            EVP_KEYMGMT_free(lVar6);
          }
          else {
            lVar8 = EVP_KEM_fetch(*(undefined8 *)(param_1 + 2),lVar4,*(undefined8 *)(param_1 + 4));
            if (lVar8 != 0) {
              uVar10 = EVP_KEM_get0_provider(lVar8);
              goto LAB_005294ea;
            }
            lVar8 = 0;
            bVar12 = true;
            lVar7 = 0;
          }
LAB_00529544:
          bVar2 = uVar11 < 2;
          uVar11 = 2;
        } while ((bool)(bVar2 & bVar12));
        if (lVar7 == 0) {
          EVP_KEM_free(lVar8);
          ERR_new();
          uVar10 = 0x85;
        }
        else {
          uVar10 = *(undefined8 *)(lVar8 + 0x18);
          pcVar9 = *(code **)(lVar8 + 0x30);
          *(long *)(param_1 + 10) = lVar8;
          uVar10 = ossl_provider_ctx(uVar10);
          lVar4 = (*pcVar9)(uVar10);
          *(long *)(param_1 + 0xc) = lVar4;
          if (lVar4 != 0) {
            if (param_2 == 0x1000) {
              pcVar9 = *(code **)(lVar8 + 0x38);
              if (pcVar9 != (code *)0x0) {
LAB_00529755:
                iVar3 = (*pcVar9)(lVar4,lVar7,param_3);
                EVP_KEYMGMT_free(local_48);
                local_48 = 0;
                if (0 < iVar3) {
                  iVar3 = 1;
                  goto LAB_00529643;
                }
                goto LAB_005296ed;
              }
              ERR_new(lVar4);
              uVar10 = 0x94;
            }
            else {
              if (param_2 != 0x2000) {
                ERR_new(lVar4);
                uVar10 = 0xa3;
                goto LAB_005296cb;
              }
              pcVar9 = *(code **)(lVar8 + 0x48);
              if (pcVar9 != (code *)0x0) goto LAB_00529755;
              ERR_new(lVar4);
              uVar10 = 0x9c;
            }
LAB_005295ad:
            iVar3 = -2;
            ERR_set_debug("../crypto/evp/kem.c",uVar10,"evp_kem_init");
            ERR_set_error(6,0x96,0);
            goto LAB_005296ed;
          }
          ERR_new(0);
          uVar10 = 0x8d;
        }
      }
LAB_005296cb:
      iVar3 = 0;
      ERR_set_debug("../crypto/evp/kem.c",uVar10,"evp_kem_init");
      ERR_set_error(6,0x86,0);
    }
    else {
      ERR_new();
      iVar3 = 0;
      ERR_set_debug("../crypto/evp/kem.c",0x31,"evp_kem_init");
      ERR_set_error(6,0xc0103,0);
    }
  }
LAB_005296ed:
  evp_pkey_ctx_free_old_ops(param_1);
  *param_1 = 0;
  EVP_KEYMGMT_free(local_48);
LAB_00529643:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

