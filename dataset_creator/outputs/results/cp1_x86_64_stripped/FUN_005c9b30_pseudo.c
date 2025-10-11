
long FUN_005c9b30(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0041ad90(0x30,"../crypto/conf/conf_def.c",0x73);
  if (lVar2 != 0) {
    iVar1 = (**(code **)(param_1 + 0x10))(lVar2);
    if (iVar1 == 0) {
      FUN_0041ad60(lVar2,"../crypto/conf/conf_def.c",0x76);
      return 0;
    }
  }
  return lVar2;
}

