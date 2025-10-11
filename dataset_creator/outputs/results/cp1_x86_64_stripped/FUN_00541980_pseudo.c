
undefined ** FUN_00541980(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR_DAT_009149c0;
  lVar3 = 0;
  ppuVar2 = &PTR_PTR_0092e280;
  do {
    iVar1 = FUN_004b7840(param_1,ppuVar4);
    if (iVar1 == 0) {
      iVar1 = FUN_004b7840(param_3,ppuVar2[1]);
      if (iVar1 == 0) {
        if (param_2 == 0) {
LAB_005419f2:
          return &PTR_s_ffdhe2048_0092e260 + lVar3 * 6;
        }
        iVar1 = FUN_004b7840(param_2,*ppuVar2);
        if (iVar1 == 0) goto LAB_005419f2;
      }
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 0xe) {
      return (undefined **)0x0;
    }
    ppuVar4 = (undefined **)ppuVar2[5];
    ppuVar2 = ppuVar2 + 6;
  } while( true );
}

