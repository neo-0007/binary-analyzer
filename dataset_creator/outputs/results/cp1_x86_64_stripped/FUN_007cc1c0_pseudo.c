
void FUN_007cc1c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
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
          while (lVar1 = *(long *)(lVar4 + 0x28), **(char **)(lVar4 + 0x18) == '/') {
            FUN_007104f0();
            lVar4 = lVar1;
            if (lVar1 == 0) goto LAB_007cc240;
          }
          lVar4 = lVar1;
        } while (lVar1 != 0);
      }
LAB_007cc240:
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
          while (lVar1 = *(long *)(lVar4 + 0x28), **(char **)(lVar4 + 0x18) == '/') {
            FUN_007104f0();
            lVar4 = lVar1;
            if (lVar1 == 0) goto LAB_007cc2f0;
          }
          lVar4 = lVar1;
        } while (lVar1 != 0);
      }
LAB_007cc2f0:
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
      while (lVar3 = *(long *)(lVar2 + 0x28), **(char **)(lVar2 + 0x18) == '/') {
        FUN_007104f0();
        lVar2 = lVar3;
        if (lVar3 == 0) goto LAB_007cc365;
      }
      lVar2 = lVar3;
    } while (lVar3 != 0);
  }
LAB_007cc365:
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
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
          while (lVar1 = *(long *)(lVar4 + 0x28), **(char **)(lVar4 + 0x18) == '/') {
            FUN_007104f0();
            lVar4 = lVar1;
            if (lVar1 == 0) goto LAB_007cc3d0;
          }
          lVar4 = lVar1;
        } while (lVar1 != 0);
      }
LAB_007cc3d0:
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
          while (lVar1 = *(long *)(lVar4 + 0x28), **(char **)(lVar4 + 0x18) == '/') {
            FUN_007104f0();
            lVar4 = lVar1;
            if (lVar1 == 0) goto LAB_007cc4b0;
          }
          lVar4 = lVar1;
        } while (lVar1 != 0);
      }
LAB_007cc4b0:
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
      lVar3 = *(long *)(lVar2 + 0x28);
      if (**(char **)(lVar2 + 0x18) == '/') {
        FUN_007104f0();
      }
      lVar2 = lVar3;
    } while (lVar3 != 0);
  }
  do {
    while (lVar2 = *(long *)(param_1 + 0x28), **(char **)(param_1 + 0x18) != '/') {
      param_1 = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    FUN_007104f0();
    param_1 = lVar2;
  } while (lVar2 != 0);
  return;
}

