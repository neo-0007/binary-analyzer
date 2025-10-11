
undefined8
provider_conf_params(long param_1,undefined8 param_2,long param_3,char *param_4,CONF *param_5)

{
  int iVar1;
  stack_st_CONF_VALUE *psVar2;
  size_t sVar3;
  long lVar4;
  size_t sVar5;
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  char local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  psVar2 = NCONF_get_section(param_5,param_4);
  if (psVar2 == (stack_st_CONF_VALUE *)0x0) {
    if (param_1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = ossl_provider_info_add_parameter(param_2,param_3,param_4);
        return uVar6;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = ossl_provider_add_parameter(param_1,param_3,param_4);
      return uVar6;
    }
  }
  else {
    sVar3 = 0;
    if (param_3 != 0) {
      OPENSSL_strlcpy(local_248,param_3,0x200);
      OPENSSL_strlcat(local_248,&DAT_007d31fb,0x200);
      sVar3 = strlen(local_248);
    }
    iVar7 = 0;
    iVar1 = OPENSSL_sk_num(psVar2);
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(psVar2,iVar7);
        sVar5 = strlen(*(char **)(lVar4 + 8));
        if (0x1ff < sVar5 + sVar3) {
LAB_005f9e30:
          uVar6 = 0;
          goto LAB_005f9e04;
        }
        local_248[sVar3] = '\0';
        OPENSSL_strlcat(local_248,*(undefined8 *)(lVar4 + 8),0x200);
        iVar1 = provider_conf_params
                          (param_1,param_2,local_248,*(undefined8 *)(lVar4 + 0x10),param_5);
        if (iVar1 == 0) goto LAB_005f9e30;
        iVar7 = iVar7 + 1;
        iVar1 = OPENSSL_sk_num(psVar2);
      } while (iVar7 < iVar1);
    }
    uVar6 = 1;
LAB_005f9e04:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

