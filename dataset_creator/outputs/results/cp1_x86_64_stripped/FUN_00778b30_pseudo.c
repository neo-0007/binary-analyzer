
int FUN_00778b30(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)*param_1 == 0) {
    *param_4 = 0;
  }
  else {
    lVar2 = FUN_00779ce0();
    *param_4 = lVar2;
    if (lVar2 != 0) {
      return 0;
    }
  }
  lVar2 = 0;
  if (param_3 == 0) goto LAB_00778b9a;
  do {
    lVar2 = *(long *)*param_1;
    if (lVar2 != 0) {
      lVar2 = FUN_00779ce0(lVar2,param_3);
    }
    *param_4 = lVar2;
LAB_00778b9a:
    do {
      if (lVar2 != 0) {
        return 0;
      }
      lVar2 = *param_1;
      lVar1 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 8) & 0xc) != 0) {
        return (-(uint)(lVar1 == 0) & 2) - 1;
      }
      if (lVar1 == 0) {
        return 1;
      }
      *param_1 = lVar2 + 0x10;
      lVar2 = FUN_00779ce0(lVar1,param_2);
      *param_4 = lVar2;
    } while (param_3 == 0);
    if (lVar2 != 0) {
      return 0;
    }
  } while( true );
}

