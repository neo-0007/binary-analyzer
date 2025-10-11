
void print_qualifiers(BIO *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  char *buf;
  ASN1_INTEGER *aint;
  undefined *puVar7;
  int iVar8;
  
  iVar8 = 0;
  do {
    iVar4 = OPENSSL_sk_num(param_2);
    if (iVar4 <= iVar8) {
      return;
    }
    if (iVar8 != 0) {
      BIO_puts(param_1,"\n");
    }
    puVar6 = (undefined8 *)OPENSSL_sk_value(param_2,iVar8);
    iVar4 = OBJ_obj2nid((ASN1_OBJECT *)*puVar6);
    if (iVar4 == 0xa4) {
      BIO_printf(param_1,"%*sCPS: %.*s",(ulong)param_3,&DAT_008343a2,(ulong)*(uint *)puVar6[1],
                 *(undefined8 *)((uint *)puVar6[1] + 2));
    }
    else if (iVar4 == 0xa5) {
      BIO_printf(param_1,"%*sUser Notice:\n",(ulong)param_3,&DAT_008343a2);
      puVar6 = (undefined8 *)puVar6[1];
      uVar1 = param_3 + 2;
      puVar2 = (undefined8 *)*puVar6;
      if (puVar2 != (undefined8 *)0x0) {
        BIO_printf(param_1,"%*sOrganization: %.*s\n",(ulong)uVar1,&DAT_008343a2,
                   (ulong)*(uint *)*puVar2,*(undefined8 *)((uint *)*puVar2 + 2));
        iVar4 = OPENSSL_sk_num(puVar2[1]);
        puVar7 = &DAT_007d9762;
        if (iVar4 < 2) {
          puVar7 = &DAT_008343a2;
        }
        BIO_printf(param_1,"%*sNumber%s: ",(ulong)uVar1,&DAT_008343a2,puVar7);
        for (iVar4 = 0; iVar5 = OPENSSL_sk_num(puVar2[1]), iVar4 < iVar5; iVar4 = iVar4 + 1) {
          aint = (ASN1_INTEGER *)OPENSSL_sk_value(puVar2[1],iVar4);
          if (iVar4 == 0) {
            if (aint == (ASN1_INTEGER *)0x0) goto LAB_00608efc;
LAB_00608e8d:
            buf = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,aint);
            if (buf == (char *)0x0) goto LAB_00608dae;
            BIO_puts(param_1,buf);
            CRYPTO_free(buf);
          }
          else {
            BIO_puts(param_1,", ");
            if (aint != (ASN1_INTEGER *)0x0) goto LAB_00608e8d;
LAB_00608efc:
            BIO_puts(param_1,"(null)");
          }
        }
        if (puVar6[1] == 0) goto LAB_00608dae;
        BIO_puts(param_1,"\n");
      }
      puVar3 = (uint *)puVar6[1];
      if (puVar3 != (uint *)0x0) {
        BIO_printf(param_1,"%*sExplicit Text: %.*s",(ulong)uVar1,&DAT_008343a2,(ulong)*puVar3,
                   *(undefined8 *)(puVar3 + 2));
      }
    }
    else {
      BIO_printf(param_1,"%*sUnknown Qualifier: ",(ulong)(param_3 + 2),&DAT_008343a2);
      i2a_ASN1_OBJECT(param_1,(ASN1_OBJECT *)*puVar6);
    }
LAB_00608dae:
    iVar8 = iVar8 + 1;
  } while( true );
}

