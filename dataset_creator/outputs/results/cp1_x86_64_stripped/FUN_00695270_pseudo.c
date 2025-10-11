
void FUN_00695270(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x48);
  if (param_1[1] != -1) {
    lVar3 = param_1[3];
    lVar4 = param_1[2];
    *(long *)(lVar1 + 8) = param_1[1] + lVar2;
    *(long *)(lVar1 + 0x10) = lVar4 + lVar2;
    *(long *)(lVar1 + 0x18) = lVar3 + lVar2;
  }
  if (param_1[4] == -1) {
    return;
  }
  FUN_006943b0(lVar1,lVar2 + param_1[4],param_1[6] + lVar2,param_1[5]);
  return;
}

