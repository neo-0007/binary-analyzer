
stack_st_CONF_VALUE *
i2v_GENERAL_NAME(X509V3_EXT_METHOD *method,GENERAL_NAME *gen,stack_st_CONF_VALUE *ret)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  ASN1_STRING *pAVar4;
  long in_FS_OFFSET;
  stack_st_CONF_VALUE *local_260;
  char local_258 [256];
  char local_158 [312];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_260 = ret;
  switch(gen->type) {
  case 0:
    iVar2 = OBJ_obj2nid(((gen->d).otherName)->type_id);
    if (iVar2 == 0x4b9) {
      pAVar4 = ((gen->d).ediPartyName)->partyName;
      if (pAVar4->length == 0xc) {
        piVar1 = (int *)pAVar4->data;
        iVar2 = x509v3_add_len_value_uchar
                          ("othername: XmppAddr:",*(undefined8 *)(piVar1 + 2),(long)*piVar1,
                           &local_260);
        ret = local_260;
        if (iVar2 == 0) {
          ret = (stack_st_CONF_VALUE *)0x0;
        }
        break;
      }
    }
    else if (iVar2 < 0x4ba) {
      if (iVar2 == 0x289) {
        pAVar4 = ((gen->d).ediPartyName)->partyName;
        if (pAVar4->length == 0xc) {
          piVar1 = (int *)pAVar4->data;
          iVar2 = x509v3_add_len_value_uchar
                            ("othername: UPN:",*(undefined8 *)(piVar1 + 2),(long)*piVar1,&local_260)
          ;
          ret = local_260;
          if (iVar2 == 0) {
            ret = (stack_st_CONF_VALUE *)0x0;
          }
          break;
        }
      }
      else {
        if (iVar2 != 0x4b8) {
LAB_0060ef20:
          iVar2 = OBJ_obj2txt(local_258,0x100,((gen->d).otherName)->type_id,0);
          if (iVar2 < 1) {
            OPENSSL_strlcpy(local_158,"othername:",300);
          }
          else {
            BIO_snprintf(local_158,300,"othername: %s:",local_258);
          }
          pAVar4 = ((gen->d).ediPartyName)->partyName;
          iVar2 = pAVar4->length;
          if (iVar2 == 0x16) {
            iVar2 = x509v3_add_len_value_uchar
                              (local_158,*(undefined8 *)((long)pAVar4->data + 8),
                               (long)*(int *)pAVar4->data,&local_260);
            ret = local_260;
            if (iVar2 != 0) break;
            pAVar4 = (ASN1_STRING *)((gen->d).otherName)->value;
            iVar2 = pAVar4->length;
          }
          if (((iVar2 != 0xc) ||
              (iVar2 = x509v3_add_len_value_uchar
                                 (local_158,*(undefined8 *)((long)pAVar4->data + 8),
                                  (long)*(int *)pAVar4->data,&local_260), ret = local_260,
              iVar2 == 0)) &&
             (iVar2 = X509V3_add_value(local_158,"<unsupported>",&local_260), ret = local_260,
             iVar2 == 0)) {
            ret = (stack_st_CONF_VALUE *)0x0;
          }
          break;
        }
        pAVar4 = ((gen->d).ediPartyName)->partyName;
        if (pAVar4->length == 0xc) {
          piVar1 = (int *)pAVar4->data;
          iVar2 = x509v3_add_len_value_uchar
                            ("othername: SmtpUTF8Mailbox:",*(undefined8 *)(piVar1 + 2),(long)*piVar1
                             ,&local_260);
          ret = local_260;
          if (iVar2 == 0) {
            ret = (stack_st_CONF_VALUE *)0x0;
          }
          break;
        }
      }
    }
    else if (iVar2 == 0x4ba) {
      pAVar4 = ((gen->d).ediPartyName)->partyName;
      if (pAVar4->length == 0x16) {
        piVar1 = (int *)pAVar4->data;
        iVar2 = x509v3_add_len_value_uchar
                          ("othername: SRVName:",*(undefined8 *)(piVar1 + 2),(long)*piVar1,
                           &local_260);
        ret = local_260;
        if (iVar2 == 0) {
          ret = (stack_st_CONF_VALUE *)0x0;
        }
        break;
      }
    }
    else {
      if (iVar2 != 0x4bb) goto LAB_0060ef20;
      pAVar4 = ((gen->d).ediPartyName)->partyName;
      if (pAVar4->length == 0xc) {
        piVar1 = (int *)pAVar4->data;
        iVar2 = x509v3_add_len_value_uchar
                          ("othername: NAIRealm:",*(undefined8 *)(piVar1 + 2),(long)*piVar1,
                           &local_260);
        ret = local_260;
        if (iVar2 == 0) {
          ret = (stack_st_CONF_VALUE *)0x0;
        }
        break;
      }
    }
    goto LAB_0060ecde;
  case 1:
    iVar2 = x509v3_add_len_value_uchar
                      ("email",((gen->d).rfc822Name)->data,(long)((gen->d).rfc822Name)->length,
                       &local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 2:
    iVar2 = x509v3_add_len_value_uchar
                      (&DAT_008024fd,((gen->d).rfc822Name)->data,(long)((gen->d).rfc822Name)->length
                       ,&local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 3:
    iVar2 = X509V3_add_value("X400Name","<unsupported>",&local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 4:
    pcVar3 = X509_NAME_oneline((gen->d).directoryName,local_258,0x100);
    if (pcVar3 != (char *)0x0) {
      iVar2 = X509V3_add_value("DirName",local_258,&local_260);
      ret = local_260;
      if (iVar2 == 0) {
        ret = (stack_st_CONF_VALUE *)0x0;
      }
      break;
    }
    goto LAB_0060ecde;
  case 5:
    iVar2 = X509V3_add_value("EdiPartyName","<unsupported>",&local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 6:
    iVar2 = x509v3_add_len_value_uchar
                      (&DAT_00811a66,((gen->d).rfc822Name)->data,(long)((gen->d).rfc822Name)->length
                       ,&local_260);
    ret = local_260;
    if (iVar2 == 0) {
      ret = (stack_st_CONF_VALUE *)0x0;
    }
    break;
  case 7:
    pcVar3 = (char *)ossl_ipaddr_to_asc(((gen->d).rfc822Name)->data,((gen->d).rfc822Name)->length);
    if ((pcVar3 == (char *)0x0) ||
       (iVar2 = X509V3_add_value("IP Address",pcVar3,&local_260), iVar2 == 0)) {
      local_260 = (stack_st_CONF_VALUE *)0x0;
    }
    CRYPTO_free(pcVar3);
    ret = local_260;
    break;
  case 8:
    i2t_ASN1_OBJECT(local_258,0x100,(gen->d).registeredID);
    iVar2 = X509V3_add_value("Registered ID",local_258,&local_260);
    ret = local_260;
    if (iVar2 != 0) break;
LAB_0060ecde:
    ret = (stack_st_CONF_VALUE *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return ret;
}

