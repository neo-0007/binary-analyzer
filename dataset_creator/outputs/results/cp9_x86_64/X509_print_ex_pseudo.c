
int X509_print_ex(BIO *bp,X509 *x,ulong nmflag,ulong cflag)

{
  byte *pbVar1;
  int iVar2;
  ASN1_INTEGER *a;
  X509_ALGOR *alg;
  X509_NAME *pXVar3;
  undefined8 uVar4;
  long lVar5;
  X509_PUBKEY *pub;
  EVP_PKEY *pkey;
  stack_st_X509_EXTENSION *exts;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  char local_69;
  uint local_68;
  uint local_64;
  ASN1_STRING *local_50;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((uint)nmflag & 0xf0000) == 0x40000) {
    local_69 = '\n';
    local_64 = 0;
    local_68 = 0xc;
  }
  else {
    local_69 = ' ';
    local_64 = (uint)(nmflag == 0);
    local_68 = -(uint)(nmflag == 0) & 0x10;
  }
  if (((cflag & 1) != 0) ||
     ((iVar2 = BIO_write(bp,"Certificate:\n",0xd), 0 < iVar2 &&
      (iVar2 = BIO_write(bp,"    Data:\n",10), 0 < iVar2)))) {
    if ((cflag & 2) == 0) {
      uVar8 = X509_get_version(x);
      if (uVar8 < 3) {
        iVar2 = BIO_printf(bp,"%8sVersion: %ld (0x%lx)\n",&DAT_008343a2,uVar8 + 1,uVar8);
      }
      else {
        iVar2 = BIO_printf(bp,"%8sVersion: Unknown (%ld)\n",&DAT_008343a2,uVar8,uVar8);
      }
      if (iVar2 < 1) goto LAB_00585510;
    }
    uVar8 = (ulong)((uint)cflag & 4);
    if ((cflag & 4) == 0) {
      a = (ASN1_INTEGER *)X509_get0_serialNumber(x);
      iVar2 = BIO_write(bp,"        Serial Number:",0x16);
      if (0 < iVar2) {
        if (a->length < 9) {
          ERR_set_mark();
          lVar5 = ASN1_INTEGER_get(a);
          ERR_pop_to_mark();
          if (lVar5 != -1) {
            puVar6 = &DAT_008343a2;
            if (a->type == 0x102) {
              lVar5 = -lVar5;
              puVar6 = &DAT_0080042c;
            }
            iVar2 = BIO_printf(bp," %s%lu (%s0x%lx)\n",puVar6,lVar5,puVar6,lVar5);
            if (0 < iVar2) goto LAB_005853c6;
            goto LAB_00585510;
          }
        }
        iVar2 = BIO_printf(bp,"\n%12s%s");
        while (0 < iVar2) {
          if (a->length <= (int)uVar8) goto LAB_005853c6;
          pbVar1 = a->data + uVar8;
          uVar8 = uVar8 + 1;
          iVar2 = BIO_printf(bp,"%02x%c",(ulong)*pbVar1);
        }
      }
    }
    else {
LAB_005853c6:
      if ((cflag & 8) == 0) {
        alg = (X509_ALGOR *)X509_get0_tbs_sigalg(x);
        iVar2 = BIO_puts(bp,"    ");
        if ((iVar2 < 1) || (iVar2 = X509_signature_print(bp,alg,(ASN1_STRING *)0x0), iVar2 < 1))
        goto LAB_00585510;
      }
      if ((cflag & 0x10) == 0) {
        iVar2 = BIO_printf(bp,"        Issuer:%c",(ulong)(uint)(int)local_69);
        if (0 < iVar2) {
          pXVar3 = X509_get_issuer_name(x);
          iVar2 = X509_NAME_print_ex(bp,pXVar3,local_68,nmflag);
          if (((int)local_64 <= iVar2) && (iVar2 = BIO_write(bp,&DAT_0081a1ca,1), 0 < iVar2))
          goto LAB_005853d8;
        }
      }
      else {
LAB_005853d8:
        if ((cflag & 0x20) == 0) {
          iVar2 = BIO_write(bp,"        Validity\n",0x11);
          if ((0 < iVar2) && (iVar2 = BIO_write(bp,"            Not Before: ",0x18), 0 < iVar2)) {
            uVar4 = X509_get0_notBefore(x);
            iVar2 = ossl_asn1_time_print_ex(bp,uVar4,0);
            if ((iVar2 != 0) && (iVar2 = BIO_write(bp,"\n            Not After : ",0x19), 0 < iVar2)
               ) {
              uVar4 = X509_get0_notAfter(x);
              iVar2 = ossl_asn1_time_print_ex(bp,uVar4,0);
              if ((iVar2 != 0) && (iVar2 = BIO_write(bp,&DAT_0081a1ca,1), 0 < iVar2))
              goto LAB_005853e1;
            }
          }
        }
        else {
LAB_005853e1:
          if ((cflag & 0x40) == 0) {
            iVar2 = BIO_printf(bp,"        Subject:%c",(ulong)(uint)(int)local_69);
            if (0 < iVar2) {
              pXVar3 = X509_get_subject_name(x);
              iVar2 = X509_NAME_print_ex(bp,pXVar3,local_68,nmflag);
              if (((int)local_64 <= iVar2) && (iVar2 = BIO_write(bp,&DAT_0081a1ca,1), 0 < iVar2))
              goto LAB_005853ea;
            }
          }
          else {
LAB_005853ea:
            if ((cflag & 0x80) == 0) {
              pub = (X509_PUBKEY *)X509_get_X509_PUBKEY(x);
              X509_PUBKEY_get0_param(&local_48,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,pub);
              iVar2 = BIO_write(bp,"        Subject Public Key Info:\n",0x21);
              if ((((iVar2 < 1) ||
                   (iVar2 = BIO_printf(bp,"%12sPublic Key Algorithm: ",&DAT_008343a2), iVar2 < 1))
                  || (iVar2 = i2a_ASN1_OBJECT(bp,local_48), iVar2 < 1)) ||
                 (iVar2 = BIO_puts(bp,"\n"), iVar2 < 1)) goto LAB_00585510;
              pkey = (EVP_PKEY *)X509_get0_pubkey(x);
              if (pkey == (EVP_PKEY *)0x0) {
                BIO_printf(bp,"%12sUnable to load Public Key\n",&DAT_008343a2);
                ERR_print_errors(bp);
              }
              else {
                EVP_PKEY_print_public(bp,pkey,0x10,(ASN1_PCTX *)0x0);
              }
            }
            if (((cflag & 0x1000) != 0) ||
               (((X509_get0_uids(x,&local_50,&local_48), local_50 == (ASN1_STRING *)0x0 ||
                 ((iVar2 = BIO_printf(bp,"%8sIssuer Unique ID: ",&DAT_008343a2), 0 < iVar2 &&
                  (iVar2 = X509_signature_dump(bp,local_50,0xc), iVar2 != 0)))) &&
                ((local_48 == (ASN1_OBJECT *)0x0 ||
                 ((iVar2 = BIO_printf(bp,"%8sSubject Unique ID: ",&DAT_008343a2), 0 < iVar2 &&
                  (iVar2 = X509_signature_dump(bp,(ASN1_STRING *)local_48,0xc), iVar2 != 0)))))))) {
              if ((cflag & 0x100) == 0) {
                exts = (stack_st_X509_EXTENSION *)X509_get0_extensions(x);
                iVar2 = X509V3_extensions_print(bp,"X509v3 extensions",exts,cflag,8);
                if (iVar2 == 0) goto LAB_00585510;
              }
              if ((cflag & 0x200) == 0) {
                X509_get0_signature(&local_48,&local_50,x);
                iVar2 = X509_signature_print(bp,(X509_ALGOR *)local_50,(ASN1_STRING *)local_48);
                if (iVar2 < 1) goto LAB_00585510;
              }
              uVar7 = 1;
              if ((cflag & 0x400) == 0) {
                iVar2 = X509_aux_print(bp,x,0);
                uVar7 = (uint)(iVar2 != 0);
              }
              goto LAB_00585513;
            }
          }
        }
      }
    }
  }
LAB_00585510:
  uVar7 = 0;
LAB_00585513:
  CRYPTO_free((void *)0x0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

