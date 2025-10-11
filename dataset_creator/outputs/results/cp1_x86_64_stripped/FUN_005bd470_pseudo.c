
ulong FUN_005bd470(undefined8 param_1,long *****param_2,int param_3,ulong *param_4,ulong *param_5)

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
  long in_FS_OFFSET;
  long ****local_50;
  undefined8 local_48;
  long local_40;
  
  uVar6 = 0;
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
    uVar7 = FUN_005bcc60(param_1,param_2,param_3,uVar8,uVar9,uVar6,0,param_5);
    goto LAB_005bd63d;
  }
  if (uVar9 == 0) {
LAB_005bd527:
    pppplVar1 = *param_2;
    for (iVar2 = 0; iVar3 = FUN_00436480(pppplVar1), iVar2 < iVar3; iVar2 = iVar2 + 1) {
      if ((iVar2 != 0) && (iVar3 = FUN_004ab870(param_1,&DAT_008243ea), iVar3 < 1))
      goto LAB_005bd688;
      local_48 = FUN_004364a0(pppplVar1,iVar2);
      uVar6 = (*(code *)param_4[4])();
      iVar3 = FUN_005bcc60(param_1,&local_48,param_3 + 2,uVar6,0,0,1,param_5);
      if (iVar3 == 0) goto LAB_005bd688;
    }
    if (iVar2 == 0) {
      pcVar10 = "ABSENT";
      if (pppplVar1 != (long ****)0x0) {
        pcVar10 = "EMPTY";
      }
      iVar2 = FUN_004ae9e0(param_1,"%*s<%s>\n",param_3 + 2,&DAT_0083e5c2,pcVar10);
      if (iVar2 < 1) goto LAB_005bd688;
    }
    uVar7 = 1;
    if ((*param_5 & 2) != 0) {
      iVar2 = FUN_004ae9e0(param_1,"%*s}\n",param_3,&DAT_0083e5c2);
      uVar7 = (ulong)(0 < iVar2);
    }
  }
  else {
    if ((uVar5 & 4) == 0) {
      iVar2 = FUN_004ae9e0(param_1,&DAT_0080b2dc,param_3,&DAT_0083e5c2);
    }
    else {
      pcVar10 = "SET";
      if ((uVar7 & 2) == 0) {
        pcVar10 = "SEQUENCE";
      }
      iVar2 = FUN_004ae9e0(param_1,"%*s%s OF %s {\n",param_3,&DAT_0083e5c2,pcVar10,param_4[3]);
    }
    if (0 < iVar2) goto LAB_005bd527;
LAB_005bd688:
    uVar7 = 0;
  }
LAB_005bd63d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

