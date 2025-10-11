
void FUN_004cd950(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  while( true ) {
    iVar1 = FUN_00436480(DAT_00940fe8);
    if (iVar1 < 1) break;
    plVar2 = (long *)FUN_00436020();
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(plVar2);
        lVar3 = *plVar2;
      }
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
      FUN_0041ad60(plVar2[1],"../crypto/conf/conf_mod.c",0x1d9);
      FUN_0041ad60(plVar2[2],"../crypto/conf/conf_mod.c",0x1da);
      FUN_0041ad60(plVar2,"../crypto/conf/conf_mod.c",0x1db);
    }
  }
  FUN_004360b0(DAT_00940fe8);
  DAT_00940fe8 = 0;
  return;
}

