
undefined8 * CTLOG_new_ex(EVP_PKEY *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  EVP_MD *type;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uint local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x40,"../crypto/ct/ct_log.c",0x10e);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_log.c",0x111,"CTLOG_new_ex");
    ERR_set_error(0x32,0xc0100,0);
    goto LAB_006228be;
  }
  *puVar2 = param_3;
  if (param_4 == (char *)0x0) {
LAB_0062281c:
    pcVar3 = CRYPTO_strdup(param_2,"../crypto/ct/ct_log.c",0x11e);
    puVar2[2] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      local_48 = (uchar *)0x0;
      iVar1 = i2d_PUBKEY(param_1,&local_48);
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("../crypto/ct/ct_log.c",0x56,"ct_v1_log_id_from_pkey");
        ERR_set_error(0x32,0x71,0);
LAB_00622914:
        EVP_MD_free(0);
        CRYPTO_free(local_48);
      }
      else {
        type = (EVP_MD *)EVP_MD_fetch(*puVar2,"SHA2-256",puVar2[1]);
        if (type == (EVP_MD *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ct/ct_log.c",0x5b,"ct_v1_log_id_from_pkey");
          ERR_set_error(0x32,0x80006,0);
          goto LAB_00622914;
        }
        iVar1 = EVP_Digest(local_48,(long)iVar1,(uchar *)(puVar2 + 3),&local_4c,type,(ENGINE *)0x0);
        EVP_MD_free(type);
        CRYPTO_free(local_48);
        if (iVar1 == 1) {
          puVar2[7] = param_1;
          goto LAB_006228be;
        }
      }
      CTLOG_free(puVar2);
      puVar2 = (undefined8 *)0x0;
      goto LAB_006228be;
    }
    ERR_new();
    uVar4 = 0x120;
  }
  else {
    pcVar3 = CRYPTO_strdup(param_4,"../crypto/ct/ct_log.c",0x117);
    puVar2[2] = pcVar3;
    if (puVar2[1] != 0) goto LAB_0062281c;
    ERR_new();
    uVar4 = 0x119;
  }
  ERR_set_debug("../crypto/ct/ct_log.c",uVar4,"CTLOG_new_ex");
  ERR_set_error(0x32,0xc0100,0);
  CTLOG_free(puVar2);
  puVar2 = (undefined8 *)0x0;
LAB_006228be:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

