
uint asn1_parse2(BIO *param_1,long *param_2,long param_3,int param_4,uint param_5,int param_6,
                int param_7)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  char *buf;
  BIO_METHOD *type;
  BIO *bp;
  ASN1_OBJECT *pAVar14;
  ASN1_ENUMERATED *a;
  char *format;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  ASN1_STRING *a_00;
  long in_FS_OFFSET;
  BIO *local_168;
  uint local_134;
  long local_130;
  int local_f0;
  uint local_ec;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  ASN1_OBJECT *local_d0;
  char local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = (ASN1_OBJECT *)0x0;
  if (param_5 == 0x81) {
    uVar11 = 0;
    BIO_puts(param_1,"BAD RECURSION DEPTH\n");
    goto LAB_005a697f;
  }
  local_e8 = (byte *)*param_2;
  pbVar1 = local_e8 + param_3;
  if (0 < param_3) {
    uVar7 = 0;
    if (param_6 != 0) {
      uVar7 = param_5;
    }
LAB_005a6386:
    pbVar15 = local_e8;
    uVar8 = ASN1_get_object(&local_e8,(long *)&local_d8,&local_f0,(int *)&local_ec,param_3);
    uVar4 = local_ec;
    iVar10 = local_f0;
    if ((uVar8 & 0x80) != 0) {
      a_00 = (ASN1_STRING *)0x0;
      uVar11 = 0;
      BIO_puts(param_1,"Error in encoding\n");
      a = (ASN1_STRING *)0x0;
      local_168 = (BIO *)0x0;
      goto LAB_005a6949;
    }
    buf = local_c8;
    lVar18 = (long)((int)local_e8 - (int)pbVar15);
    param_3 = param_3 - lVar18;
    pcVar12 = "prim: ";
    if ((uVar8 & 0x20) != 0) {
      pcVar12 = "cons: ";
    }
    if (uVar8 == 0x21) {
      format = "%5ld:d=%-2d hl=%ld l=inf  %s";
    }
    else {
      format = "%5ld:d=%-2d hl=%ld l=%4ld %s";
      pcVar12 = (char *)local_d8;
    }
    iVar9 = BIO_snprintf(buf,0x80,format,pbVar15 + ((long)param_4 - *param_2),(ulong)param_5,lVar18,
                         pcVar12);
    uVar11 = 0;
    if (iVar9 < 1) {
      a_00 = (ASN1_STRING *)0x0;
      BIO_free((BIO *)0x0);
      a = (ASN1_STRING *)0x0;
      local_168 = (BIO *)0x0;
      goto LAB_005a6949;
    }
    if (param_1 == (BIO *)0x0) {
      local_168 = (BIO *)0x0;
      bp = (BIO *)0x0;
      bVar3 = false;
      local_130 = -1;
LAB_005a66ad:
      pcVar12 = "priv [ %d ] ";
      if ((uVar4 & 0xc0) == 0xc0) {
LAB_005a6707:
        BIO_snprintf(buf,0x80,pcVar12);
      }
      else {
        if ((uVar4 & 0x80) != 0) {
          pcVar12 = "cont [ %d ]";
          goto LAB_005a6707;
        }
        pcVar12 = "appl [ %d ]";
        if (((uVar4 & 0x40) != 0) || (pcVar12 = "<ASN1 %d>", 0x1e < iVar10)) goto LAB_005a6707;
        buf = ASN1_tag2str(iVar10);
      }
      iVar10 = BIO_printf(bp,"%-18s",buf);
      local_134 = (uint)(0 < iVar10);
    }
    else {
      lVar13 = BIO_ctrl(param_1,0x4f,0,buf);
      if (lVar13 < 1) {
        type = (BIO_METHOD *)BIO_f_prefix();
        local_168 = BIO_new(type);
        if (local_168 == (BIO *)0x0) {
          a_00 = (ASN1_STRING *)0x0;
          BIO_free((BIO *)0x0);
          a = (ASN1_STRING *)0x0;
          local_168 = (BIO *)0x0;
          goto LAB_005a6949;
        }
        bp = BIO_push(local_168,param_1);
        if (bp == (BIO *)0x0) {
          BIO_free(local_168);
          a = (ASN1_STRING *)0x0;
          local_168 = (BIO *)0x0;
          a_00 = (ASN1_STRING *)0x0;
          goto LAB_005a6949;
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
        local_168 = (BIO *)0x0;
        bp = param_1;
      }
      local_130 = BIO_ctrl(bp,0x51,0,(void *)0x0);
      lVar13 = BIO_ctrl(bp,0x4f,0,buf);
      local_134 = 0;
      if ((0 < lVar13) && (lVar13 = BIO_ctrl(bp,0x50,(long)(int)uVar7,(void *)0x0), -1 < lVar13))
      goto LAB_005a66ad;
    }
    if (-1 < local_130) {
      BIO_ctrl(bp,0x50,local_130,(void *)0x0);
    }
    if (bVar3) {
      BIO_pop(bp);
    }
    BIO_free(local_168);
    pbVar6 = local_d8;
    pbVar5 = local_e8;
    if (local_134 == 0) {
LAB_005a70f5:
      uVar11 = 0;
      a = (ASN1_STRING *)0x0;
      a_00 = (ASN1_STRING *)0x0;
      local_168 = (BIO *)0x0;
      goto LAB_005a6949;
    }
    if ((uVar8 & 0x20) != 0) {
      iVar10 = BIO_write(param_1,&DAT_0081a1ca,1);
      if (iVar10 < 1) goto LAB_005a6a40;
      if ((long)local_d8 <= param_3) {
        if ((local_d8 == (byte *)0x0) && (uVar8 == 0x21)) {
          do {
            uVar11 = asn1_parse2(param_1,&local_e8,(long)pbVar1 - (long)local_e8,
                                 ((int)local_e8 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                 param_7);
            if (uVar11 == 0) goto LAB_005a6ab8;
          } while ((uVar11 != 2) && (local_e8 < pbVar1));
          local_d8 = local_e8 + -(long)pbVar5;
        }
        else {
          pbVar15 = local_e8;
          pbVar19 = local_d8;
          while (local_e8 = pbVar15, pbVar15 < pbVar5 + (long)pbVar6) {
            uVar11 = asn1_parse2(param_1,&local_e8,pbVar19,((int)pbVar15 - (int)*param_2) + param_4,
                                 param_5 + 1,param_6,param_7);
            if (uVar11 == 0) goto LAB_005a6ab8;
            pbVar19 = pbVar19 + -((long)local_e8 - (long)pbVar15);
            pbVar15 = local_e8;
          }
        }
        goto LAB_005a6600;
      }
      a_00 = (ASN1_STRING *)0x0;
      BIO_printf(param_1,"length is greater than %ld\n",param_3);
      a = (ASN1_STRING *)0x0;
      local_168 = (BIO *)0x0;
      goto LAB_005a6949;
    }
    if (local_ec != 0) {
      local_e8 = local_e8 + (long)local_d8;
      iVar10 = BIO_write(param_1,&DAT_0081a1ca,1);
      if (iVar10 < 1) goto LAB_005a70f5;
      goto LAB_005a6600;
    }
    uVar11 = 0;
    if ((local_f0 - 0x13U < 2) || (local_f0 == 0x16)) {
LAB_005a69f0:
      iVar10 = BIO_write(param_1,":",1);
      if (0 < iVar10) {
        if (0 < (long)local_d8) {
          iVar10 = BIO_write(param_1,local_e8,(int)local_d8);
          if (iVar10 != (int)local_d8) goto LAB_005a6a40;
        }
        goto LAB_005a65c0;
      }
      goto LAB_005a6a40;
    }
    if (local_f0 != 6) {
      if (6 < local_f0) {
        if (local_f0 - 10U < 0x15) {
          uVar16 = 1L << ((byte)local_f0 & 0x3f);
          uVar17 = (ulong)((uint)uVar16 & 0x5841000);
          if ((uVar16 & 0x5841000) != 0) goto LAB_005a69f0;
          if (local_f0 == 0x1e) goto LAB_005a65c0;
          if (local_f0 == 10) {
            local_e0 = pbVar15;
            a = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_e0,(long)(local_d8 + lVar18));
            if (a == (ASN1_ENUMERATED *)0x0) {
              iVar10 = BIO_puts(param_1,":BAD ENUMERATED");
              if (0 < iVar10) {
                ASN1_ENUMERATED_free((ASN1_STRING *)0x0);
                goto LAB_005a6d9e;
              }
            }
            else {
              iVar10 = BIO_write(param_1,":",1);
              if ((0 < iVar10) &&
                 ((a->type != 0x10a || (iVar10 = BIO_write(param_1,&DAT_0080042c,1), 0 < iVar10))))
              {
                iVar10 = a->length;
                if (0 < iVar10) {
                  do {
                    iVar10 = BIO_printf(param_1,"%02X",(ulong)a->data[uVar17]);
                    if (iVar10 < 1) goto LAB_005a6cda;
                    iVar10 = a->length;
                    uVar17 = uVar17 + 1;
                  } while ((int)uVar17 < iVar10);
                }
                if ((iVar10 != 0) || (iVar10 = BIO_write(param_1,"00",2), 0 < iVar10)) {
                  ASN1_ENUMERATED_free(a);
                  goto LAB_005a65c0;
                }
                uVar11 = 0;
                a_00 = (ASN1_STRING *)0x0;
                local_168 = (BIO *)0x0;
                goto LAB_005a6949;
              }
            }
LAB_005a6cda:
            a_00 = (ASN1_STRING *)0x0;
            local_168 = (BIO *)0x0;
            goto LAB_005a6949;
          }
        }
LAB_005a65a0:
        if (((long)local_d8 < 1) || (param_7 == 0)) goto LAB_005a65c0;
        iVar10 = BIO_write(param_1,&DAT_0081a1ca,1);
        if (iVar10 < 1) goto LAB_005a6a40;
        if ((param_7 == -1) || (iVar10 = param_7, (long)local_d8 < (long)param_7)) {
          iVar10 = (int)local_d8;
        }
        iVar10 = BIO_dump_indent(param_1,(char *)local_e8,iVar10,6);
        if (iVar10 < 1) goto LAB_005a6a40;
        goto LAB_005a65dc;
      }
      if (local_f0 != 2) {
        if (local_f0 == 4) {
          local_e0 = pbVar15;
          local_168 = (BIO *)d2i_ASN1_OCTET_STRING
                                       ((ASN1_OCTET_STRING **)0x0,&local_e0,
                                        (long)(local_d8 + lVar18));
          if (local_168 == (BIO *)0x0) {
            ASN1_OCTET_STRING_free((ASN1_STRING *)0x0);
            goto LAB_005a65c0;
          }
          if (0 < ((ASN1_OCTET_STRING *)local_168)->length) {
            local_e0 = ((ASN1_OCTET_STRING *)local_168)->data;
            pbVar15 = local_e0;
            do {
              bVar2 = *pbVar15;
              if ((bVar2 < 0x20) && (bVar2 != 10)) {
                if ((bVar2 & 0xfb) != 9) {
LAB_005a6fb3:
                  if (param_7 == 0) {
                    iVar10 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                    if (iVar10 < 1) goto LAB_005a7233;
                    if (((ASN1_OCTET_STRING *)local_168)->length < 1) goto LAB_005a6679;
                    lVar18 = 0;
                    goto LAB_005a7216;
                  }
                  iVar10 = BIO_write(param_1,&DAT_0081a1ca,1);
                  if (iVar10 < 1) goto LAB_005a70df;
                  iVar10 = ((ASN1_OCTET_STRING *)local_168)->length;
                  iVar9 = iVar10;
                  if (param_7 < iVar10) {
                    iVar9 = param_7;
                  }
                  if (param_7 != -1) {
                    iVar10 = iVar9;
                  }
                  iVar10 = BIO_dump_indent(param_1,(char *)local_e0,iVar10,6);
                  if (iVar10 < 1) goto LAB_005a70df;
                  ASN1_OCTET_STRING_free((ASN1_STRING *)local_168);
                  goto LAB_005a65dc;
                }
              }
              else if (0x7e < bVar2) goto LAB_005a6fb3;
              pbVar15 = pbVar15 + 1;
            } while (local_e0 + (ulong)(((ASN1_OCTET_STRING *)local_168)->length - 1) + 1 != pbVar15
                    );
            iVar10 = BIO_write(param_1,":",1);
            if ((iVar10 < 1) ||
               (iVar10 = BIO_write(param_1,local_e0,((ASN1_OCTET_STRING *)local_168)->length),
               iVar10 < 1)) goto LAB_005a70df;
          }
          goto LAB_005a6679;
        }
        if (local_f0 != 1) goto LAB_005a65a0;
        if (local_d8 != (byte *)0x1) {
          iVar10 = BIO_puts(param_1,":BAD BOOLEAN");
          if (iVar10 < 1) goto LAB_005a6a40;
          if (0 < (long)local_d8) {
            BIO_printf(param_1,":%u",(ulong)*local_e8);
          }
          goto LAB_005a6d9e;
        }
        BIO_printf(param_1,":%u",(ulong)*local_e8);
        goto LAB_005a65c0;
      }
      local_e0 = pbVar15;
      a_00 = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_e0,(long)(local_d8 + lVar18));
      if (a_00 == (ASN1_INTEGER *)0x0) {
        iVar10 = BIO_puts(param_1,":BAD INTEGER");
        if (0 < iVar10) {
          ASN1_INTEGER_free((ASN1_STRING *)0x0);
          goto LAB_005a6d9e;
        }
      }
      else {
        iVar10 = BIO_write(param_1,":",1);
        if ((0 < iVar10) &&
           ((a_00->type != 0x102 || (iVar10 = BIO_write(param_1,&DAT_0080042c,1), 0 < iVar10)))) {
          iVar10 = a_00->length;
          if (0 < iVar10) {
            lVar18 = 0;
            do {
              iVar10 = BIO_printf(param_1,"%02X",(ulong)a_00->data[lVar18]);
              if (iVar10 < 1) goto LAB_005a6c12;
              iVar10 = a_00->length;
              lVar18 = lVar18 + 1;
            } while ((int)lVar18 < iVar10);
          }
          if ((iVar10 != 0) || (iVar10 = BIO_write(param_1,"00",2), 0 < iVar10)) {
            ASN1_INTEGER_free(a_00);
            goto LAB_005a65c0;
          }
          uVar11 = 0;
          a = (ASN1_STRING *)0x0;
          local_168 = (BIO *)0x0;
          goto LAB_005a6949;
        }
      }
LAB_005a6c12:
      a = (ASN1_STRING *)0x0;
      local_168 = (BIO *)0x0;
      goto LAB_005a6949;
    }
    local_e0 = pbVar15;
    pAVar14 = d2i_ASN1_OBJECT(&local_d0,&local_e0,(long)(local_d8 + lVar18));
    if (pAVar14 == (ASN1_OBJECT *)0x0) {
      iVar10 = BIO_puts(param_1,":BAD OBJECT");
      local_168 = (BIO *)0x0;
      if (0 < iVar10) {
LAB_005a6d9e:
        iVar10 = BIO_puts(param_1,":[");
        if (0 < iVar10) {
          lVar13 = 0;
          if (0 < (long)local_d8) {
            do {
              iVar10 = BIO_printf(param_1,"%02X",(ulong)pbVar15[lVar13 + lVar18]);
              if (iVar10 < 1) goto LAB_005a6a40;
              lVar13 = lVar13 + 1;
            } while (lVar13 < (long)local_d8);
          }
          iVar10 = BIO_puts(param_1,"]");
          if (0 < iVar10) goto LAB_005a65c0;
        }
        goto LAB_005a6a40;
      }
LAB_005a70df:
      a = (ASN1_STRING *)0x0;
      a_00 = (ASN1_STRING *)0x0;
      goto LAB_005a6949;
    }
    iVar10 = BIO_write(param_1,":",1);
    if (0 < iVar10) {
      i2a_ASN1_OBJECT(param_1,local_d0);
      goto LAB_005a65c0;
    }
    goto LAB_005a6a40;
  }
  a = (ASN1_STRING *)0x0;
  a_00 = (ASN1_STRING *)0x0;
  uVar11 = 1;
  local_168 = (BIO *)0x0;
  goto LAB_005a6949;
LAB_005a6ab8:
  a = (ASN1_STRING *)0x0;
  a_00 = (ASN1_STRING *)0x0;
  local_168 = (BIO *)0x0;
  goto LAB_005a6949;
  while (lVar18 = lVar18 + 1, (int)lVar18 < ((ASN1_OCTET_STRING *)local_168)->length) {
LAB_005a7216:
    iVar10 = BIO_printf(param_1,"%02X",(ulong)local_e0[lVar18]);
    if (iVar10 < 1) goto LAB_005a7233;
  }
LAB_005a6679:
  ASN1_OCTET_STRING_free((ASN1_STRING *)local_168);
LAB_005a65c0:
  iVar10 = BIO_write(param_1,&DAT_0081a1ca,1);
  if (0 < iVar10) {
LAB_005a65dc:
    local_e8 = local_e8 + (long)local_d8;
    if (local_f0 == 0 && local_ec == 0) {
      local_168 = (BIO *)0x0;
      a = (ASN1_STRING *)0x0;
      a_00 = (ASN1_STRING *)0x0;
      uVar11 = 2;
      goto LAB_005a6949;
    }
LAB_005a6600:
    param_3 = param_3 - (long)local_d8;
    if (param_3 < 1) goto LAB_005a6ec8;
    goto LAB_005a6386;
  }
LAB_005a6a40:
  uVar11 = 0;
  a = (ASN1_STRING *)0x0;
  a_00 = (ASN1_STRING *)0x0;
  local_168 = (BIO *)0x0;
  goto LAB_005a6949;
LAB_005a7233:
  uVar11 = 0;
  a = (ASN1_STRING *)0x0;
  a_00 = (ASN1_STRING *)0x0;
  goto LAB_005a6949;
LAB_005a6ec8:
  local_168 = (BIO *)0x0;
  a = (ASN1_STRING *)0x0;
  a_00 = (ASN1_STRING *)0x0;
  uVar11 = local_134;
LAB_005a6949:
  ASN1_OBJECT_free(local_d0);
  ASN1_OCTET_STRING_free((ASN1_STRING *)local_168);
  ASN1_INTEGER_free(a_00);
  ASN1_ENUMERATED_free(a);
  *param_2 = (long)local_e8;
LAB_005a697f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

