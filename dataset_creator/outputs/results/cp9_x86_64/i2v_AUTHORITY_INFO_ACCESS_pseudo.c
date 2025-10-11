
stack_st_CONF_VALUE *
i2v_AUTHORITY_INFO_ACCESS
          (X509V3_EXT_METHOD *param_1,undefined8 param_2,stack_st_CONF_VALUE *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  stack_st_CONF_VALUE *psVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  char *buf;
  stack_st_CONF_VALUE *ret;
  stack_st_CONF_VALUE *psVar7;
  int iVar8;
  long in_FS_OFFSET;
  char local_98 [88];
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ret = param_3;
  do {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar8) {
      if (param_3 == (stack_st_CONF_VALUE *)0x0 && ret == (stack_st_CONF_VALUE *)0x0) {
        ret = (stack_st_CONF_VALUE *)OPENSSL_sk_new_null();
      }
LAB_0060b903:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return ret;
    }
    puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
    psVar3 = i2v_GENERAL_NAME(param_1,(GENERAL_NAME *)puVar2[1],ret);
    psVar7 = ret;
    if (psVar3 == (stack_st_CONF_VALUE *)0x0) {
LAB_0060b93c:
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_info.c",0x5e,"i2v_AUTHORITY_INFO_ACCESS");
      ERR_set_error(0x22,0xc0100,0);
      if ((param_3 == (stack_st_CONF_VALUE *)0x0) && (psVar7 != (stack_st_CONF_VALUE *)0x0)) {
        ret = (stack_st_CONF_VALUE *)0x0;
        OPENSSL_sk_pop_free(psVar7,X509V3_conf_free);
      }
      else {
        ret = (stack_st_CONF_VALUE *)0x0;
      }
      goto LAB_0060b903;
    }
    lVar4 = OPENSSL_sk_value(psVar3,iVar8);
    i2t_ASN1_OBJECT(local_98,0x50,(ASN1_OBJECT *)*puVar2);
    sVar5 = strlen(local_98);
    sVar6 = strlen(*(char **)(lVar4 + 8));
    iVar1 = (int)sVar5 + 4 + (int)sVar6;
    buf = (char *)CRYPTO_malloc(iVar1,"../crypto/x509/v3_info.c",0x52);
    psVar7 = psVar3;
    if (buf == (char *)0x0) goto LAB_0060b93c;
    iVar8 = iVar8 + 1;
    BIO_snprintf(buf,(long)iVar1,"%s - %s",local_98,*(undefined8 *)(lVar4 + 8));
    CRYPTO_free(*(void **)(lVar4 + 8));
    *(char **)(lVar4 + 8) = buf;
    ret = psVar3;
  } while( true );
}

