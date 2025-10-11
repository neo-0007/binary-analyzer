
GENERAL_NAME *
a2i_GENERAL_NAME(GENERAL_NAME *out,X509V3_EXT_METHOD *method,X509V3_CTX *ctx,int gen_type,
                char *value,int is_nc)

{
  int iVar1;
  ASN1_IA5STRING *str;
  size_t sVar2;
  X509_NAME *nm;
  stack_st_CONF_VALUE *dn_sk;
  ASN1_OCTET_STRING *pAVar3;
  ASN1_OBJECT *pAVar4;
  char *pcVar5;
  OTHERNAME *pOVar6;
  ASN1_TYPE *pAVar7;
  GENERAL_NAME *a;
  
  if (value == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x205,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x7c,0);
    return (GENERAL_NAME *)0x0;
  }
  a = out;
  if ((out == (GENERAL_NAME *)0x0) && (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x20e,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0xc0100,0);
    return (GENERAL_NAME *)0x0;
  }
  switch(gen_type) {
  case 0:
    pcVar5 = strchr(value,0x3b);
    if (pcVar5 != (char *)0x0) {
      pOVar6 = OTHERNAME_new();
      (a->d).otherName = pOVar6;
      if (pOVar6 != (OTHERNAME *)0x0) {
        ASN1_TYPE_free(pOVar6->value);
        pOVar6 = (a->d).otherName;
        pAVar7 = ASN1_generate_v3(pcVar5 + 1,ctx);
        pOVar6->value = pAVar7;
        if ((pAVar7 != (ASN1_TYPE *)0x0) &&
           (pcVar5 = (char *)CRYPTO_strndup(value,(long)((int)pcVar5 - (int)value),
                                            "../crypto/x509/v3_san.c",0x290), pcVar5 != (char *)0x0)
           ) {
          pOVar6 = (a->d).otherName;
          pAVar4 = OBJ_txt2obj(pcVar5,0);
          pOVar6->type_id = pAVar4;
          CRYPTO_free(pcVar5);
          if (((a->d).otherName)->type_id != (ASN1_OBJECT *)0x0) goto LAB_0060f518;
        }
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x23b,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x93,0);
    break;
  case 1:
  case 2:
  case 6:
    str = ASN1_IA5STRING_new();
    (a->d).rfc822Name = str;
    if (str != (ASN1_IA5STRING *)0x0) {
      sVar2 = strlen(value);
      iVar1 = ASN1_STRING_set(str,value,(int)sVar2);
      if (iVar1 != 0) goto LAB_0060f518;
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x248,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0xc0100,0);
    break;
  default:
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x240,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0xa7,0);
    break;
  case 4:
    nm = X509_NAME_new();
    if (nm == (X509_NAME *)0x0) {
      dn_sk = (stack_st_CONF_VALUE *)0x0;
    }
    else {
      dn_sk = X509V3_get_section(ctx,value);
      if (dn_sk == (stack_st_CONF_VALUE *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_san.c",0x2a4,"do_dirname");
        ERR_set_error(0x22,0x96,"section=%s",value);
      }
      else {
        iVar1 = X509V3_NAME_from_section(nm,dn_sk,0x1001);
        if (iVar1 != 0) {
          (a->d).directoryName = nm;
          X509V3_section_free(ctx,dn_sk);
          goto LAB_0060f518;
        }
      }
    }
    X509_NAME_free(nm);
    X509V3_section_free(ctx,dn_sk);
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x234,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x95,0);
    break;
  case 7:
    if (is_nc == 0) {
      pAVar3 = a2i_IPADDRESS(value);
    }
    else {
      pAVar3 = a2i_IPADDRESS_NC(value);
    }
    (a->d).iPAddress = pAVar3;
    if (pAVar3 != (ASN1_OCTET_STRING *)0x0) {
LAB_0060f518:
      a->type = gen_type;
      return a;
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x22c,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x76,"value=%s",value);
    break;
  case 8:
    pAVar4 = OBJ_txt2obj(value,0);
    if (pAVar4 != (ASN1_OBJECT *)0x0) {
      (a->d).registeredID = pAVar4;
      goto LAB_0060f518;
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_san.c",0x21e,"a2i_GENERAL_NAME");
    ERR_set_error(0x22,0x77,"value=%s",value);
  }
  if (out == (GENERAL_NAME *)0x0) {
    GENERAL_NAME_free(a);
  }
  return (GENERAL_NAME *)0x0;
}

