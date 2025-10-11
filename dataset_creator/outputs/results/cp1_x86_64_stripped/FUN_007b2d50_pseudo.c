
long FUN_007b2d50(char *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = thunk_FUN_007129d0(param_2);
  if (*param_1 == '{') {
    iVar2 = thunk_FUN_00712ab0(param_1 + 1,param_2,lVar3);
    lVar4 = 0;
    if ((iVar2 == 0) && (param_1[lVar3 + 1] == '}')) {
      return lVar3 + 2;
    }
  }
  else {
    iVar2 = thunk_FUN_00712ab0(param_1,param_2,lVar3);
    if ((((iVar2 != 0) || (bVar1 = param_1[lVar3], (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) ||
        ((byte)(bVar1 - 0x30) < 10)) || (lVar4 = lVar3, bVar1 == 0x5f)) {
      lVar4 = 0;
    }
  }
  return lVar4;
}

