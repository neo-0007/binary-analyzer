
bool sock_eq(short *param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
  sVar2 = *param_1;
  if (sVar2 == *param_2) {
    if (sVar2 == 2) {
      if (param_1[1] == param_2[1]) {
        return *(int *)(param_1 + 2) == *(int *)(param_2 + 2);
      }
    }
    else if (param_1[1] == param_2[1]) {
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8) &&
             *(long *)(param_1 + 4) == *(long *)(param_2 + 4);
    }
  }
  else {
    if (sVar2 == 2) {
      psVar3 = param_1;
      if (param_2[1] != param_1[1]) {
        return false;
      }
    }
    else {
      psVar1 = param_2 + 1;
      psVar3 = param_2;
      param_2 = param_1;
      if (param_1[1] != *psVar1) {
        return false;
      }
    }
    if (((*(int *)(param_2 + 4) == 0) && (*(int *)(param_2 + 6) == 0)) &&
       (*(int *)(param_2 + 8) == -0x10000)) {
      return *(int *)(param_2 + 10) == *(int *)(psVar3 + 2);
    }
  }
  return false;
}

