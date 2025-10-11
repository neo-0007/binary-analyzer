
void FUN_0051c360(void)

{
  int iVar1;
  long lVar2;
  
  if ((DAT_0094b59c._3_1_ & 0x40) == 0) {
    return;
  }
  lVar2 = FUN_0051a350();
  if (lVar2 != 0) {
    iVar1 = FUN_0051a780(lVar2,"rdrand");
    if (iVar1 != 0) {
      iVar1 = FUN_0051a7e0(lVar2,"Intel RDRAND engine");
      if (iVar1 != 0) {
        iVar1 = FUN_0051a880(lVar2,8);
        if (iVar1 != 0) {
          iVar1 = FUN_0051a850(lVar2,FUN_0051c320);
          if (iVar1 != 0) {
            iVar1 = FUN_0051d770(lVar2,&DAT_0093bf40);
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
    FUN_0051a5a0(lVar2);
    return;
  }
  return;
}

