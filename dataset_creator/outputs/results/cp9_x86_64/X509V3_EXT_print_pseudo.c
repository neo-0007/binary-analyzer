
int X509V3_EXT_print(BIO *out,X509_EXTENSION *ext,ulong flag,int indent)

{
  int iVar1;
  uint uVar2;
  ASN1_OCTET_STRING *x;
  X509V3_EXT_METHOD *method;
  ASN1_ITEM *pAVar3;
  ASN1_VALUE *val;
  char *ptr;
  stack_st_CONF_VALUE *val_00;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  x = X509_EXTENSION_get_data(ext);
  local_48 = (uchar *)ASN1_STRING_get0_data(x);
  iVar1 = ASN1_STRING_length(x);
  method = X509V3_EXT_get(ext);
  uVar4 = 0;
  if (method != (X509V3_EXT_METHOD *)0x0) {
    if (method->it == (ASN1_ITEM_EXP *)0x0) {
      val = (ASN1_VALUE *)(*method->d2i)((void *)0x0,&local_48,(long)iVar1);
    }
    else {
      pAVar3 = (ASN1_ITEM *)(*(code *)method->it)();
      val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_48,(long)iVar1,pAVar3);
    }
    if (val != (ASN1_VALUE *)0x0) {
      if (method->i2s == (X509V3_EXT_I2S)0x0) {
        if (method->i2v == (X509V3_EXT_I2V)0x0) {
          if (method->i2r == (X509V3_EXT_I2R)0x0) {
            uVar2 = 0;
            val_00 = (stack_st_CONF_VALUE *)0x0;
            ptr = (char *)0x0;
          }
          else {
            iVar1 = (*method->i2r)(method,val,out,indent);
            uVar2 = (uint)(iVar1 != 0);
            val_00 = (stack_st_CONF_VALUE *)0x0;
            ptr = (char *)0x0;
          }
        }
        else {
          val_00 = (*method->i2v)(method,val,(stack_st_CONF_VALUE *)0x0);
          if (val_00 == (stack_st_CONF_VALUE *)0x0) {
            ptr = (char *)0x0;
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
            ptr = (char *)0x0;
            X509V3_EXT_val_prn(out,val_00,indent,method->ext_flags & 4);
          }
        }
      }
      else {
        ptr = (*method->i2s)(method,val);
        if (ptr == (char *)0x0) {
          val_00 = (stack_st_CONF_VALUE *)0x0;
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
          val_00 = (stack_st_CONF_VALUE *)0x0;
          BIO_printf(out,"%*s%s",(ulong)(uint)indent,&DAT_008343a2,ptr);
        }
      }
      OPENSSL_sk_pop_free(val_00,X509V3_conf_free);
      CRYPTO_free(ptr);
      if (method->it == (ASN1_ITEM_EXP *)0x0) {
        (*method->ext_free)(val);
      }
      else {
        pAVar3 = (ASN1_ITEM *)(*(code *)method->it)();
        ASN1_item_free(val,pAVar3);
      }
      goto LAB_00586396;
    }
    uVar4 = 1;
  }
  uVar2 = unknown_ext_print(out,local_48,iVar1,flag,indent,uVar4);
LAB_00586396:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

