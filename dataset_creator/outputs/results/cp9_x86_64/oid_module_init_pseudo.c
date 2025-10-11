
undefined8 oid_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  char cVar1;
  char *sn;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  stack_st_CONF_VALUE *psVar5;
  long lVar6;
  char *pcVar7;
  void *__dest;
  undefined8 uVar8;
  char *pcVar9;
  size_t __n;
  int iVar10;
  
  iVar10 = 0;
  pcVar4 = CONF_imodule_get_value(param_1);
  psVar5 = NCONF_get_section(param_2,pcVar4);
  if (psVar5 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn_moid.c",0x20,"oid_module_init");
    ERR_set_error(0xd,0xac,0);
    uVar8 = 0;
  }
  else {
    iVar3 = OPENSSL_sk_num(psVar5);
    if (0 < iVar3) {
      do {
        lVar6 = OPENSSL_sk_value(psVar5,iVar10);
        pcVar4 = *(char **)(lVar6 + 0x10);
        sn = *(char **)(lVar6 + 8);
        pcVar7 = rindex(pcVar4,0x2c);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)0x0;
          pcVar9 = sn;
        }
        else {
          cVar1 = pcVar7[1];
          pcVar2 = pcVar7;
          if (cVar1 == '\0') goto LAB_0061396c;
          while( true ) {
            iVar3 = ossl_ctype_check((int)cVar1,8);
            if (iVar3 == 0) break;
            cVar1 = pcVar2[2];
            pcVar2 = pcVar2 + 1;
          }
          while (iVar3 = ossl_ctype_check((int)*pcVar4,8), iVar3 != 0) {
            pcVar4 = pcVar4 + 1;
          }
          while( true ) {
            pcVar9 = pcVar7 + -1;
            iVar3 = ossl_ctype_check((int)pcVar7[-1],8);
            if (iVar3 == 0) break;
            pcVar7 = pcVar9;
            if (pcVar4 == pcVar9) goto LAB_0061396c;
          }
          __n = (long)pcVar7 - (long)pcVar4;
          __dest = CRYPTO_malloc((int)__n + 1,"../crypto/asn1/asn_moid.c",0x56);
          if (__dest == (void *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/asn1/asn_moid.c",0x57,"do_create");
            ERR_set_error(0xd,0xc0100,0);
            goto LAB_0061396c;
          }
          pcVar7 = (char *)memcpy(__dest,pcVar4,__n);
          pcVar7[__n] = '\0';
          pcVar9 = pcVar7;
          pcVar4 = pcVar2 + 1;
        }
        iVar3 = OBJ_create(pcVar4,sn,pcVar9);
        CRYPTO_free(pcVar7);
        if (iVar3 == 0) {
LAB_0061396c:
          ERR_new();
          ERR_set_debug("../crypto/asn1/asn_moid.c",0x26,"oid_module_init");
          ERR_set_error(0xd,0xab,0);
          return 0;
        }
        iVar10 = iVar10 + 1;
        iVar3 = OPENSSL_sk_num(psVar5);
      } while (iVar10 < iVar3);
    }
    uVar8 = 1;
  }
  return uVar8;
}

