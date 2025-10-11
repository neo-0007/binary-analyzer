
long FUN_004b0f80(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_004b0f70();
  lVar2 = FUN_004ab550(uVar1);
  if (lVar2 != 0) {
    FUN_004abfe0(lVar2,0x68,(long)param_2,param_1);
    FUN_00771190(param_1,6,0x1f,"tls",4);
  }
  return lVar2;
}

