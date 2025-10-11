
void FUN_007cc5c0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_007cc970();
  FUN_007ccd50();
  if (DAT_009460c0 != 0) {
    FUN_00770080(DAT_009460c0,FUN_007104f0);
  }
  lVar2 = DAT_009460b8;
  if (DAT_009460b8 != 0) {
    lVar3 = *(long *)(DAT_009460b8 + 0x20);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x20) != 0) {
          FUN_007cc1c0();
        }
        if (*(long *)(lVar4 + 0x30) != 0) {
          FUN_007cc1c0();
        }
        do {
          while (lVar1 = *(long *)(lVar4 + 0x28), **(char **)(lVar4 + 0x18) != '/') {
            lVar4 = lVar1;
            if (lVar1 == 0) goto LAB_007cc650;
          }
          FUN_007104f0();
          lVar4 = lVar1;
        } while (lVar1 != 0);
      }
LAB_007cc650:
      lVar4 = *(long *)(lVar3 + 0x30);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x20) != 0) {
          FUN_007cc1c0();
        }
        if (*(long *)(lVar4 + 0x30) != 0) {
          FUN_007cc1c0();
        }
        do {
          lVar1 = *(long *)(lVar4 + 0x28);
          if (**(char **)(lVar4 + 0x18) == '/') {
            FUN_007104f0();
          }
          lVar4 = lVar1;
        } while (lVar1 != 0);
      }
      do {
        lVar4 = *(long *)(lVar3 + 0x28);
        if (**(char **)(lVar3 + 0x18) == '/') {
          FUN_007104f0();
        }
        lVar3 = lVar4;
      } while (lVar4 != 0);
    }
    lVar3 = *(long *)(lVar2 + 0x30);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x20) != 0) {
          FUN_007cc1c0();
        }
        if (*(long *)(lVar4 + 0x30) != 0) {
          FUN_007cc1c0();
        }
        do {
          while (lVar1 = *(long *)(lVar4 + 0x28), **(char **)(lVar4 + 0x18) != '/') {
            lVar4 = lVar1;
            if (lVar1 == 0) goto LAB_007cc700;
          }
          FUN_007104f0();
          lVar4 = lVar1;
        } while (lVar1 != 0);
      }
LAB_007cc700:
      lVar4 = *(long *)(lVar3 + 0x30);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x20) != 0) {
          FUN_007cc1c0();
        }
        if (*(long *)(lVar4 + 0x30) != 0) {
          FUN_007cc1c0();
        }
        do {
          lVar1 = *(long *)(lVar4 + 0x28);
          if (**(char **)(lVar4 + 0x18) == '/') {
            FUN_007104f0();
          }
          lVar4 = lVar1;
        } while (lVar1 != 0);
      }
      do {
        lVar4 = *(long *)(lVar3 + 0x28);
        if (**(char **)(lVar3 + 0x18) == '/') {
          FUN_007104f0();
        }
        lVar3 = lVar4;
      } while (lVar4 != 0);
    }
    do {
      while (lVar3 = *(long *)(lVar2 + 0x28), **(char **)(lVar2 + 0x18) != '/') {
        lVar2 = lVar3;
        if (lVar3 == 0) goto LAB_007cc77d;
      }
      FUN_007104f0();
      lVar2 = lVar3;
    } while (lVar3 != 0);
  }
LAB_007cc77d:
  if (DAT_009460c8 == 0) {
    return;
  }
  FUN_00770080(DAT_009460c8,FUN_007cc100);
  return;
}

