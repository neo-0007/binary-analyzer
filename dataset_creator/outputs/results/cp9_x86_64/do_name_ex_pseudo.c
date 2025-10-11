
int do_name_ex(code *param_1,undefined8 param_2,X509_NAME *param_3,int param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  X509_NAME_ENTRY *ne;
  ASN1_OBJECT *o;
  ASN1_STRING *pAVar10;
  size_t sVar11;
  char *buf;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  int local_100;
  int local_e4;
  undefined *local_b0;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = 0;
  if (-1 < param_4) {
    iVar14 = param_4;
  }
  if (0 < param_4) {
    iVar13 = 0;
    do {
      iVar1 = (*param_1)(param_2,&DAT_00813159,1);
      if (iVar1 == 0) goto LAB_005a3640;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar14);
  }
  uVar2 = (uint)param_5 & 0xf0000;
  if (uVar2 == 0x30000) {
    local_9c = 3;
    local_a8 = &DAT_008036d4;
    local_a0 = 2;
    local_b0 = &DAT_008036d8;
    local_e4 = 0;
  }
  else if (uVar2 < 0x30001) {
    if (uVar2 == 0x10000) {
      local_9c = 1;
      local_a8 = &DAT_00817fd1;
      local_a0 = 1;
      local_b0 = &DAT_007fb8b3;
      local_e4 = 0;
    }
    else {
      if (uVar2 != 0x20000) goto LAB_005a3640;
      local_9c = 3;
      local_a8 = &DAT_008036d4;
      local_a0 = 2;
      local_b0 = &DAT_007f7194;
      local_e4 = 0;
    }
  }
  else {
    if (uVar2 != 0x40000) {
LAB_005a3640:
      iVar14 = -1;
      goto LAB_005a3646;
    }
    local_a8 = &DAT_008036d4;
    local_9c = 3;
    local_a0 = 1;
    local_b0 = &DAT_0081a1ca;
    local_e4 = iVar14;
  }
  iVar13 = (-(uint)((param_5 & 0x800000) == 0) & 0xfffffffe) + 3;
  pcVar9 = "=";
  if ((param_5 & 0x800000) != 0) {
    pcVar9 = " = ";
  }
  uVar2 = (uint)param_5 & 0x600000;
  iVar1 = X509_NAME_entry_count(param_3);
  if (0 < iVar1) {
    iVar4 = -1;
    local_100 = iVar1 + -1;
    do {
      if ((param_5 & 0x100000) == 0) {
        ne = X509_NAME_get_entry(param_3,(iVar1 + -1) - local_100);
      }
      else {
        ne = X509_NAME_get_entry(param_3,local_100);
      }
      if (iVar4 != -1) {
        iVar3 = X509_NAME_ENTRY_set(ne);
        if (iVar3 == iVar4) {
          iVar4 = (*param_1)(param_2,local_a8,local_9c);
          if (iVar4 == 0) goto LAB_005a3640;
          iVar14 = iVar14 + local_9c;
        }
        else {
          iVar4 = (*param_1)(param_2,local_b0,local_a0);
          if (iVar4 == 0) goto LAB_005a3640;
          if (local_e4 != 0) {
            iVar4 = 0;
            do {
              iVar3 = (*param_1)(param_2,&DAT_00813159,1);
              if (iVar3 == 0) goto LAB_005a3640;
              iVar4 = iVar4 + 1;
            } while (local_e4 != iVar4);
          }
          iVar14 = local_e4 + local_a0 + iVar14;
        }
      }
      iVar4 = X509_NAME_ENTRY_set(ne);
      o = X509_NAME_ENTRY_get_object(ne);
      pAVar10 = X509_NAME_ENTRY_get_data(ne);
      iVar3 = OBJ_obj2nid(o);
      if (uVar2 != 0x600000) {
        if ((uVar2 == 0x400000) || (iVar3 == 0)) {
          buf = local_98;
          OBJ_obj2txt(buf,0x50,o,1);
          iVar5 = 0;
LAB_005a3967:
          sVar11 = strlen(buf);
          iVar6 = (int)sVar11;
          iVar7 = (*param_1)(param_2,buf,sVar11 & 0xffffffff);
          if (iVar7 == 0) goto LAB_005a3640;
          if ((iVar6 < iVar5) && ((param_5 & 0x2000000) != 0)) {
            iVar7 = 0;
            do {
              iVar8 = (*param_1)(param_2,&DAT_00813159,1);
              if (iVar8 == 0) goto LAB_005a3640;
              iVar7 = iVar7 + 1;
            } while (iVar5 - iVar6 != iVar7);
            iVar14 = iVar14 + (iVar5 - iVar6);
          }
        }
        else {
          if ((param_5 & 0x600000) == 0) {
            buf = OBJ_nid2sn(iVar3);
            iVar5 = 10;
            goto LAB_005a3967;
          }
          if (uVar2 == 0x200000) {
            buf = OBJ_nid2ln(iVar3);
            iVar5 = 0x19;
            goto LAB_005a3967;
          }
          iVar5 = (*param_1)(param_2,&DAT_008343a2,0);
          if (iVar5 == 0) goto LAB_005a3640;
          iVar6 = 0;
        }
        iVar5 = (*param_1)(param_2,pcVar9,iVar13);
        if (iVar5 == 0) goto LAB_005a3640;
        iVar14 = iVar14 + iVar6 + iVar13;
      }
      uVar12 = param_5;
      if (iVar3 == 0) {
        uVar12 = (uint)(param_5 >> 0x11) & 0x80 | param_5;
      }
      iVar3 = do_print_ex(param_1,param_2,uVar12,pAVar10);
      if (iVar3 < 0) goto LAB_005a3640;
      local_100 = local_100 + -1;
      iVar14 = iVar14 + iVar3;
    } while (local_100 != -1);
  }
LAB_005a3646:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar14;
}

