
undefined8 EVP_PKEY_derive_set_peer_ex(int *param_1,EVP_PKEY *param_2,int param_3)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/exchange.c",0x182,"EVP_PKEY_derive_set_peer_ex");
    ERR_set_error(6,0xc0102,0);
    uVar6 = 0xffffffff;
    goto LAB_00527c7b;
  }
  if ((*param_1 == 0x800) && (*(long *)(param_1 + 0xc) != 0)) {
    if (*(long *)(*(long *)(param_1 + 10) + 0x40) == 0) {
      ERR_new();
      uVar6 = 0x18a;
      goto LAB_00527dad;
    }
    uVar6 = *(undefined8 *)(param_1 + 4);
    if (param_3 == 0) {
LAB_00527c1b:
      uVar2 = EVP_KEYMGMT_get0_name(*(undefined8 *)(param_1 + 8));
      uVar3 = EVP_KEYEXCH_get0_provider(*(undefined8 *)(param_1 + 10));
      lVar4 = evp_keymgmt_fetch_from_prov(uVar3,uVar2,uVar6);
      local_38 = lVar4;
      if (lVar4 == 0) {
        EVP_KEYMGMT_free(0);
      }
      else {
        lVar5 = evp_pkey_export_to_provider
                          (param_2,*(undefined8 *)(param_1 + 2),&local_38,
                           *(undefined8 *)(param_1 + 4));
        EVP_KEYMGMT_free(lVar4);
        if (lVar5 != 0) {
          uVar6 = (**(code **)(*(long *)(param_1 + 10) + 0x40))
                            (*(undefined8 *)(param_1 + 0xc),lVar5);
          goto LAB_00527c7b;
        }
      }
      goto LAB_00527ca7;
    }
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*(undefined8 *)(param_1 + 2),param_2,uVar6);
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      iVar1 = EVP_PKEY_public_check(ctx);
      EVP_PKEY_CTX_free(ctx);
      if (0 < iVar1) {
        uVar6 = *(undefined8 *)(param_1 + 4);
        goto LAB_00527c1b;
      }
    }
  }
  else {
LAB_00527ca7:
    lVar4 = *(long *)(param_1 + 0x1e);
    if (((lVar4 == 0) ||
        (((*(long *)(lVar4 + 0xb8) == 0 && (*(long *)(lVar4 + 0x98) == 0)) &&
         (*(long *)(lVar4 + 0xa8) == 0)))) || (*(code **)(lVar4 + 0xc0) == (code *)0x0)) {
      ERR_new();
      uVar6 = 0x1bc;
LAB_00527dad:
      ERR_set_debug("../crypto/evp/exchange.c",uVar6,"EVP_PKEY_derive_set_peer_ex");
      ERR_set_error(6,0x96,0);
      uVar6 = 0xfffffffe;
      goto LAB_00527c7b;
    }
    if (((*param_1 - 0x200U & 0xfffffdff) == 0) || (*param_1 == 0x800)) {
      uVar6 = (**(code **)(lVar4 + 0xc0))(param_1,2,0,param_2);
      if (0 < (int)uVar6) {
        if ((int)uVar6 == 2) {
          uVar6 = 1;
        }
        else if (*(int **)(param_1 + 0x22) == (int *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/exchange.c",0x1cf,"EVP_PKEY_derive_set_peer_ex");
          ERR_set_error(6,0x9a,0);
          uVar6 = 0xffffffff;
        }
        else if (**(int **)(param_1 + 0x22) == param_2->type) {
          iVar1 = EVP_PKEY_missing_parameters(param_2);
          if (iVar1 == 0) {
            iVar1 = EVP_PKEY_parameters_eq(*(undefined8 *)(param_1 + 0x22),param_2);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("../crypto/evp/exchange.c",0x1e1,"EVP_PKEY_derive_set_peer_ex");
              ERR_set_error(6,0x99,0);
              uVar6 = 0xffffffff;
              goto LAB_00527c7b;
            }
          }
          EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 0x24));
          *(EVP_PKEY **)(param_1 + 0x24) = param_2;
          uVar6 = (**(code **)(*(long *)(param_1 + 0x1e) + 0xc0))(param_1,2,1,param_2);
          if ((int)uVar6 < 1) {
            param_1[0x24] = 0;
            param_1[0x25] = 0;
          }
          else {
            EVP_PKEY_up_ref(param_2);
            uVar6 = 1;
          }
        }
        else {
          ERR_new();
          ERR_set_debug("../crypto/evp/exchange.c",0x1d4,"EVP_PKEY_derive_set_peer_ex");
          ERR_set_error(6,0x65,0);
          uVar6 = 0xffffffff;
        }
      }
      goto LAB_00527c7b;
    }
    ERR_new();
    ERR_set_debug("../crypto/evp/exchange.c",0x1c2,"EVP_PKEY_derive_set_peer_ex");
    ERR_set_error(6,0x97,0);
  }
  uVar6 = 0xffffffff;
LAB_00527c7b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

