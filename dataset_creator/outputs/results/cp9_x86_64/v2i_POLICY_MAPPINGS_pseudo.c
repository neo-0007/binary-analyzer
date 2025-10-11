
long v2i_POLICY_MAPPINGS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ASN1_OBJECT *a;
  ASN1_OBJECT *a_00;
  POLICY_MAPPING *pPVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_pmaps.c",0x4c,"v2i_POLICY_MAPPINGS");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(param_3);
        if ((*(long *)(lVar4 + 0x10) == 0) || (*(char **)(lVar4 + 8) == (char *)0x0)) {
          ERR_new();
          a_00 = (ASN1_OBJECT *)0x0;
          a = (ASN1_OBJECT *)0x0;
          ERR_set_debug("../crypto/x509/v3_pmaps.c",0x53,"v2i_POLICY_MAPPINGS");
          ERR_set_error(0x22,0x6e,&DAT_007d9761,*(undefined8 *)(lVar4 + 8));
LAB_0060e916:
          ASN1_OBJECT_free(a);
          ASN1_OBJECT_free(a_00);
          OPENSSL_sk_pop_free(lVar2,POLICY_MAPPING_free);
          return 0;
        }
        a = OBJ_txt2obj(*(char **)(lVar4 + 8),0);
        a_00 = OBJ_txt2obj(*(char **)(lVar4 + 0x10),0);
        if ((a == (ASN1_OBJECT *)0x0) || (a_00 == (ASN1_OBJECT *)0x0)) {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_pmaps.c",0x5a,"v2i_POLICY_MAPPINGS");
          ERR_set_error(0x22,0x6e,&DAT_007d9761,*(undefined8 *)(lVar4 + 8));
          goto LAB_0060e916;
        }
        pPVar3 = POLICY_MAPPING_new();
        if (pPVar3 == (POLICY_MAPPING *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_pmaps.c",0x60,"v2i_POLICY_MAPPINGS");
          ERR_set_error(0x22,0xc0100,0);
          goto LAB_0060e916;
        }
        pPVar3->issuerDomainPolicy = a;
        iVar5 = iVar5 + 1;
        pPVar3->subjectDomainPolicy = a_00;
        OPENSSL_sk_push(lVar2);
      } while (iVar1 != iVar5);
    }
  }
  return lVar2;
}

