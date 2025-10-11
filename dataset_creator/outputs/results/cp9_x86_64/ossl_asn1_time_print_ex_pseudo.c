
uint ossl_asn1_time_print_ex(BIO *param_1,int *param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_asn1_time_to_tm(&local_78);
  if (iVar3 == 0) {
    iVar3 = BIO_write(param_1,"Bad time value",0xe);
    uVar8 = -(uint)(iVar3 != 0);
    goto LAB_005a4ff4;
  }
  iVar3 = *param_2;
  lVar1 = *(long *)(param_2 + 2);
  param_3 = param_3 & 0xf;
  if (*(char *)(lVar1 + -1 + (long)iVar3) == 'Z') {
    if (param_2[1] == 0x18) {
      bVar2 = true;
      goto LAB_005a50b3;
    }
    pcVar5 = " GMT";
    if (param_3 == 1) {
      pcVar5 = "Z";
      goto LAB_005a5041;
    }
  }
  else {
    if (param_2[1] == 0x18) {
      bVar2 = false;
LAB_005a50b3:
      uVar9 = 0;
      lVar7 = 0;
      if ((0xf < iVar3) && (*(char *)(lVar1 + 0xe) == '.')) {
        lVar7 = lVar1 + 0xe;
        pcVar5 = (char *)(lVar1 + 0xf);
        uVar9 = 1;
        do {
          iVar4 = ossl_ascii_isdigit((int)*pcVar5);
          if (iVar4 == 0) break;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar8;
          pcVar5 = pcVar5 + 1;
        } while (uVar8 != iVar3 - 0xeU);
      }
      if (param_3 == 1) {
        pcVar5 = "Z";
        if (!bVar2) {
          pcVar5 = "";
        }
        iVar3 = BIO_printf(param_1,"%4d-%02d-%02d %02d:%02d:%02d%.*s%s",(ulong)(local_64 + 0x76c),
                           (ulong)(local_68 + 1),(ulong)local_6c,(ulong)local_70,(ulong)local_74,
                           (ulong)local_78,uVar9,lVar7,pcVar5);
        uVar8 = (uint)(0 < iVar3);
      }
      else {
        puVar6 = &DAT_00803efc;
        if (!bVar2) {
          puVar6 = &DAT_008343a2;
        }
        iVar3 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d%.*s %d%s",_asn1_mon + (long)local_68 * 4,
                           (ulong)local_6c,(ulong)local_70,(ulong)local_74,(ulong)local_78,uVar9,
                           lVar7,(ulong)(local_64 + 0x76c),puVar6);
        uVar8 = (uint)(0 < iVar3);
      }
      goto LAB_005a4ff4;
    }
    pcVar5 = "";
    if (param_3 == 1) {
LAB_005a5041:
      iVar3 = BIO_printf(param_1,"%4d-%02d-%02d %02d:%02d:%02d%s",(ulong)(local_64 + 0x76c),
                         (ulong)(local_68 + 1),(ulong)local_6c,(ulong)local_70,(ulong)local_74,
                         (ulong)local_78,pcVar5);
      uVar8 = (uint)(0 < iVar3);
      goto LAB_005a4ff4;
    }
  }
  iVar3 = BIO_printf(param_1,"%s %2d %02d:%02d:%02d %d%s",_asn1_mon + (long)local_68 * 4,
                     (ulong)local_6c,(ulong)local_70,(ulong)local_74,(ulong)local_78,
                     (ulong)(local_64 + 0x76c),pcVar5);
  uVar8 = (uint)(0 < iVar3);
LAB_005a4ff4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar8;
}

