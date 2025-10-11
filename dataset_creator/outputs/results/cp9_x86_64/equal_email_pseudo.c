
ulong equal_email(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  size_t sVar4;
  
  sVar4 = param_2;
  if (param_2 != param_4) {
    return 0;
  }
  do {
    if (sVar4 == 0) goto LAB_00589267;
    sVar4 = sVar4 - 1;
  } while ((*(char *)((long)param_1 + sVar4) != '@') && (*(char *)((long)param_3 + sVar4) != '@'));
  sVar3 = param_2 - sVar4;
  uVar2 = equal_nocase((long)param_1 + sVar4,sVar3,(long)param_3 + sVar4,sVar3,0);
  if ((int)uVar2 != 0) {
    param_2 = sVar4;
    if (sVar4 == 0) {
      param_2 = sVar3;
    }
LAB_00589267:
    iVar1 = bcmp(param_1,param_3,param_2);
    uVar2 = (ulong)(iVar1 == 0);
  }
  return uVar2;
}

