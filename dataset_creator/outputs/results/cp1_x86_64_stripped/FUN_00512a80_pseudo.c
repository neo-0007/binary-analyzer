
bool FUN_00512a80(undefined8 param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  
  lVar1 = *(long *)(param_2 + 0x20);
  uVar3 = FUN_00423c40(**(undefined4 **)(param_2 + 8));
  if (param_4 == 1) {
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) {
      pcVar5 = "%*s<INVALID PRIVATE KEY>\n";
      goto LAB_00512c01;
    }
    iVar2 = FUN_004ae9e0(param_1,"%*s%s Private-Key:\n",param_3,&DAT_0083e5c2,uVar3);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = FUN_004ae9e0(param_1,"%*spriv:\n",param_3,&DAT_0083e5c2);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = **(int **)(param_2 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      cVar4 = ' ';
    }
    else {
      cVar4 = (iVar2 != 0x40b) + '8';
    }
    iVar2 = FUN_005bc820(param_1,*(undefined8 *)(lVar1 + 0x50),cVar4,param_3 + 4);
    if (iVar2 == 0) {
      return false;
    }
  }
  else {
    if (lVar1 == 0) {
      pcVar5 = "%*s<INVALID PUBLIC KEY>\n";
LAB_00512c01:
      iVar2 = FUN_004ae9e0(param_1,pcVar5,param_3,&DAT_0083e5c2,uVar3);
      return 0 < iVar2;
    }
    iVar2 = FUN_004ae9e0(param_1,"%*s%s Public-Key:\n",param_3,&DAT_0083e5c2,uVar3);
    if (iVar2 < 1) {
      return false;
    }
  }
  iVar2 = FUN_004ae9e0(param_1,"%*spub:\n",param_3,&DAT_0083e5c2);
  if (iVar2 < 1) {
    return false;
  }
  iVar2 = **(int **)(param_2 + 8);
  if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
    cVar4 = ' ';
  }
  else {
    cVar4 = (iVar2 != 0x40b) + '8';
  }
  iVar2 = FUN_005bc820(param_1,lVar1 + 0x11,cVar4,param_3 + 4);
  return iVar2 != 0;
}

