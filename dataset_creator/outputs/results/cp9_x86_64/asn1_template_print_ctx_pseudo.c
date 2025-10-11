
ulong asn1_template_print_ctx
                (BIO *param_1,long *****param_2,uint param_3,ulong *param_4,ulong *param_5)

{
  long ****pppplVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long ****local_50;
  undefined8 local_48;
  long local_40;
  
  uVar6 = 0;
  uVar11 = (ulong)param_3;
  uVar7 = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *param_5;
  if ((uVar5 & 0x80) != 0) {
    lVar4 = (*(code *)param_4[4])();
    uVar6 = *(undefined8 *)(lVar4 + 0x30);
    uVar5 = *param_5;
  }
  uVar9 = 0;
  if ((uVar5 & 0x40) == 0) {
    uVar9 = param_4[3];
  }
  if ((uVar7 & 0x1000) != 0) {
    local_50 = (long ****)param_2;
    param_2 = &local_50;
  }
  if ((uVar7 & 6) == 0) {
    uVar8 = (*(code *)param_4[4])();
    uVar7 = asn1_item_print_ctx(param_1,param_2,uVar11,uVar8,uVar9,uVar6,0,param_5);
    goto LAB_005a9c5d;
  }
  if (uVar9 == 0) {
LAB_005a9b47:
    pppplVar1 = *param_2;
    for (iVar2 = 0; iVar3 = OPENSSL_sk_num(pppplVar1), iVar2 < iVar3; iVar2 = iVar2 + 1) {
      if ((iVar2 != 0) && (iVar3 = BIO_puts(param_1,"\n"), iVar3 < 1)) goto LAB_005a9ca8;
      local_48 = OPENSSL_sk_value(pppplVar1,iVar2);
      uVar6 = (*(code *)param_4[4])();
      iVar3 = asn1_item_print_ctx(param_1,&local_48,param_3 + 2,uVar6,0,0,1,param_5);
      if (iVar3 == 0) goto LAB_005a9ca8;
    }
    if (iVar2 == 0) {
      pcVar10 = "ABSENT";
      if (pppplVar1 != (long ****)0x0) {
        pcVar10 = "EMPTY";
      }
      iVar2 = BIO_printf(param_1,"%*s<%s>\n",(ulong)(param_3 + 2),&DAT_008343a2,pcVar10);
      if (iVar2 < 1) goto LAB_005a9ca8;
    }
    uVar7 = 1;
    if ((*param_5 & 2) != 0) {
      iVar2 = BIO_printf(param_1,"%*s}\n",uVar11,&DAT_008343a2);
      uVar7 = (ulong)(0 < iVar2);
    }
  }
  else {
    if ((uVar5 & 4) == 0) {
      iVar2 = BIO_printf(param_1,"%*s%s:\n",uVar11,&DAT_008343a2);
    }
    else {
      pcVar10 = "SET";
      if ((uVar7 & 2) == 0) {
        pcVar10 = "SEQUENCE";
      }
      iVar2 = BIO_printf(param_1,"%*s%s OF %s {\n",uVar11,&DAT_008343a2,pcVar10,param_4[3]);
    }
    if (0 < iVar2) goto LAB_005a9b47;
LAB_005a9ca8:
    uVar7 = 0;
  }
LAB_005a9c5d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

