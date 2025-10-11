
bool i2r_NAMING_AUTHORITY_constprop_0(long *param_1,BIO *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  char acStack_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (long *)0x0) && (((*param_1 != 0 || (param_1[2] != 0)) || (param_1[1] != 0)))) {
    iVar2 = BIO_printf(param_2,"%*snamingAuthority: ",(ulong)param_3,&DAT_008343a2);
    if (0 < iVar2) {
      if ((ASN1_OBJECT *)*param_1 == (ASN1_OBJECT *)0x0) {
LAB_0061bc8a:
        if ((param_1[2] == 0) ||
           (((iVar2 = BIO_printf(param_2,"%*s  namingAuthorityText: ",(ulong)param_3,&DAT_008343a2),
             0 < iVar2 && (iVar2 = ASN1_STRING_print(param_2,(ASN1_STRING *)param_1[2]), 0 < iVar2))
            && (iVar2 = BIO_printf(param_2,"\n"), 0 < iVar2)))) {
          bVar1 = true;
          if (param_1[1] == 0) goto LAB_0061bd52;
          iVar2 = BIO_printf(param_2,"%*s  namingAuthorityUrl: ",(ulong)param_3,&DAT_008343a2);
          if ((0 < iVar2) &&
             (iVar2 = ASN1_STRING_print(param_2,(ASN1_STRING *)param_1[1]), 0 < iVar2)) {
            iVar2 = BIO_printf(param_2,"\n");
            bVar1 = 0 < iVar2;
            goto LAB_0061bd52;
          }
        }
      }
      else {
        iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
        pcVar3 = OBJ_nid2ln(iVar2);
        iVar2 = BIO_printf(param_2,"%*s  admissionAuthorityId: ",(ulong)param_3,&DAT_008343a2);
        if (0 < iVar2) {
          OBJ_obj2txt(acStack_c8,0x80,(ASN1_OBJECT *)*param_1,1);
          pcVar4 = " (";
          pcVar5 = ")";
          if (pcVar3 == (char *)0x0) {
            pcVar3 = "";
            pcVar4 = "";
            pcVar5 = "";
          }
          iVar2 = BIO_printf(param_2,"%s%s%s%s\n",pcVar3,pcVar4,acStack_c8,pcVar5);
          if (0 < iVar2) goto LAB_0061bc8a;
        }
      }
    }
  }
  bVar1 = false;
LAB_0061bd52:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar1;
}

