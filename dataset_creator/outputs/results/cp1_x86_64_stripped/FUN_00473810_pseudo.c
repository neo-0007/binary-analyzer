
ulong FUN_00473810(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00473360(param_1,param_2,0x100,0x80,0x40);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_0041cdd0(param_2,"mandatory-digest");
    uVar2 = 1;
    if (lVar3 != 0) {
      iVar1 = FUN_0041e1a0(lVar3,&DAT_0083e5c2);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}

