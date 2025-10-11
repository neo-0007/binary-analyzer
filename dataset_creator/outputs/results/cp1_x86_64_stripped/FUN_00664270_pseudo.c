
int FUN_00664270(long *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  
  if ((*(byte *)(param_1 + 0xf) & 8) == 0) {
    return -1;
  }
  if (*(char *)((long)param_1 + 0xaa) == '\0') {
    cVar5 = (char)param_1[0x18];
    uVar1 = param_1[2];
    if ((ulong)param_1[1] < uVar1) {
      param_1[2] = uVar1 - 4;
      iVar2 = *(int *)(uVar1 - 4);
      goto LAB_006642b5;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    if (iVar2 == -1) {
      return -1;
    }
    lVar4 = param_1[0x13];
    param_1[5] = 0;
    param_1[4] = 0;
    cVar5 = (char)param_1[0x18];
    param_1[1] = lVar4;
    param_1[2] = lVar4;
    param_1[3] = lVar4;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
  }
  lVar4 = (**(code **)(*param_1 + 0x20))(param_1,0xffffffffffffffff,1,0x18);
  if (lVar4 == -1) {
    return -1;
  }
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar2 == -1) {
    return -1;
  }
LAB_006642b5:
  if (param_2 == -1) {
    return 0;
  }
  if (iVar2 != param_2) {
    if (cVar5 != '\0') {
      return -1;
    }
    piVar3 = (int *)param_1[2];
    if ((char)param_1[0x18] == '\0') {
      param_1[0x16] = (long)piVar3;
      lVar4 = param_1[3];
      param_1[3] = (long)(param_1 + 0x16);
      param_1[0x17] = lVar4;
      piVar3 = (int *)((long)param_1 + 0xac);
      param_1[1] = (long)piVar3;
      param_1[2] = (long)piVar3;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    *(undefined1 *)((long)param_1 + 0xa9) = 1;
    *piVar3 = param_2;
    return param_2;
  }
  return iVar2;
}

