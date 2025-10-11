
int __nss_hash(byte *param_1,long param_2)

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
      goto LAB_007a6d7b;
    case 2:
      iVar2 = 0;
      goto LAB_007a6d6c;
    case 3:
      iVar2 = 0;
      goto LAB_007a6d5d;
    case 4:
      iVar2 = 0;
      goto LAB_007a6d4e;
    case 5:
      iVar2 = 0;
      goto LAB_007a6d3f;
    case 6:
      iVar2 = 0;
      goto LAB_007a6d30;
    case 7:
      iVar2 = 0;
      goto LAB_007a6d21;
    }
    while( true ) {
      param_1 = pbVar4 + 1;
      iVar2 = (iVar2 + (uint)*pbVar4) * 0x1003f;
LAB_007a6d21:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = (iVar2 + (uint)bVar1) * 0x1003f;
LAB_007a6d30:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007a6d3f:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007a6d4e:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007a6d5d:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007a6d6c:
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = ((uint)bVar1 + iVar2) * 0x1003f;
LAB_007a6d7b:
      iVar2 = (uint)*param_1 + iVar2;
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) break;
      iVar2 = iVar2 * 0x1003f;
      pbVar4 = param_1 + 1;
    }
  }
  return iVar2;
}

