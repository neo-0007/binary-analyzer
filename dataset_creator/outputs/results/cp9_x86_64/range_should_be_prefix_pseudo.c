
int range_should_be_prefix(void *param_1,void *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  byte bVar7;
  
  iVar3 = bcmp(param_1,param_2,(long)param_3);
  if (iVar3 < 1) {
    return -1;
  }
  if (param_3 == 0) {
    if (param_3 + -1 == -1) {
      return 0;
    }
    iVar3 = 0;
  }
  else {
    sVar5 = 0;
    do {
      iVar3 = (int)sVar5;
      if (*(char *)((long)param_1 + sVar5) != *(char *)((long)param_2 + sVar5)) break;
      iVar3 = iVar3 + 1;
      sVar5 = sVar5 + 1;
    } while (sVar5 != (long)param_3);
  }
  lVar6 = (long)(param_3 + -1);
  while ((*(char *)((long)param_1 + lVar6) == '\0' && (*(char *)((long)param_2 + lVar6) == -1))) {
    lVar6 = lVar6 + -1;
    if ((int)lVar6 == -1) {
LAB_006048c0:
      return iVar3 * 8;
    }
  }
  if (iVar3 < (int)lVar6) {
    return -1;
  }
  if (iVar3 <= (int)lVar6) {
    bVar1 = *(byte *)((long)param_1 + (long)iVar3);
    bVar2 = *(byte *)((long)param_2 + (long)iVar3);
    bVar7 = bVar1 ^ bVar2;
    if (bVar7 < 0x20) {
      if (bVar1 == bVar2) {
        return -1;
      }
      switch(bVar7) {
      default:
        return -1;
      case 1:
        iVar4 = 7;
        break;
      case 3:
        iVar4 = 6;
        break;
      case 7:
        iVar4 = 5;
        break;
      case 0xf:
        iVar4 = 4;
        break;
      case 0x1f:
        iVar4 = 3;
      }
    }
    else if (bVar7 == 0x3f) {
      iVar4 = 2;
    }
    else {
      if (bVar7 != 0x7f) {
        return -1;
      }
      iVar4 = 1;
    }
    if ((bVar1 & bVar7) == 0) {
      if (bVar7 == (bVar2 & bVar7)) {
        return iVar4 + iVar3 * 8;
      }
      return -1;
    }
    return -1;
  }
  goto LAB_006048c0;
}

