
long * FUN_005c9940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = FUN_00436410();
  if (lVar3 == 0) {
    plVar4 = (long *)0x0;
    FUN_004360b0(0);
  }
  else {
    plVar4 = (long *)FUN_0041ad90(0x18,"../crypto/conf/conf_api.c",0xc1);
    if (plVar4 == (long *)0x0) {
      FUN_004360b0(lVar3);
    }
    else {
      iVar2 = thunk_FUN_007129d0(param_2);
      lVar5 = FUN_0041ad90((long)(iVar2 + 1),"../crypto/conf/conf_api.c",0xc4);
      *plVar4 = lVar5;
      if (lVar5 != 0) {
        thunk_FUN_00713a50(lVar5,param_2,(long)(iVar2 + 1));
        plVar4[2] = lVar3;
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        plVar4[1] = 0;
        lVar5 = FUN_005457f0(uVar1,plVar4);
        if ((lVar5 == 0) && (iVar2 = FUN_00545d90(*(undefined8 *)(param_1 + 0x10)), iVar2 < 1)) {
          return plVar4;
        }
      }
      FUN_004360b0(lVar3);
      FUN_0041ad60(*plVar4,"../crypto/conf/conf_api.c",0xd3);
    }
  }
  FUN_0041ad60(plVar4,"../crypto/conf/conf_api.c",0xd4);
  return (long *)0x0;
}

