
bool FUN_005bcc60(undefined8 param_1,long *param_2,int param_3,char *param_4,long param_5,
                 long param_6,int param_7,byte *param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int *piVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_d0;
  undefined8 local_b8;
  int local_b0;
  byte *local_a8;
  undefined1 local_98 [88];
  long local_40;
  
  pcVar10 = (code *)0x0;
  lVar6 = *(long *)(param_4 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 != 0) {
    local_a8 = param_8;
    local_b8 = param_1;
    local_b0 = param_3;
    if ((*(byte *)(lVar6 + 8) & 8) == 0) {
      pcVar10 = *(code **)(lVar6 + 0x18);
    }
    else {
      pcVar10 = *(code **)(lVar6 + 0x28);
    }
  }
  cVar1 = *param_4;
  if (cVar1 != '\0') {
    if (*param_2 == 0) goto LAB_005bcceb;
    switch(cVar1) {
    default:
      FUN_004ae9e0(param_1,"Unprocessed type %d\n",(int)cVar1);
      bVar13 = false;
      goto LAB_005bcd38;
    case '\x01':
    case '\x06':
      if ((param_7 == 0) &&
         (iVar2 = FUN_005bcb00(param_1,param_3,param_5,param_6,param_8), iVar2 == 0)) {
        bVar13 = false;
        goto LAB_005bcd38;
      }
      if (param_5 != 0 || param_6 != 0) {
        if ((*param_8 & 2) == 0) {
          iVar2 = FUN_004ab870(param_1,&DAT_008243ea);
          if (iVar2 < 1) {
            bVar13 = false;
            goto LAB_005bcd38;
          }
        }
        else {
          iVar2 = FUN_004ab870(param_1," {\n");
          if (iVar2 < 1) goto LAB_005bce88;
        }
      }
      if (pcVar10 != (code *)0x0) {
        iVar2 = (*pcVar10)(8,param_2,param_4,&local_b8);
        if (iVar2 == 0) goto LAB_005bce88;
        if (iVar2 == 2) break;
      }
      lVar6 = *(long *)(param_4 + 0x10);
      local_d0 = 0;
      if (0 < *(long *)(param_4 + 0x18)) {
        do {
          lVar5 = FUN_004a8600(*param_2,lVar6,1);
          if (lVar5 == 0) goto LAB_005bce88;
          uVar4 = FUN_004a85f0(param_2,lVar5);
          iVar2 = FUN_005bd470(param_1,uVar4,param_3 + 2,lVar5,param_8);
          if (iVar2 == 0) goto LAB_005bce88;
          local_d0 = local_d0 + 1;
          lVar6 = lVar6 + 0x28;
        } while (local_d0 < *(long *)(param_4 + 0x18));
      }
      if (((*param_8 & 2) != 0) &&
         (iVar2 = FUN_004ae9e0(param_1,"%*s}\n",param_3,&DAT_0083e5c2), iVar2 < 0)) {
        bVar13 = false;
        goto LAB_005bcd38;
      }
      if (pcVar10 != (code *)0x0) {
        iVar2 = (*pcVar10)(9,param_2,param_4,&local_b8);
        bVar13 = iVar2 != 0;
        goto LAB_005bcd38;
      }
      break;
    case '\x02':
      iVar2 = FUN_004a8290(param_2,param_4);
      if ((iVar2 < 0) || (*(long *)(param_4 + 0x18) <= (long)iVar2)) {
        iVar2 = FUN_004ae9e0(param_1,"ERROR: selector [%d] invalid\n",iVar2);
        bVar13 = 0 < iVar2;
        goto LAB_005bcd38;
      }
      lVar5 = *(long *)(param_4 + 0x10) + (long)iVar2 * 0x28;
      param_2 = (long *)FUN_004a85f0(param_2,lVar5);
      goto LAB_005bcea4;
    case '\x04':
      if (param_7 == 0) {
        iVar2 = FUN_005bcb00(param_1,param_3,param_5,param_6,param_8);
        if (iVar2 == 0) goto LAB_005bce88;
        lVar6 = *(long *)(param_4 + 0x20);
      }
      if ((lVar6 != 0) && (*(code **)(lVar6 + 0x30) != (code *)0x0)) {
        iVar2 = (**(code **)(lVar6 + 0x30))(param_1,param_2,param_3,&DAT_0083e5c2,param_8);
        if (iVar2 == 0) goto LAB_005bce88;
        if (iVar2 != 2) break;
        goto LAB_005bcf9c;
      }
      if (param_6 != 0) {
        iVar2 = FUN_004ae9e0(param_1,":EXTERNAL TYPE %s\n",param_6);
        bVar13 = 0 < iVar2;
        goto LAB_005bcd38;
      }
      break;
    case '\x05':
      goto switchD_005bcd8c_caseD_5;
    }
LAB_005bd070:
    bVar13 = true;
    goto LAB_005bcd38;
  }
  if ((*(long *)(param_4 + 8) != 1) && (*param_2 == 0)) {
LAB_005bcceb:
    bVar13 = true;
    if ((*param_8 & 1) == 0) goto LAB_005bcd38;
    if ((param_7 == 0) &&
       (iVar2 = FUN_005bcb00(param_1,param_3,param_5,param_6,param_8), iVar2 == 0))
    goto LAB_005bce88;
    pcVar8 = "<ABSENT>\n";
    goto LAB_005bcd21;
  }
  lVar5 = *(long *)(param_4 + 0x10);
  if (lVar5 != 0) {
LAB_005bcea4:
    iVar2 = FUN_005bd470(param_1,param_2,param_3,lVar5,param_8);
    bVar13 = iVar2 != 0;
    goto LAB_005bcd38;
  }
switchD_005bcd8c_caseD_5:
  iVar2 = FUN_005bcb00(param_1,param_3,param_5,param_6,param_8);
  if (iVar2 == 0) goto LAB_005bce88;
  if ((lVar6 != 0) && (*(code **)(lVar6 + 0x38) != (code *)0x0)) {
    iVar2 = (**(code **)(lVar6 + 0x38))(param_1,param_2,param_4,param_3,param_8);
    bVar13 = iVar2 != 0;
    goto LAB_005bcd38;
  }
  if (*param_4 != '\x05') {
    uVar12 = *(ulong *)(param_4 + 8);
    if (uVar12 != 1) {
      piVar9 = (int *)*param_2;
      if (uVar12 != 0xfffffffffffffffc) goto LAB_005bd0ae;
      uVar11 = (ulong)*piVar9;
      param_2 = (long *)(piVar9 + 2);
      piVar9 = *(int **)(piVar9 + 2);
      uVar12 = uVar11;
      if ((*param_8 & 0x10) != 0) goto LAB_005bd00f;
      goto LAB_005bd0ba;
    }
    if ((*param_8 & 8) != 0) {
      piVar9 = (int *)0x0;
      lVar6 = FUN_005b93a0(1);
      if (lVar6 != 0) goto LAB_005bd0d5;
    }
switchD_005bd035_caseD_1:
    iVar2 = (int)*param_2;
    if ((iVar2 == -1) && (iVar2 = (int)*(undefined8 *)(param_4 + 0x28), iVar2 == -1)) {
      iVar2 = FUN_004ab870(param_1,"BOOL ABSENT");
      if (iVar2 < 1) {
        bVar13 = false;
        goto LAB_005bcd38;
      }
    }
    else {
      pcVar8 = "FALSE";
      if (iVar2 != 0) {
        pcVar8 = "TRUE";
      }
      iVar2 = FUN_004ab870(param_1,pcVar8);
      if (iVar2 < 1) {
        bVar13 = false;
        goto LAB_005bcd38;
      }
    }
    goto LAB_005bcf9c;
  }
  piVar9 = (int *)*param_2;
  uVar12 = (ulong)(int)(piVar9[1] & 0xfffffeff);
LAB_005bd0ae:
  if ((*param_8 & 8) == 0) {
LAB_005bd00f:
    if (uVar12 == 5) goto LAB_005bd3c0;
  }
  else {
    uVar11 = uVar12 & 0xffffffff;
LAB_005bd0ba:
    lVar6 = FUN_005b93a0(uVar11);
    if (uVar12 == 5) {
LAB_005bd3c0:
      pcVar8 = "NULL\n";
      goto LAB_005bcd21;
    }
    if (lVar6 != 0) {
LAB_005bd0d5:
      iVar2 = FUN_004ab870(param_1,lVar6);
      if (iVar2 < 1) goto LAB_005bce88;
      iVar2 = FUN_004ab870(param_1,":");
      if (iVar2 < 1) {
        bVar13 = false;
        goto LAB_005bcd38;
      }
    }
  }
  switch(uVar12) {
  case 1:
    goto switchD_005bd035_caseD_1;
  case 2:
  case 10:
    lVar6 = FUN_0059cfa0(0,piVar9);
    if (lVar6 != 0) {
      iVar2 = FUN_004ab870(param_1,lVar6);
      if (iVar2 < 1) {
        FUN_0041ad60(lVar6,"../crypto/asn1/tasn_prn.c",0x192);
        bVar13 = false;
        goto LAB_005bcd38;
      }
      FUN_0041ad60(lVar6,"../crypto/asn1/tasn_prn.c",0x192);
      break;
    }
LAB_005bce88:
    bVar13 = false;
    goto LAB_005bcd38;
  case 3:
  case 4:
    if (piVar9[1] == 3) {
      iVar2 = FUN_004ae9e0(param_1," (%ld unused bits)\n",(uint)*(undefined8 *)(piVar9 + 4) & 7);
      if (iVar2 < 1) {
        bVar13 = false;
        goto LAB_005bcd38;
      }
    }
    else {
      iVar2 = FUN_004ab870(param_1,&DAT_008243ea);
      if (iVar2 < 1) goto LAB_005bce88;
    }
    if (0 < *piVar9) {
      iVar2 = FUN_004aae10(param_1,*(undefined8 *)(piVar9 + 2),*piVar9,param_3 + 2);
      bVar13 = 0 < iVar2;
      goto LAB_005bcd38;
    }
    goto LAB_005bd070;
  case 6:
    lVar6 = *param_2;
    uVar3 = FUN_00423da0(lVar6);
    puVar7 = (undefined1 *)FUN_00423c40(uVar3);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0083e5c2;
    }
    FUN_00423e90(local_98,0x50,lVar6,1);
    iVar2 = FUN_004ae9e0(param_1,"%s (%s)",puVar7,local_98);
    bVar13 = false;
    if (iVar2 < 1) goto LAB_005bcd38;
    break;
  case 0x17:
    iVar2 = FUN_005b8750(param_1,piVar9);
    if (iVar2 == 0) {
      bVar13 = false;
      goto LAB_005bcd38;
    }
    break;
  case 0x18:
    iVar2 = FUN_005b4630(param_1,piVar9);
    if (iVar2 == 0) {
      bVar13 = false;
      goto LAB_005bcd38;
    }
    break;
  case 0xfffffffffffffffd:
  case 0x10:
  case 0x11:
    iVar2 = FUN_004ab870(param_1,&DAT_008243ea);
    if (0 < iVar2) {
      iVar2 = FUN_005ba3a0(param_1,*(undefined8 *)(piVar9 + 2),(long)*piVar9,param_3,0);
      bVar13 = 0 < iVar2;
      goto LAB_005bcd38;
    }
    goto LAB_005bce88;
  default:
    iVar2 = FUN_005b71f0(param_1,piVar9,*(undefined8 *)(param_8 + 0x20));
    if (iVar2 == 0) {
      bVar13 = false;
      goto LAB_005bcd38;
    }
  }
LAB_005bcf9c:
  pcVar8 = "\n";
LAB_005bcd21:
  iVar2 = FUN_004ab870(param_1,pcVar8);
  bVar13 = 0 < iVar2;
LAB_005bcd38:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

