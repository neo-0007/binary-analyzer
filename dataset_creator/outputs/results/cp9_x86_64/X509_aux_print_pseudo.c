
undefined8 X509_aux_print(BIO *param_1,X509 *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ASN1_OBJECT *pAVar5;
  uchar *puVar6;
  char *pcVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  int local_a0;
  uint local_9c;
  char local_98 [88];
  long local_40;
  
  uVar8 = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = X509_trusted(param_2);
  if (iVar2 == 0) goto LAB_0058506a;
  lVar3 = X509_get0_trust_objects(param_2);
  lVar4 = X509_get0_reject_objects(param_2);
  if (lVar3 == 0) {
    BIO_printf(param_1,"%*sNo Trusted Uses.\n",uVar8,&DAT_008343a2);
    if (lVar4 != 0) goto LAB_00585170;
LAB_0058532c:
    BIO_printf(param_1,"%*sNo Rejected Uses.\n",uVar8,&DAT_008343a2);
  }
  else {
    BIO_printf(param_1,"%*sTrusted Uses:\n%*s",uVar8,&DAT_008343a2,(ulong)(param_3 + 2));
    bVar1 = true;
    local_9c = 0;
    while (iVar2 = OPENSSL_sk_num(lVar3), (int)local_9c < iVar2) {
      if (!bVar1) {
        BIO_puts(param_1,", ");
      }
      pAVar5 = (ASN1_OBJECT *)OPENSSL_sk_value(lVar3,local_9c);
      OBJ_obj2txt(local_98,0x50,pAVar5,0);
      bVar1 = false;
      BIO_puts(param_1,local_98);
      local_9c = local_9c + 1;
    }
    BIO_puts(param_1,"\n");
    if (lVar4 == 0) goto LAB_0058532c;
LAB_00585170:
    bVar1 = true;
    BIO_printf(param_1,"%*sRejected Uses:\n%*s",uVar8,&DAT_008343a2,(ulong)(param_3 + 2),
               &DAT_008343a2);
    local_9c = 0;
    while (iVar2 = OPENSSL_sk_num(lVar4), (int)local_9c < iVar2) {
      if (!bVar1) {
        BIO_puts(param_1,", ");
      }
      pAVar5 = (ASN1_OBJECT *)OPENSSL_sk_value(lVar4,local_9c);
      OBJ_obj2txt(local_98,0x50,pAVar5,0);
      bVar1 = false;
      BIO_puts(param_1,local_98);
      local_9c = local_9c + 1;
    }
    BIO_puts(param_1,"\n");
  }
  puVar6 = X509_alias_get0(param_2,(int *)&local_9c);
  if (puVar6 != (uchar *)0x0) {
    BIO_printf(param_1,"%*sAlias: %.*s\n",(ulong)param_3,&DAT_008343a2,(ulong)local_9c,puVar6);
  }
  puVar6 = X509_keyid_get0(param_2,&local_a0);
  if (puVar6 != (uchar *)0x0) {
    BIO_printf(param_1,"%*sKey Id: ",(ulong)param_3,&DAT_008343a2);
    local_9c = 0;
    if (0 < local_a0) {
      do {
        pcVar7 = "";
        if (local_9c != 0) {
          pcVar7 = ":";
        }
        BIO_printf(param_1,"%s%02X",pcVar7,(ulong)puVar6[(int)local_9c]);
        local_9c = local_9c + 1;
      } while ((int)local_9c < local_a0);
    }
    BIO_write(param_1,&DAT_0081a1ca,1);
  }
LAB_0058506a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return 1;
}

