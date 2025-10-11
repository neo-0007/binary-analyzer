
bool FUN_006c6900(long param_1,long param_2,char *param_3,long param_4)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar3 = param_4 - 1;
  uVar4 = param_2 - 1U;
  if (uVar3 < param_2 - 1U) {
    uVar4 = uVar3;
  }
  if (uVar4 == 0) {
    bVar6 = true;
  }
  else {
    uVar5 = 0;
    do {
      bVar6 = param_3[uVar3] == *(char *)(param_1 + uVar5);
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 - 1;
      if (uVar4 <= uVar5) break;
    } while (bVar6);
  }
  cVar2 = *(char *)(param_1 + uVar4);
  while ((uVar3 != 0 && (bVar6 != false))) {
    pcVar1 = param_3 + uVar3;
    uVar3 = uVar3 - 1;
    bVar6 = *pcVar1 == cVar2;
  }
  if ((byte)(cVar2 - 1U) < 0x7e) {
    bVar6 = (bool)(bVar6 & *param_3 <= cVar2);
  }
  return bVar6;
}

