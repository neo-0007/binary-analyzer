
undefined8 FUN_004b29e0(long *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  pcVar3 = param_2;
  if (cVar1 == '-') {
    cVar1 = param_2[1];
    pcVar3 = param_2 + 1;
  }
  if ((cVar1 == '0') && ((pcVar3[1] & 0xdfU) == 0x58)) {
    iVar2 = FUN_004b2590(param_1,pcVar3 + 2);
  }
  else {
    iVar2 = FUN_004b27f0(param_1);
  }
  if (iVar2 != 0) {
    if (*param_2 == '-') {
      if (*(int *)(*param_1 + 8) != 0) {
        *(undefined4 *)(*param_1 + 0x10) = 1;
        return 1;
      }
    }
    return 1;
  }
  return 0;
}

