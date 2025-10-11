
bool FUN_004d7360(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_004d7be0(0,param_2,(long)param_3);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0xc0) = *(long *)(lVar1 + 0xc0) + 1;
    FUN_0040f1c0(param_1,0x74);
  }
  return lVar1 != 0;
}

