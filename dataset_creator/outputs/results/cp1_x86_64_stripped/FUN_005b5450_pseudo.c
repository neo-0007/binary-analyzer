
undefined8 FUN_005b5450(byte *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int local_3c;
  
  if (param_1 == (byte *)0x0) {
    return 0x13;
  }
  if (param_2 < 0) {
    iVar4 = thunk_FUN_007129d0();
    local_3c = iVar4 + -1;
    if (iVar4 < 1) {
      return 0x13;
    }
  }
  else {
    local_3c = param_2 + -1;
    if (param_2 == 0) {
      return 0x13;
    }
  }
  bVar2 = false;
  bVar3 = false;
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    iVar4 = FUN_005466b0(bVar1,0x800);
    if (iVar4 == 0) {
      bVar3 = true;
    }
    if ((bVar1 & 0x80) != 0) {
      bVar2 = true;
    }
  } while (0 < (1 - (int)pbVar5) + (int)param_1 + local_3c);
  if (!bVar2) {
    if (!bVar3) {
      return 0x13;
    }
    return 0x16;
  }
  return 0x14;
}

