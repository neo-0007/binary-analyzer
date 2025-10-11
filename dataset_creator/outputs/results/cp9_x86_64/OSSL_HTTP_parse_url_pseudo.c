
undefined4
OSSL_HTTP_parse_url(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                   undefined8 *param_9)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar1 = OSSL_parse_url(param_1,&local_50,param_3,param_4,&local_48,param_6,param_7,param_8,param_9
                        );
  pcVar2 = local_50;
  if (iVar1 != 0) {
    iVar1 = strcmp(local_50,"https");
    if (iVar1 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      CRYPTO_free(pcVar2);
      if ((*local_48 != '0') || (local_48[1] != '\0')) {
LAB_005f9609:
        if (param_5 == (undefined8 *)0x0) {
          CRYPTO_free(local_48);
          uVar3 = 1;
        }
        else {
          *param_5 = local_48;
          uVar3 = 1;
        }
        goto LAB_005f9617;
      }
      CRYPTO_free(local_48);
      local_48 = "443";
LAB_005f94bc:
      iVar1 = __isoc99_sscanf(local_48,"%d",&local_54);
      if (iVar1 == 1) {
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = local_54;
        }
        uVar3 = 1;
        if (param_5 == (undefined8 *)0x0) goto LAB_005f9617;
        pcVar2 = CRYPTO_strdup(local_48,"../crypto/http/http_lib.c",0xdc);
        *param_5 = pcVar2;
        if (pcVar2 != (char *)0x0) goto LAB_005f9617;
      }
    }
    else {
      if (*pcVar2 == '\0') {
LAB_005f95eb:
        CRYPTO_free(pcVar2);
        if ((*local_48 != '0') || (local_48[1] != '\0')) goto LAB_005f9609;
        CRYPTO_free(local_48);
        local_48 = "80";
        goto LAB_005f94bc;
      }
      iVar1 = strcmp(pcVar2,"http");
      if (iVar1 == 0) goto LAB_005f95eb;
      ERR_new();
      ERR_set_debug("../crypto/http/http_lib.c",0xcc,"OSSL_HTTP_parse_url");
      ERR_set_error(0x3d,0x7c,0);
      CRYPTO_free(local_50);
      CRYPTO_free(local_48);
    }
    if (param_3 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_3);
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_4);
      *param_4 = 0;
    }
    if (param_7 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_7);
      *param_7 = 0;
    }
    if (param_8 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_8);
      *param_8 = 0;
    }
    if (param_9 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*param_9);
      *param_9 = 0;
    }
  }
  uVar3 = 0;
LAB_005f9617:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

