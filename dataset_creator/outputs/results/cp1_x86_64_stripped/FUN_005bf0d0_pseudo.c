
long FUN_005bf0d0(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (param_2 < 0xd) {
    switch(param_2) {
    case 1:
      goto switchD_005bf0fc_caseD_1;
    case 2:
      if (*(int *)(lVar2 + 0x10) < 1) {
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar2 = FUN_004abd40(*(long *)(param_1 + 0x48),2,param_3);
          return lVar2;
        }
        return 1;
      }
      break;
    case 3:
switchD_005bf0fc_caseD_3:
      return (long)*(int *)(lVar2 + 0x14);
    case 10:
      if ((long)*(int *)(lVar2 + 0x10) != 0) {
        return (long)*(int *)(lVar2 + 0x10);
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar2 = FUN_004abd40(*(long *)(param_1 + 0x48),10,param_3);
        return lVar2;
      }
      return 0;
    case 0xb:
    case 0xc:
      return 1;
    }
  }
  else {
    if (param_2 != 0x80) {
      if (param_2 != 0x85) {
        return 0;
      }
      goto switchD_005bf0fc_caseD_3;
    }
switchD_005bf0fc_caseD_1:
    iVar1 = *(int *)(lVar2 + 0x10) + *(int *)(lVar2 + 0x14);
    if ((-1 < param_3) && (param_3 <= iVar1)) {
      *(int *)(lVar2 + 0x14) = (int)param_3;
      *(int *)(lVar2 + 0x10) = iVar1 - (int)param_3;
      return 1;
    }
  }
  return 0;
}

