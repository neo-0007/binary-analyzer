
undefined8
_dopr(undefined8 param_1,long param_2,ulong *param_3,long *param_4,uint *param_5,char *param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  pcVar6 = param_6 + 1;
  uVar5 = 0;
  cVar4 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  while (cVar4 != '\0') {
    if ((param_2 == 0) && (uVar3 = *param_3, uVar3 <= local_48)) goto LAB_004aad92;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar5) {
    default:
      uVar5 = 1;
      if (cVar4 != '%') {
        iVar1 = doapr_outch(param_1,param_2,&local_48,param_3,(int)cVar4);
        if (iVar1 == 0) goto LAB_004aad78;
        uVar5 = 0;
      }
LAB_004aafff:
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      break;
    case 1:
      switch(cVar4) {
      case ' ':
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        break;
      default:
        uVar5 = 2;
        break;
      case '#':
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        break;
      case '+':
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        break;
      case '-':
        goto LAB_004aafff;
      case '0':
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  if (param_2 == 0) {
    uVar3 = *param_3;
LAB_004aad92:
    uVar3 = uVar3 - 1;
    *param_5 = (uint)(uVar3 < local_48);
    if (uVar3 < local_48) {
      local_48 = uVar3;
    }
  }
  iVar1 = doapr_outch(param_1,param_2,&local_48,param_3,0);
  if (iVar1 == 0) {
LAB_004aad78:
    uVar2 = 0;
  }
  else {
    *param_4 = local_48 - 1;
    uVar2 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

