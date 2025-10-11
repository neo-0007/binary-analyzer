
undefined4 dsa_setup_md(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  uVar6 = 1;
  if (param_2 == (char *)0x0) goto LAB_0047a2b0;
  iVar1 = *(int *)(param_1 + 0x2e);
  lVar3 = EVP_MD_fetch(*param_1,param_2,param_3);
  iVar1 = ossl_digest_get_approved_nid_with_sha1(*param_1,lVar3,iVar1 != 0x10);
  sVar4 = strlen(param_2);
  if (lVar3 == 0) {
LAB_0047a2f0:
    ERR_new();
    ERR_set_debug("../providers/implementations/signature/dsa_sig.c",0x88,"dsa_setup_md");
    ERR_set_error(0x39,0x7a,"%s could not be fetched",param_2);
    if (iVar1 < 0) goto LAB_0047a363;
  }
  else {
    if (-1 < iVar1) {
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        if (*(char *)((long)param_1 + 0x19) != '\0') {
          iVar1 = EVP_MD_is_a(lVar3,(long)param_1 + 0x19);
          if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("../providers/implementations/signature/dsa_sig.c",0x96,"dsa_setup_md");
            ERR_set_error(0x39,0xae,"digest %s != %s",param_2,(long)param_1 + 0x19);
            EVP_MD_free(lVar3);
            uVar6 = 0;
            goto LAB_0047a2b0;
          }
        }
        uVar6 = 1;
        EVP_MD_free(lVar3);
      }
      else {
        EVP_MD_CTX_free(param_1[0x2d]);
        EVP_MD_free(param_1[0x2c]);
        param_1[0x2b] = 0;
        iVar2 = WPACKET_init_der(auStack_78,(long)param_1 + 0x4b,0x100);
        if (((iVar2 != 0) &&
            (iVar1 = ossl_DER_w_algorithmIdentifier_DSA_with_MD
                               (auStack_78,0xffffffff,param_1[2],iVar1), iVar1 != 0)) &&
           (iVar1 = WPACKET_finish(auStack_78), iVar1 != 0)) {
          WPACKET_get_total_written(auStack_78,param_1 + 0x2b);
          uVar5 = WPACKET_get_curr(auStack_78);
          param_1[0x2a] = uVar5;
        }
        uVar6 = 1;
        WPACKET_cleanup(auStack_78);
        param_1[0x2c] = lVar3;
        param_1[0x2d] = 0;
        OPENSSL_strlcpy((long)param_1 + 0x19,param_2,0x32);
      }
      goto LAB_0047a2b0;
    }
    if (lVar3 == 0) goto LAB_0047a2f0;
LAB_0047a363:
    ERR_new();
    ERR_set_debug("../providers/implementations/signature/dsa_sig.c",0x8b,"dsa_setup_md");
    ERR_set_error(0x39,0xae,"digest=%s",param_2);
  }
  if (0x31 < sVar4) {
    ERR_new();
    ERR_set_debug("../providers/implementations/signature/dsa_sig.c",0x8e,"dsa_setup_md");
    ERR_set_error(0x39,0x7a,"%s exceeds name buffer length",param_2);
  }
  uVar6 = 0;
  EVP_MD_free(lVar3);
LAB_0047a2b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}

