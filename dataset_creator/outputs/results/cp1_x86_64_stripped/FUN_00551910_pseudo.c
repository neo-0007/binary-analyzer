
long FUN_00551910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_0041ad90(0xb0,"../crypto/modes/ocb128.c",0x89);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    iVar1 = FUN_005516a0(lVar2,param_1,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      lVar3 = 0;
      FUN_0041ad60(lVar2,"../crypto/modes/ocb128.c",0x8e);
    }
  }
  return lVar3;
}

