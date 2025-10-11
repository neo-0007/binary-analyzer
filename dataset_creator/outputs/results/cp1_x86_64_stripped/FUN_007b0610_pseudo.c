
int FUN_007b0610(byte *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  
  iVar2 = 0;
  if (param_2 != 0) {
    uVar3 = param_2 + 7U >> 3;
    switch((uint)param_2 & 7) {
    case 0:
      iVar2 = 0;
      pbVar4 = param_1;
      break;
    case 1:
      iVar2 = 0;
      goto LAB_007b06bb;
    case 2:
      iVar2 = 0;
      goto LAB_007b06ac;
    case 3:
      iVar2 = 0;
      goto LAB_007b069d;
    case 4:
      iVar2 = 0;
      goto LAB_007b068e;
    case 5:
      iVar2 = 0;
      goto LAB_007b067f;
    case 6:
      iVar2 = 0;
      goto LAB_007b0670;
    case 7:
      iVar2 = 0;
      goto LAB_007b0661;
    }
    while( true ) {
      param_1 = pbVar4 + 1;
      iVar2 = (iVar2 + (uint)*pbVar4) * 0x1003f;
LAB_007b0661:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = (iVar2 + (uint)bVar1) * 0x1003f;
LAB_007b0670:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007b067f:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007b068e:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007b069d:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007b06ac:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007b06bb:
      iVar2 = (uint)*param_1 + iVar2;
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) break;
      iVar2 = iVar2 * 0x1003f;
      pbVar4 = param_1 + 1;
    }
  }
  return iVar2;
}

