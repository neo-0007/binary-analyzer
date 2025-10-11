
undefined8 FUN_007cd140(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    return 1;
  }
  plVar6 = (long *)plVar4[1];
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)plVar6[1];
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)plVar8[1];
        if (plVar9 != (long *)0x0) {
          plVar5 = (long *)plVar9[1];
          if (plVar5 != (long *)0x0) {
            if (plVar5[1] != 0) {
              cVar1 = FUN_007cd140(plVar5[1] + 8);
              if (cVar1 == '\0') {
                return 0;
              }
              lVar3 = *(long *)plVar5[1];
              if (lVar3 != 0) {
                lVar2 = 0;
                do {
                  if (((long *)plVar5[1])[lVar2 * 2 + 3] != 0) {
                    return 0;
                  }
                  lVar2 = lVar2 + 1;
                } while (lVar2 != lVar3);
              }
              FUN_007104f0();
              plVar5[1] = 0;
              plVar5 = (long *)plVar9[1];
            }
            if (*plVar5 != 0) {
              lVar3 = 0;
              do {
                if (plVar5[lVar3 * 2 + 3] != 0) {
                  return 0;
                }
                lVar3 = lVar3 + 1;
              } while (*plVar5 != lVar3);
            }
            FUN_007104f0(plVar5);
            plVar9[1] = 0;
            plVar9 = (long *)plVar8[1];
          }
          if (*plVar9 != 0) {
            lVar3 = 0;
            do {
              if (plVar9[lVar3 * 2 + 3] != 0) {
                return 0;
              }
              lVar3 = lVar3 + 1;
            } while (lVar3 != *plVar9);
          }
          FUN_007104f0(plVar9);
          plVar8[1] = 0;
          plVar8 = (long *)plVar7[1];
        }
        if (*plVar8 != 0) {
          lVar3 = 0;
          do {
            if (plVar8[lVar3 * 2 + 3] != 0) {
              return 0;
            }
            lVar3 = lVar3 + 1;
          } while (*plVar8 != lVar3);
        }
        FUN_007104f0(plVar8);
        plVar7[1] = 0;
        plVar7 = (long *)plVar6[1];
      }
      if (*plVar7 != 0) {
        lVar3 = 0;
        do {
          if (plVar7[lVar3 * 2 + 3] != 0) {
            return 0;
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 != *plVar7);
      }
      FUN_007104f0(plVar7);
      plVar6[1] = 0;
      plVar6 = (long *)plVar4[1];
    }
    if (*plVar6 != 0) {
      lVar3 = 0;
      do {
        if (plVar6[lVar3 * 2 + 3] != 0) {
          return 0;
        }
        lVar3 = lVar3 + 1;
      } while (*plVar6 != lVar3);
    }
    FUN_007104f0(plVar6);
    plVar4[1] = 0;
    plVar4 = (long *)*param_1;
  }
  if (*plVar4 != 0) {
    lVar3 = 0;
    do {
      if (plVar4[lVar3 * 2 + 3] != 0) {
        return 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != *plVar4);
  }
  FUN_007104f0(plVar4);
  *param_1 = 0;
  return 1;
}

