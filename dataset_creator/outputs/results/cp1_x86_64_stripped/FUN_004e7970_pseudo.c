
ulong FUN_004e7970(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_004ee2d0(*(undefined8 *)(param_1 + 0x20));
  lVar3 = FUN_004ee2d0(*(undefined8 *)(param_2 + 0x20));
  if ((lVar2 == 0) || (lVar3 == 0)) {
    uVar4 = 0xfffffffe;
  }
  else {
    iVar1 = FUN_004f1190(lVar2,lVar3,0);
    uVar4 = (ulong)(iVar1 == 0);
  }
  return uVar4;
}

