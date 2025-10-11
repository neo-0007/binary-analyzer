
bool rsa_get_ctx_params(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 local_130;
  undefined1 local_128 [32];
  undefined1 local_108 [64];
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    lVar5 = OSSL_PARAM_locate(param_2,"algorithm-id");
    if (lVar5 == 0) {
LAB_0047e4d1:
      lVar5 = OSSL_PARAM_locate(param_2);
      if (lVar5 == 0) {
LAB_0047e550:
        lVar5 = OSSL_PARAM_locate(param_2,"digest");
        if (((lVar5 == 0) || (iVar2 = OSSL_PARAM_set_utf8_string(lVar5,param_1 + 0x34), iVar2 != 0))
           && ((lVar5 = OSSL_PARAM_locate(param_2,"mgf1-digest"), lVar5 == 0 ||
               (iVar2 = OSSL_PARAM_set_utf8_string(lVar5,param_1 + 0x7c), iVar2 != 0)))) {
          bVar10 = true;
          lVar5 = OSSL_PARAM_locate(param_2,"saltlen");
          if (lVar5 == 0) goto LAB_0047e438;
          if (*(int *)(lVar5 + 8) == 1) {
            iVar2 = OSSL_PARAM_set_int(lVar5,*(undefined4 *)(param_1 + 0xb0));
            bVar10 = iVar2 != 0;
            goto LAB_0047e438;
          }
          bVar10 = true;
          if (*(int *)(lVar5 + 8) != 4) goto LAB_0047e438;
          iVar2 = *(int *)(param_1 + 0xb0);
          if (iVar2 == -2) {
            pcVar8 = "auto";
          }
          else if (iVar2 == -1) {
            pcVar8 = "digest";
          }
          else {
            if (iVar2 != -3) {
              iVar2 = BIO_snprintf(*(char **)(lVar5 + 0x10),*(size_t *)(lVar5 + 0x18),"%d");
              if (0 < iVar2) {
                *(long *)(lVar5 + 0x20) = (long)iVar2;
                goto LAB_0047e438;
              }
              goto LAB_0047e435;
            }
            pcVar8 = "max";
          }
          iVar2 = OSSL_PARAM_set_utf8_string(lVar5,pcVar8);
          bVar10 = iVar2 != 0;
          goto LAB_0047e438;
        }
      }
      else if (*(int *)(lVar5 + 8) == 1) {
        iVar2 = OSSL_PARAM_set_int(lVar5,*(undefined4 *)(param_1 + 0x68));
        if (iVar2 != 0) goto LAB_0047e550;
      }
      else if (*(int *)(lVar5 + 8) == 4) {
        iVar3 = 0;
        iVar2 = 1;
        puVar7 = padding_item;
        do {
          if (*(int *)(param_1 + 0x68) == iVar2) {
            if (*(long *)(padding_item + (long)iVar3 * 0x10 + 8) != 0) {
              iVar2 = OSSL_PARAM_set_utf8_string();
              if (iVar2 == 0) goto LAB_0047e435;
              goto LAB_0047e550;
            }
            break;
          }
          iVar2 = *(int *)(puVar7 + 0x10);
          puVar7 = puVar7 + 0x10;
          iVar3 = iVar3 + 1;
        } while (iVar2 != 0);
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x434,"rsa_get_ctx_params")
        ;
        ERR_set_error(0x39,0xc0103,0);
        goto LAB_0047e550;
      }
    }
    else {
      iVar2 = WPACKET_init_der(local_108,local_c8,0x80);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0xe9,
                      "rsa_generate_signature_aid");
        ERR_set_error(0x39,0xc0100,0);
      }
      else if (*(int *)(param_1 + 0x68) == 1) {
        iVar2 = ossl_DER_w_algorithmIdentifier_MDWithRSAEncryption
                          (local_108,0xffffffff,*(undefined4 *)(param_1 + 0x30));
        if (iVar2 < 1) {
          if (iVar2 == 0) {
            ERR_new();
            pcVar8 = "rsa_generate_signature_aid";
            uVar9 = 0xf5;
            goto LAB_0047e695;
          }
          ERR_new();
          ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0xf8,
                        "rsa_generate_signature_aid");
          uVar1 = *(undefined4 *)(param_1 + 0x30);
          pcVar8 = "Algorithm ID generation - md NID: %d";
          goto LAB_0047e41c;
        }
LAB_0047e480:
        iVar2 = WPACKET_finish(local_108);
        if (iVar2 == 0) goto LAB_0047e42d;
        WPACKET_get_total_written(local_108,&local_130);
        lVar6 = WPACKET_get_curr(local_108);
        WPACKET_cleanup(local_108);
        if ((lVar6 != 0) && (iVar2 = OSSL_PARAM_set_octet_string(lVar5,lVar6,local_130), iVar2 != 0)
           ) goto LAB_0047e4d1;
      }
      else {
        if (*(int *)(param_1 + 0x68) == 6) {
          iVar2 = *(int *)(param_1 + 0xb0);
          if (iVar2 == -1) {
            iVar2 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
          }
          else if (iVar2 + 3U < 2) {
            iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
            iVar3 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
            uVar4 = RSA_bits(*(undefined8 *)(param_1 + 0x10));
            iVar2 = (((uVar4 & 7) != 1) - 3) + (iVar2 - iVar3);
          }
          if (iVar2 < 0) {
            ERR_new();
            pcVar8 = "rsa_pss_compute_saltlen";
            uVar9 = 0xd2;
          }
          else {
            if (iVar2 < *(int *)(param_1 + 0xb4)) {
              ERR_new();
              ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0xd5,
                            "rsa_pss_compute_saltlen");
              ERR_set_error(0x39,0xac,"minimum salt length: %d, actual salt length: %d",
                            *(undefined4 *)(param_1 + 0xb4),iVar2);
              WPACKET_cleanup(local_108);
              goto LAB_0047e435;
            }
            iVar3 = ossl_rsa_pss_params_30_set_defaults(local_128);
            if ((((iVar3 != 0) &&
                 (iVar3 = ossl_rsa_pss_params_30_set_hashalg
                                    (local_128,*(undefined4 *)(param_1 + 0x30)), iVar3 != 0)) &&
                (iVar3 = ossl_rsa_pss_params_30_set_maskgenhashalg
                                   (local_128,*(undefined4 *)(param_1 + 0x78)), iVar3 != 0)) &&
               ((iVar2 = ossl_rsa_pss_params_30_set_saltlen(local_128,iVar2), iVar2 != 0 &&
                (iVar2 = ossl_DER_w_algorithmIdentifier_RSA_PSS
                                   (local_108,0xffffffff,0x1000,local_128), iVar2 != 0))))
            goto LAB_0047e480;
            ERR_new();
            pcVar8 = "rsa_generate_signature_aid";
            uVar9 = 0x108;
          }
LAB_0047e695:
          ERR_set_debug("../providers/implementations/signature/rsa_sig.c",uVar9,pcVar8);
          ERR_set_error(0x39,0xc0103,0);
        }
        else {
          ERR_new();
          ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x10d,
                        "rsa_generate_signature_aid");
          uVar1 = *(undefined4 *)(param_1 + 0x68);
          pcVar8 = "Algorithm ID generation - pad mode: %d";
LAB_0047e41c:
          ERR_set_error(0x39,0x8010c,pcVar8,uVar1);
        }
LAB_0047e42d:
        WPACKET_cleanup(local_108);
      }
    }
  }
LAB_0047e435:
  bVar10 = false;
LAB_0047e438:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar10;
}

