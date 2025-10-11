
void FUN_004a9560(void)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_00422380(&DAT_00940fb0);
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      lVar4 = FUN_00436020();
      while (lVar4 != 0) {
        FUN_0041ad60(*(undefined8 *)(lVar4 + 0x3d0),"../crypto/async/async.c",0x62);
        FUN_005bddc0(lVar4);
        FUN_0041ad60(lVar4,"../crypto/async/async.c",100);
        lVar4 = FUN_00436020(*plVar3);
      }
      lVar4 = *plVar3;
    }
    FUN_004360b0(lVar4);
    FUN_0041ad60(plVar3,"../crypto/async/async.c",0x1a4);
    FUN_00422390(&DAT_00940fb0,0);
  }
  FUN_005bdd10();
  uVar1 = FUN_004a9550();
  iVar2 = FUN_00422390(&DAT_00940fb4,0);
  if (iVar2 != 0) {
    FUN_0041ad60(uVar1,"../crypto/async/async.c",0x4b);
    return;
  }
  return;
}

