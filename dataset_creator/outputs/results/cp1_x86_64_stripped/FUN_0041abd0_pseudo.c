
undefined8 FUN_0041abd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (long *)FUN_00422380(&DAT_0093b1d0);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)FUN_0041aec0(8,"../crypto/initthread.c",100);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    iVar2 = FUN_00422390(&DAT_0093b1d0,plVar3);
    if (iVar2 == 0) {
      FUN_0041ad60(plVar3,"../crypto/initthread.c",0x68);
      return 0;
    }
    iVar2 = FUN_00422340(&DAT_0093fc8c,FUN_0041a650);
    puVar4 = DAT_0093fc90;
    if ((((iVar2 != 0) && (DAT_0093fc88 != 0)) && (DAT_0093fc90 != (undefined8 *)0x0)) &&
       (iVar2 = FUN_004222c0(DAT_0093fc90[1]), iVar2 != 0)) {
      iVar2 = FUN_00435f80(*puVar4,plVar3);
      FUN_004222e0(puVar4[1]);
      if (iVar2 != 0) goto LAB_0041ac09;
    }
    FUN_00422390(&DAT_0093b1d0,0);
    FUN_0041ad60(plVar3,"../crypto/initthread.c",0x6f);
  }
  else {
LAB_0041ac09:
    puVar4 = (undefined8 *)FUN_0041ad90(0x20,"../crypto/initthread.c",0x18b);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_2;
      *puVar4 = param_1;
      lVar1 = *plVar3;
      puVar4[2] = param_3;
      puVar4[3] = lVar1;
      *plVar3 = (long)puVar4;
      return 1;
    }
  }
  return 0;
}

