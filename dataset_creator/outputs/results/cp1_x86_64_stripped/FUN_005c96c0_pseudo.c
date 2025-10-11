
int FUN_005c96c0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = param_2[2];
  *param_3 = *param_2;
  iVar2 = FUN_00435f80(uVar1,param_3);
  if (iVar2 != 0) {
    iVar2 = 1;
    lVar3 = FUN_005457f0(*(undefined8 *)(param_1 + 0x10),param_3);
    if (lVar3 != 0) {
      FUN_00435e40(uVar1,lVar3);
      FUN_0041ad60(*(undefined8 *)(lVar3 + 8),"../crypto/conf/conf_api.c",0x3b);
      FUN_0041ad60(*(undefined8 *)(lVar3 + 0x10),"../crypto/conf/conf_api.c",0x3c);
      FUN_0041ad60(lVar3,"../crypto/conf/conf_api.c",0x3d);
      return 1;
    }
  }
  return iVar2;
}

