
undefined8 FUN_004db570(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_004db500(param_1,0,0);
  if (-1 < iVar1) {
    lVar3 = FUN_0041ad90((long)iVar1,"../crypto/dso/dso_lib.c",0x140);
    if ((lVar3 == 0) || (iVar2 = FUN_004db500(param_1,lVar3,iVar1), iVar2 != iVar1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004db100(0,lVar3,0,param_2);
    }
    FUN_0041ad60(lVar3,"../crypto/dso/dso_lib.c",0x145);
    return uVar4;
  }
  return 0;
}

