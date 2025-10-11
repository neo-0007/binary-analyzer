
void FUN_006ff640(byte *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  if (*(long *)(lVar2 + 0x30) != 0) {
    return;
  }
  if ((*param_1 & 2) == 0) {
    iVar1 = (**(code **)(*(long *)(lVar2 + 0xe0) + 0x68))();
    if (iVar1 != -1) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0xa0);
    uVar3 = *(uint *)(param_1 + 0x74);
    lVar4 = lVar2 + 0xdc;
    lVar5 = lVar2 + 0xd8;
    if ((*(long *)(lVar2 + 0x30) != 0) && ((uVar3 & 8) == 0)) {
      FUN_007104f0();
      lVar2 = *(long *)(param_1 + 0xa0);
      uVar3 = *(uint *)(param_1 + 0x74);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x74);
    lVar4 = lVar2 + 0xdc;
    lVar5 = lVar2 + 0xd8;
  }
  *(long *)(lVar2 + 0x30) = lVar5;
  *(long *)(lVar2 + 0x38) = lVar4;
  *(uint *)(param_1 + 0x74) = uVar3 | 8;
  return;
}

