
void FUN_00519a80(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0051a350();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = FUN_0051a780(lVar2,"dynamic");
  if (iVar1 != 0) {
    iVar1 = FUN_0051a7e0(lVar2,"Dynamic engine loading support");
    if (iVar1 != 0) {
      iVar1 = FUN_0051a850(lVar2,FUN_00518e30);
      if (iVar1 != 0) {
        iVar1 = FUN_0051a860(lVar2,&LAB_00519a70);
        if (iVar1 != 0) {
          iVar1 = FUN_0051a870(lVar2,FUN_00518ee0);
          if (iVar1 != 0) {
            iVar1 = FUN_0051a880(lVar2,4);
            if (iVar1 != 0) {
              iVar1 = FUN_0051a890(lVar2,&DAT_009040a0);
              if (iVar1 != 0) {
                FUN_0051f000();
                FUN_0051ae30(lVar2);
                FUN_0051a5a0(lVar2);
                FUN_0051f050();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_0051a5a0(lVar2);
  return;
}

