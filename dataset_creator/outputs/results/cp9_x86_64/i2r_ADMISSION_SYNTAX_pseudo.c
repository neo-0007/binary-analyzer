
undefined8 i2r_ADMISSION_SYNTAX(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ASN1_OBJECT *o;
  char *pcVar5;
  char *pcVar6;
  ASN1_STRING *v;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  uint local_e4;
  uint local_cc;
  char local_c8 [136];
  long local_40;
  
  uVar11 = (ulong)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 == 0) ||
     ((((iVar1 = BIO_printf(param_3,"%*sadmissionAuthority:\n",uVar11,&DAT_008343a2), 0 < iVar1 &&
        (iVar1 = BIO_printf(param_3,"%*s  ",(ulong)param_4,&DAT_008343a2), 0 < iVar1)) &&
       (iVar1 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)*param_2), 0 < iVar1)) &&
      (iVar1 = BIO_printf(param_3,"\n"), 0 < iVar1)))) {
    local_cc = 0;
    while (iVar1 = OPENSSL_sk_num(param_2[1]), (int)local_cc < iVar1) {
      uVar8 = local_cc + 1;
      plVar3 = (long *)OPENSSL_sk_value(param_2[1],local_cc);
      iVar1 = BIO_printf(param_3,"%*sEntry %0d:\n",uVar11,&DAT_008343a2,(ulong)uVar8);
      if ((iVar1 < 1) ||
         (((*plVar3 != 0 &&
           (((iVar1 = BIO_printf(param_3,"%*s  admissionAuthority:\n",uVar11,&DAT_008343a2),
             iVar1 < 1 || (iVar1 = BIO_printf(param_3,"%*s    ",uVar11,&DAT_008343a2), iVar1 < 1))
            || ((iVar1 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)*plVar3), iVar1 < 1 ||
                (iVar1 = BIO_printf(param_3,"\n"), iVar1 < 1)))))) ||
          ((plVar3[1] != 0 &&
           (iVar1 = i2r_NAMING_AUTHORITY_constprop_0(plVar3[1],param_3,uVar11), iVar1 < 1))))))
      goto LAB_0061c1a8;
      local_e4 = 0;
      while (iVar1 = OPENSSL_sk_num(plVar3[2]), local_cc = uVar8, (int)local_e4 < iVar1) {
        uVar9 = local_e4 + 1;
        plVar4 = (long *)OPENSSL_sk_value(plVar3[2],local_e4);
        iVar1 = BIO_printf(param_3,"%*s  Profession Info Entry %0d:\n",uVar11,&DAT_008343a2,
                           (ulong)uVar9);
        if (((iVar1 < 1) ||
            ((plVar4[3] != 0 &&
             (((iVar1 = BIO_printf(param_3,"%*s    registrationNumber: ",uVar11,&DAT_008343a2),
               iVar1 < 1 || (iVar1 = ASN1_STRING_print(param_3,(ASN1_STRING *)plVar4[3]), iVar1 < 1)
               ) || (iVar1 = BIO_printf(param_3,"\n"), iVar1 < 1)))))) ||
           ((*plVar4 != 0 &&
            (iVar1 = i2r_NAMING_AUTHORITY_constprop_0(*plVar4,param_3,param_4 + 2), iVar1 < 1))))
        goto LAB_0061c1a8;
        if (plVar4[1] != 0) {
          iVar1 = BIO_printf(param_3,"%*s    Info Entries:\n",uVar11,&DAT_008343a2);
          if (iVar1 < 1) goto LAB_0061c1a8;
          for (iVar1 = 0; iVar2 = OPENSSL_sk_num(plVar4[1]), iVar1 < iVar2; iVar1 = iVar1 + 1) {
            v = (ASN1_STRING *)OPENSSL_sk_value(plVar4[1],iVar1);
            iVar2 = BIO_printf(param_3,"%*s      ",uVar11,&DAT_008343a2);
            if (((iVar2 < 1) || (iVar2 = ASN1_STRING_print(param_3,v), iVar2 < 1)) ||
               (iVar2 = BIO_printf(param_3,"\n"), iVar2 < 1)) goto LAB_0061c1a8;
          }
        }
        local_e4 = uVar9;
        if (plVar4[2] != 0) {
          iVar1 = BIO_printf(param_3,"%*s    Profession OIDs:\n",uVar11,&DAT_008343a2);
          if (iVar1 < 1) goto LAB_0061c1a8;
          for (iVar1 = 0; iVar2 = OPENSSL_sk_num(plVar4[2]), iVar1 < iVar2; iVar1 = iVar1 + 1) {
            o = (ASN1_OBJECT *)OPENSSL_sk_value(plVar4[2],iVar1);
            iVar2 = OBJ_obj2nid(o);
            pcVar5 = OBJ_nid2ln(iVar2);
            OBJ_obj2txt(local_c8,0x80,o,1);
            pcVar6 = ")";
            pcVar10 = " (";
            if (pcVar5 == (char *)0x0) {
              pcVar6 = "";
              pcVar5 = "";
              pcVar10 = "";
            }
            iVar2 = BIO_printf(param_3,"%*s      %s%s%s%s\n",uVar11,&DAT_008343a2,pcVar5,pcVar10,
                               local_c8,pcVar6);
            if (iVar2 < 1) goto LAB_0061c1a8;
          }
        }
      }
    }
    uVar7 = 1;
  }
  else {
LAB_0061c1a8:
    uVar7 = 0xffffffff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar7;
}

